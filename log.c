/* Logging routines.
 *
 * IRC Services is copyright (c) 1996-2002 Andrew Church.
 *     E-mail: <achurch@achurch.org>
 * Parts copyright (c) 1999-2000 Andrew Kempe and others.
 * This program is free but copyrighted software; see the file COPYING for
 * details.
 */

#include "services.h"
#include "pseudo.h"

static FILE *logfile;

/*************************************************************************/

/* Open the log file.  Return -1 if the log file could not be opened, else
 * return 0. */

int open_log(void)
{
    if (logfile)
	return 0;
    logfile = fopen(log_filename, "a");
    if (logfile)
	setbuf(logfile, NULL);
    return logfile!=NULL ? 0 : -1;
}

/* Close the log file. */

void close_log(void)
{
    if (!logfile)
	return;
    fclose(logfile);
    logfile = NULL;
}

/*************************************************************************/

/* Log stuff to the log file with a datestamp.  Note that errno is
 * preserved by this routine and log_perror().
 */

void log(const char *fmt, ...)
{
    va_list args;
    time_t t;
    struct tm tm;
    char buf[256];
    int errno_save = errno;

    va_start(args, fmt);
    time(&t);
    tm = *localtime(&t);
#if HAVE_GETTIMEOFDAY
    if (debug) {
	char *s;
	struct timeval tv;
	gettimeofday(&tv, NULL);
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S", &tm);
	s = buf + strlen(buf);
	s += snprintf(s, sizeof(buf)-(s-buf), ".%06d", tv.tv_usec);
	strftime(s, sizeof(buf)-(s-buf)-1, " %Y] ", &tm);
    } else {
#endif
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S %Y] ", &tm);
#if HAVE_GETTIMEOFDAY
    }
#endif
    if (logfile) {
	fputs(buf, logfile);
	vfprintf(logfile, fmt, args);
	fputc('\n', logfile);
    }
    if (nofork) {
	fputs(buf, stderr);
	vfprintf(stderr, fmt, args);
	fputc('\n', stderr);
    }
    errno = errno_save;
}


/* Like log(), but tack a ": " and a system error message (as returned by
 * strerror()) onto the end.
 */

void log_perror(const char *fmt, ...)
{
    va_list args;
    time_t t;
    struct tm tm;
    char buf[256];
    int errno_save = errno;
    const char *errstr;

    va_start(args, fmt);
    time(&t);
    tm = *localtime(&t);
#if HAVE_GETTIMEOFDAY
    if (debug) {
	char *s;
	struct timeval tv;
	gettimeofday(&tv, NULL);
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S", &tm);
	s = buf + strlen(buf);
	s += snprintf(s, sizeof(buf)-(s-buf), ".%06d", tv.tv_usec);
	strftime(s, sizeof(buf)-(s-buf)-1, " %Y] ", &tm);
    } else {
#endif
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S %Y] ", &tm);
#if HAVE_GETTIMEOFDAY
    }
#endif
    errstr = (errno_save<0) ? hstrerror(-errno_save) : strerror(errno_save);
    if (logfile) {
	fputs(buf, logfile);
	vfprintf(logfile, fmt, args);
	fprintf(logfile, ": %s\n", errstr);
    }
    if (nofork) {
	fputs(buf, stderr);
	vfprintf(stderr, fmt, args);
	fprintf(stderr, ": %s\n", errstr);
    }
    errno = errno_save;
}

/*************************************************************************/

/* We've hit something we can't recover from.  Let people know what
 * happened, then go down.
 */

void fatal(const char *fmt, ...)
{
    va_list args;
    time_t t;
    struct tm tm;
    char buf[256], buf2[4096];

    va_start(args, fmt);
    time(&t);
    tm = *localtime(&t);
#if HAVE_GETTIMEOFDAY
    if (debug) {
	char *s;
	struct timeval tv;
	gettimeofday(&tv, NULL);
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S", &tm);
	s = buf + strlen(buf);
	s += snprintf(s, sizeof(buf)-(s-buf), ".%06d", tv.tv_usec);
	strftime(s, sizeof(buf)-(s-buf)-1, " %Y] ", &tm);
    } else {
#endif
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S %Y] ", &tm);
#if HAVE_GETTIMEOFDAY
    }
#endif
    vsnprintf(buf2, sizeof(buf2), fmt, args);
    if (logfile)
	fprintf(logfile, "%sFATAL: %s\n", buf, buf2);
    if (nofork)
	fprintf(stderr, "%sFATAL: %s\n", buf, buf2);
    if (servsock >= 0)
	wallops(NULL, "FATAL ERROR!  %s", buf2);
    exit(1);
}


/* Same thing, but do it like perror(). */

void fatal_perror(const char *fmt, ...)
{
    va_list args;
    time_t t;
    struct tm tm;
    char buf[256], buf2[4096];
    int errno_save = errno;
    const char *errstr;

    va_start(args, fmt);
    time(&t);
    tm = *localtime(&t);
#if HAVE_GETTIMEOFDAY
    if (debug) {
	char *s;
	struct timeval tv;
	gettimeofday(&tv, NULL);
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S", &tm);
	s = buf + strlen(buf);
	s += snprintf(s, sizeof(buf)-(s-buf), ".%06d", tv.tv_usec);
	strftime(s, sizeof(buf)-(s-buf)-1, " %Y] ", &tm);
    } else {
#endif
	strftime(buf, sizeof(buf)-1, "[%b %d %H:%M:%S %Y] ", &tm);
#if HAVE_GETTIMEOFDAY
    }
#endif
    vsnprintf(buf2, sizeof(buf2), fmt, args);
    errstr = (errno_save<0) ? hstrerror(-errno_save) : strerror(errno_save);
    if (logfile)
	fprintf(logfile, "%sFATAL: %s: %s\n", buf, buf2, errstr);
    if (stderr)
	fprintf(stderr, "%sFATAL: %s: %s\n", buf, buf2, errstr);
    if (servsock >= 0)
	wallops(NULL, "FATAL ERROR!  %s: %s", buf2, errstr);
    exit(1);
}

/*************************************************************************/
