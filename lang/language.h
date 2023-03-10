#define LANG_NAME                        0
#define STRFTIME_DATE_TIME_FORMAT        1
#define STRFTIME_LONG_DATE_FORMAT        2
#define STRFTIME_SHORT_DATE_FORMAT       3
#define STRFTIME_DAYS_SHORT              4
#define STRFTIME_DAYS_LONG               5
#define STRFTIME_MONTHS_SHORT            6
#define STRFTIME_MONTHS_LONG             7
#define STR_DAY                          8
#define STR_DAYS                         9
#define STR_HOUR                         10
#define STR_HOURS                        11
#define STR_MINUTE                       12
#define STR_MINUTES                      13
#define STR_SECOND                       14
#define STR_SECONDS                      15
#define COMMA_SPACE                      16
#define USER_RECORD_NOT_FOUND            17
#define UNKNOWN_COMMAND                  18
#define UNKNOWN_COMMAND_HELP             19
#define SYNTAX_ERROR                     20
#define MORE_INFO                        21
#define NO_HELP_AVAILABLE                22
#define BAD_EMAIL                        23
#define BAD_URL                          24
#define BAD_USERHOST_MASK                25
#define BAD_EXPIRY_TIME                  26
#define SERVICE_OFFLINE                  27
#define READ_ONLY_MODE                   28
#define PASSWORD_INCORRECT               29
#define ACCESS_DENIED                    30
#define PERMISSION_DENIED                31
#define MORE_OBSCURE_PASSWORD            32
#define PASSWORD_TRUNCATED               33
#define NICK_NOT_REGISTERED              34
#define NICK_NOT_REGISTERED_HELP         35
#define NICK_X_NOT_REGISTERED            36
#define NICK_X_NOT_IN_USE                37
#define NICK_X_FORBIDDEN                 38
#define NICK_X_SUSPENDED                 39
#define NICK_X_SUSPENDED_MEMOS           40
#define NICK_IDENTIFY_REQUIRED           41
#define NICK_X_NOT_ON_CHAN_X             42
#define CHAN_X_NOT_REGISTERED            43
#define CHAN_X_NOT_IN_USE                44
#define CHAN_X_FORBIDDEN                 45
#define CHAN_X_SUSPENDED                 46
#define CHAN_X_SUSPENDED_MEMOS           47
#define CHAN_IDENTIFY_REQUIRED           48
#define SERV_X_NOT_FOUND                 49
#define EXPIRES_NONE                     50
#define EXPIRES_SOON                     51
#define EXPIRES_M                        52
#define EXPIRES_1M                       53
#define EXPIRES_HM                       54
#define EXPIRES_H1M                      55
#define EXPIRES_1HM                      56
#define EXPIRES_1H1M                     57
#define EXPIRES_D                        58
#define EXPIRES_1D                       59
#define NICK_IS_REGISTERED               60
#define NICK_IS_SECURE                   61
#define NICK_MAY_NOT_BE_USED             62
#define DISCONNECT_IN_1_MINUTE           63
#define DISCONNECT_IN_20_SECONDS         64
#define DISCONNECT_NOW                   65
#define FORCENICKCHANGE_IN_1_MINUTE      66
#define FORCENICKCHANGE_IN_20_SECONDS    67
#define FORCENICKCHANGE_NOW              68
#define NICK_EXPIRES_SOON                69
#define NICK_EXPIRED                     70
#define NICK_REGISTER_SYNTAX             71
#define NICK_REGISTER_REQ_EMAIL_SYNTAX   72
#define NICK_REGISTRATION_DISABLED       73
#define NICK_REGISTRATION_FAILED         74
#define NICK_REG_PLEASE_WAIT             75
#define NICK_CANNOT_BE_REGISTERED        76
#define NICK_ALREADY_REGISTERED          77
#define NICK_REGISTERED                  78
#define NICK_PASSWORD_IS                 79
#define NICK_IDENTIFY_SYNTAX             80
#define NICK_IDENTIFY_FAILED             81
#define NICK_IDENTIFY_SUCCEEDED          82
#define NICK_DROP_SYNTAX                 83
#define NICK_DROP_DISABLED               84
#define NICK_DROPPED                     85
#define NICK_X_DROPPED                   86
#define NICK_SET_SYNTAX                  87
#define NICK_SET_SERVADMIN_SYNTAX        88
#define NICK_SET_DISABLED                89
#define NICK_SET_UNKNOWN_OPTION          90
#define NICK_SET_UNKNOWN_OPTION_OR_BAD_NICK 91
#define NICK_SET_PASSWORD_FAILED         92
#define NICK_SET_PASSWORD_CHANGED        93
#define NICK_SET_PASSWORD_CHANGED_TO     94
#define NICK_SET_LANGUAGE_SYNTAX         95
#define NICK_SET_LANGUAGE_UNKNOWN        96
#define NICK_SET_LANGUAGE_CHANGED        97
#define NICK_SET_URL_CHANGED             98
#define NICK_SET_EMAIL_CHANGED           99
#define NICK_SET_KILL_SYNTAX             100
#define NICK_SET_KILL_IMMED_SYNTAX       101
#define NICK_SET_KILL_ON                 102
#define NICK_SET_KILL_QUICK              103
#define NICK_SET_KILL_IMMED              104
#define NICK_SET_KILL_IMMED_DISABLED     105
#define NICK_SET_KILL_OFF                106
#define NICK_SET_SECURE_SYNTAX           107
#define NICK_SET_SECURE_ON               108
#define NICK_SET_SECURE_OFF              109
#define NICK_SET_PRIVATE_SYNTAX          110
#define NICK_SET_PRIVATE_ON              111
#define NICK_SET_PRIVATE_OFF             112
#define NICK_SET_HIDE_SYNTAX             113
#define NICK_SET_HIDE_EMAIL_ON           114
#define NICK_SET_HIDE_EMAIL_OFF          115
#define NICK_SET_HIDE_MASK_ON            116
#define NICK_SET_HIDE_MASK_OFF           117
#define NICK_SET_HIDE_QUIT_ON            118
#define NICK_SET_HIDE_QUIT_OFF           119
#define NICK_SET_NOEXPIRE_SYNTAX         120
#define NICK_SET_NOEXPIRE_ON             121
#define NICK_SET_NOEXPIRE_OFF            122
#define NICK_UNSET_SYNTAX                123
#define NICK_UNSET_SYNTAX_REQ_EMAIL      124
#define NICK_UNSET_URL                   125
#define NICK_UNSET_EMAIL                 126
#define NICK_UNSET_EMAIL_BAD             127
#define NICK_UNSET_EMAIL_OTHER_BAD       128
#define NICK_ACCESS_SYNTAX               129
#define NICK_ACCESS_ALREADY_PRESENT      130
#define NICK_ACCESS_REACHED_LIMIT        131
#define NICK_ACCESS_ADDED                132
#define NICK_ACCESS_NOT_FOUND            133
#define NICK_ACCESS_DELETED              134
#define NICK_ACCESS_LIST                 135
#define NICK_ACCESS_LIST_X               136
#define NICK_LINK_SYNTAX                 137
#define NICK_LINK_DISABLED               138
#define NICK_LINK_FAILED                 139
#define NICK_NO_LINK_SAME                140
#define NICK_LINK_CIRCULAR               141
#define NICK_LINK_TOO_DEEP               142
#define NICK_LINK_TOO_MANY_CHANNELS      143
#define NICK_LINKED                      144
#define NICK_UNLINK_SYNTAX               145
#define NICK_UNLINK_FAILED               146
#define NICK_NOT_LINKED                  147
#define NICK_UNLINKED                    148
#define NICK_X_NOT_LINKED                149
#define NICK_X_UNLINKED                  150
#define NICK_LISTLINKS_SYNTAX            151
#define NICK_LISTLINKS_HEADER            152
#define NICK_LISTLINKS_FOOTER            153
#define NICK_X_IS_LINKED                 154
#define NICK_X_IS_LINKED_VIA_X           155
#define NICK_INFO_SYNTAX                 156
#define NICK_INFO_REALNAME               157
#define NICK_INFO_ADDRESS                158
#define NICK_INFO_ADDRESS_ONLINE         159
#define NICK_INFO_ADDRESS_ONLINE_NOHOST  160
#define NICK_INFO_TIME_REGGED            161
#define NICK_INFO_LAST_SEEN              162
#define NICK_INFO_LAST_QUIT              163
#define NICK_INFO_URL                    164
#define NICK_INFO_EMAIL                  165
#define NICK_INFO_OPTIONS                166
#define NICK_INFO_LINKED_TO              167
#define NICK_INFO_OPT_KILL               168
#define NICK_INFO_OPT_SECURE             169
#define NICK_INFO_OPT_PRIVATE            170
#define NICK_INFO_OPT_NONE               171
#define NICK_INFO_NO_EXPIRE              172
#define NICK_INFO_SUSPEND_DETAILS        173
#define NICK_INFO_SUSPEND_REASON         174
#define NICK_INFO_SHOW_ALL               175
#define NICK_LISTCHANS_SYNTAX            176
#define NICK_LISTCHANS_SERVADMIN_SYNTAX  177
#define NICK_LISTCHANS_NONE              178
#define NICK_LISTCHANS_HEADER            179
#define NICK_LISTCHANS_ENTRY             180
#define NICK_LISTCHANS_END               181
#define NICK_LIST_SYNTAX                 182
#define NICK_LIST_SERVADMIN_SYNTAX       183
#define NICK_LIST_HEADER                 184
#define NICK_LIST_RESULTS                185
#define NICK_RECOVER_SYNTAX              186
#define NICK_NO_RECOVER_SELF             187
#define NICK_RECOVERED                   188
#define NICK_RELEASE_SYNTAX              189
#define NICK_RELEASE_NOT_HELD            190
#define NICK_RELEASED                    191
#define NICK_GHOST_SYNTAX                192
#define NICK_NO_GHOST_SELF               193
#define NICK_GHOST_KILLED                194
#define NICK_GETPASS_SYNTAX              195
#define NICK_GETPASS_UNAVAILABLE         196
#define NICK_GETPASS_PASSWORD_IS         197
#define NICK_FORBID_SYNTAX               198
#define NICK_FORBID_SUCCEEDED            199
#define NICK_FORBID_FAILED               200
#define NICK_SUSPEND_SYNTAX              201
#define NICK_SUSPEND_SUCCEEDED           202
#define NICK_SUSPEND_ALREADY_SUSPENDED   203
#define NICK_UNSUSPEND_SYNTAX            204
#define NICK_UNSUSPEND_SUCCEEDED         205
#define NICK_SUSPEND_NOT_SUSPENDED       206
#define CHAN_LEVEL_AUTOOP                207
#define CHAN_LEVEL_AUTOVOICE             208
#define CHAN_LEVEL_AUTODEOP              209
#define CHAN_LEVEL_AUTODEOP_HALFOP       210
#define CHAN_LEVEL_NOJOIN                211
#define CHAN_LEVEL_INVITE                212
#define CHAN_LEVEL_AKICK                 213
#define CHAN_LEVEL_SET                   214
#define CHAN_LEVEL_CLEAR                 215
#define CHAN_LEVEL_UNBAN                 216
#define CHAN_LEVEL_OPDEOP                217
#define CHAN_LEVEL_ACCESS_LIST           218
#define CHAN_LEVEL_ACCESS_CHANGE         219
#define CHAN_LEVEL_MEMO                  220
#define CHAN_LEVEL_VOICE                 221
#define CHAN_LEVEL_AUTOHALFOP            222
#define CHAN_LEVEL_HALFOP                223
#define CHAN_LEVEL_AUTOPROTECT           224
#define CHAN_LEVEL_PROTECT               225
#define CHAN_IS_REGISTERED               226
#define CHAN_NOT_ALLOWED_OP              227
#define CHAN_MAY_NOT_BE_USED             228
#define CHAN_NOT_ALLOWED_TO_JOIN         229
#define CHAN_BOUNCY_MODES                230
#define CHAN_REGISTER_SYNTAX             231
#define CHAN_REGISTER_DISABLED           232
#define CHAN_REGISTER_NOT_LOCAL          233
#define CHAN_MUST_REGISTER_NICK          234
#define CHAN_MUST_IDENTIFY_NICK          235
#define CHAN_MAY_NOT_BE_REGISTERED       236
#define CHAN_ALREADY_REGISTERED          237
#define CHAN_MUST_BE_CHANOP              238
#define CHAN_REACHED_CHANNEL_LIMIT       239
#define CHAN_EXCEEDED_CHANNEL_LIMIT      240
#define CHAN_REGISTRATION_FAILED         241
#define CHAN_REGISTERED                  242
#define CHAN_PASSWORD_IS                 243
#define CHAN_IDENTIFY_SYNTAX             244
#define CHAN_IDENTIFY_FAILED             245
#define CHAN_IDENTIFY_SUCCEEDED          246
#define CHAN_DROP_SYNTAX                 247
#define CHAN_DROP_DISABLED               248
#define CHAN_DROPPED                     249
#define CHAN_SET_SYNTAX                  250
#define CHAN_SET_DISABLED                251
#define CHAN_SET_UNKNOWN_OPTION          252
#define CHAN_SET_FOUNDER_TOO_MANY_CHANS  253
#define CHAN_FOUNDER_CHANGED             254
#define CHAN_SUCCESSOR_CHANGED           255
#define CHAN_SUCCESSOR_IS_FOUNDER        256
#define CHAN_SET_PASSWORD_FAILED         257
#define CHAN_PASSWORD_CHANGED            258
#define CHAN_PASSWORD_CHANGED_TO         259
#define CHAN_DESC_CHANGED                260
#define CHAN_URL_CHANGED                 261
#define CHAN_EMAIL_CHANGED               262
#define CHAN_ENTRY_MSG_CHANGED           263
#define CHAN_SET_TOPIC_FAILED            264
#define CHAN_SET_MLOCK_KEY_REQUIRED      265
#define CHAN_SET_MLOCK_LIMIT_REQUIRED    266
#define CHAN_SET_MLOCK_LIMIT_POSITIVE    267
#define CHAN_SET_MLOCK_MODE_REG_BAD      268
#define CHAN_SET_MLOCK_MODE_F_BAD        269
#define CHAN_SET_MLOCK_UNKNOWN_CHAR      270
#define CHAN_MLOCK_CHANGED               271
#define CHAN_MLOCK_REMOVED               272
#define CHAN_SET_KEEPTOPIC_SYNTAX        273
#define CHAN_SET_KEEPTOPIC_ON            274
#define CHAN_SET_KEEPTOPIC_OFF           275
#define CHAN_SET_TOPICLOCK_SYNTAX        276
#define CHAN_SET_TOPICLOCK_ON            277
#define CHAN_SET_TOPICLOCK_OFF           278
#define CHAN_SET_PRIVATE_SYNTAX          279
#define CHAN_SET_PRIVATE_ON              280
#define CHAN_SET_PRIVATE_OFF             281
#define CHAN_SET_SECUREOPS_SYNTAX        282
#define CHAN_SET_SECUREOPS_ON            283
#define CHAN_SET_SECUREOPS_OFF           284
#define CHAN_SET_LEAVEOPS_SYNTAX         285
#define CHAN_SET_LEAVEOPS_ON             286
#define CHAN_SET_LEAVEOPS_OFF            287
#define CHAN_SET_RESTRICTED_SYNTAX       288
#define CHAN_SET_RESTRICTED_ON           289
#define CHAN_SET_RESTRICTED_OFF          290
#define CHAN_SET_SECURE_SYNTAX           291
#define CHAN_SET_SECURE_ON               292
#define CHAN_SET_SECURE_OFF              293
#define CHAN_SET_OPNOTICE_SYNTAX         294
#define CHAN_SET_OPNOTICE_ON             295
#define CHAN_SET_OPNOTICE_OFF            296
#define CHAN_SET_ENFORCE_SYNTAX          297
#define CHAN_SET_ENFORCE_ON              298
#define CHAN_SET_ENFORCE_OFF             299
#define CHAN_SET_NOEXPIRE_SYNTAX         300
#define CHAN_SET_NOEXPIRE_ON             301
#define CHAN_SET_NOEXPIRE_OFF            302
#define CHAN_UNSET_SYNTAX                303
#define CHAN_SUCCESSOR_UNSET             304
#define CHAN_URL_UNSET                   305
#define CHAN_EMAIL_UNSET                 306
#define CHAN_ENTRY_MSG_UNSET             307
#define CHAN_ACCESS_SYNTAX               308
#define CHAN_ACCESS_DISABLED             309
#define CHAN_ACCESS_LEVEL_NONZERO        310
#define CHAN_ACCESS_LEVEL_RANGE          311
#define CHAN_ACCESS_NICKS_ONLY           312
#define CHAN_ACCESS_REACHED_LIMIT        313
#define CHAN_ACCESS_LEVEL_UNCHANGED      314
#define CHAN_ACCESS_LEVEL_CHANGED        315
#define CHAN_ACCESS_ADDED                316
#define CHAN_ACCESS_NO_SUCH_ENTRY        317
#define CHAN_ACCESS_NOT_FOUND            318
#define CHAN_ACCESS_NO_MATCH             319
#define CHAN_ACCESS_DELETED              320
#define CHAN_ACCESS_DELETED_ONE          321
#define CHAN_ACCESS_DELETED_SEVERAL      322
#define CHAN_ACCESS_LIST_EMPTY           323
#define CHAN_ACCESS_LIST_HEADER          324
#define CHAN_ACCESS_LIST_FORMAT          325
#define CHAN_ACCESS_COUNT                326
#define CHAN_SOP_SYNTAX                  327
#define CHAN_AOP_SYNTAX                  328
#define CHAN_HOP_SYNTAX                  329
#define CHAN_VOP_SYNTAX                  330
#define CHAN_XOP_ADDED                   331
#define CHAN_XOP_LEVEL_CHANGED           332
#define CHAN_XOP_LEVEL_UNCHANGED         333
#define CHAN_XOP_NICKS_ONLY              334
#define CHAN_XOP_NICKS_ONLY_HOP          335
#define CHAN_XOP_REACHED_LIMIT           336
#define CHAN_XOP_REACHED_LIMIT_HOP       337
#define CHAN_XOP_NOT_FOUND               338
#define CHAN_XOP_NO_SUCH_ENTRY           339
#define CHAN_XOP_NO_MATCH                340
#define CHAN_XOP_DELETED                 341
#define CHAN_XOP_DELETED_ONE             342
#define CHAN_XOP_DELETED_SEVERAL         343
#define CHAN_XOP_LIST_EMPTY              344
#define CHAN_XOP_LIST_HEADER             345
#define CHAN_XOP_LIST_FORMAT             346
#define CHAN_XOP_COUNT                   347
#define CHAN_AKICK_SYNTAX                348
#define CHAN_AKICK_DISABLED              349
#define CHAN_AKICK_ALREADY_EXISTS        350
#define CHAN_AKICK_REACHED_LIMIT         351
#define CHAN_AKICK_ADDED                 352
#define CHAN_AKICK_NO_SUCH_ENTRY         353
#define CHAN_AKICK_NOT_FOUND             354
#define CHAN_AKICK_NO_MATCH              355
#define CHAN_AKICK_DELETED               356
#define CHAN_AKICK_DELETED_ONE           357
#define CHAN_AKICK_DELETED_SEVERAL       358
#define CHAN_AKICK_LIST_EMPTY            359
#define CHAN_AKICK_LIST_HEADER           360
#define CHAN_AKICK_LIST_FORMAT           361
#define CHAN_AKICK_VIEW_FORMAT           362
#define CHAN_AKICK_ENFORCE_DONE          363
#define CHAN_AKICK_COUNT                 364
#define CHAN_LEVELS_SYNTAX               365
#define CHAN_LEVELS_RANGE                366
#define CHAN_LEVELS_CHANGED              367
#define CHAN_LEVELS_UNKNOWN              368
#define CHAN_LEVELS_DISABLED             369
#define CHAN_LEVELS_LIST_HEADER          370
#define CHAN_LEVELS_LIST_DISABLED        371
#define CHAN_LEVELS_LIST_FOUNDER         372
#define CHAN_LEVELS_LIST_NORMAL          373
#define CHAN_LEVELS_RESET                374
#define CHAN_INFO_SYNTAX                 375
#define CHAN_INFO_HEADER                 376
#define CHAN_INFO_FOUNDER                377
#define CHAN_INFO_NO_FOUNDER             378
#define CHAN_INFO_SUCCESSOR              379
#define CHAN_INFO_NO_SUCCESSOR           380
#define CHAN_INFO_DESCRIPTION            381
#define CHAN_INFO_ENTRYMSG               382
#define CHAN_INFO_TIME_REGGED            383
#define CHAN_INFO_LAST_USED              384
#define CHAN_INFO_LAST_TOPIC             385
#define CHAN_INFO_TOPIC_SET_BY           386
#define CHAN_INFO_URL                    387
#define CHAN_INFO_EMAIL                  388
#define CHAN_INFO_OPTIONS                389
#define CHAN_INFO_OPT_PRIVATE            390
#define CHAN_INFO_OPT_KEEPTOPIC          391
#define CHAN_INFO_OPT_TOPICLOCK          392
#define CHAN_INFO_OPT_SECUREOPS          393
#define CHAN_INFO_OPT_LEAVEOPS           394
#define CHAN_INFO_OPT_RESTRICTED         395
#define CHAN_INFO_OPT_SECURE             396
#define CHAN_INFO_OPT_OPNOTICE           397
#define CHAN_INFO_OPT_ENFORCE            398
#define CHAN_INFO_OPT_NONE               399
#define CHAN_INFO_MODE_LOCK              400
#define CHAN_INFO_NO_EXPIRE              401
#define CHAN_INFO_SUSPEND_DETAILS        402
#define CHAN_INFO_SUSPEND_REASON         403
#define CHAN_INFO_SHOW_ALL               404
#define CHAN_LIST_SYNTAX                 405
#define CHAN_LIST_SERVADMIN_SYNTAX       406
#define CHAN_LIST_HEADER                 407
#define CHAN_LIST_FORMAT                 408
#define CHAN_LIST_END                    409
#define CHAN_INVITE_SYNTAX               410
#define CHAN_INVITE_OK                   411
#define CHAN_OPVOICE_SYNTAX              412
#define CHAN_OP_SUCCEEDED                413
#define CHAN_OP_FAILED                   414
#define CHAN_DEOP_SUCCEEDED              415
#define CHAN_DEOP_FAILED                 416
#define CHAN_VOICE_SUCCEEDED             417
#define CHAN_VOICE_FAILED                418
#define CHAN_DEVOICE_SUCCEEDED           419
#define CHAN_DEVOICE_FAILED              420
#define CHAN_HALFOP_SUCCEEDED            421
#define CHAN_HALFOP_FAILED               422
#define CHAN_DEHALFOP_SUCCEEDED          423
#define CHAN_DEHALFOP_FAILED             424
#define CHAN_PROTECT_SUCCEEDED           425
#define CHAN_PROTECT_FAILED              426
#define CHAN_DEPROTECT_SUCCEEDED         427
#define CHAN_DEPROTECT_FAILED            428
#define CHAN_UNBAN_SYNTAX                429
#define CHAN_UNBANNED                    430
#define CHAN_CLEAR_SYNTAX                431
#define CHAN_CLEARED_BANS                432
#define CHAN_CLEARED_EXCEPTIONS          433
#define CHAN_CLEARED_MODES               434
#define CHAN_CLEARED_OPS                 435
#define CHAN_CLEARED_HALFOPS             436
#define CHAN_CLEARED_VOICES              437
#define CHAN_CLEARED_USERS               438
#define CHAN_GETPASS_SYNTAX              439
#define CHAN_GETPASS_UNAVAILABLE         440
#define CHAN_GETPASS_PASSWORD_IS         441
#define CHAN_FORBID_SYNTAX               442
#define CHAN_FORBID_SUCCEEDED            443
#define CHAN_FORBID_FAILED               444
#define CHAN_SUSPEND_SYNTAX              445
#define CHAN_SUSPEND_SUCCEEDED           446
#define CHAN_SUSPEND_ALREADY_SUSPENDED   447
#define CHAN_UNSUSPEND_SYNTAX            448
#define CHAN_UNSUSPEND_SUCCEEDED         449
#define CHAN_SUSPEND_NOT_SUSPENDED       450
#define MEMO_HAVE_NEW_MEMO               451
#define MEMO_HAVE_NEW_MEMOS              452
#define MEMO_TYPE_READ_LAST              453
#define MEMO_TYPE_READ_NUM               454
#define MEMO_TYPE_LIST_NEW               455
#define MEMO_AT_LIMIT                    456
#define MEMO_OVER_LIMIT                  457
#define MEMO_NEW_MEMO_ARRIVED            458
#define MEMO_HAVE_NO_MEMOS               459
#define MEMO_X_HAS_NO_MEMOS              460
#define MEMO_DOES_NOT_EXIST              461
#define MEMO_LIST_NOT_FOUND              462
#define MEMO_SEND_SYNTAX                 463
#define MEMO_SEND_DISABLED               464
#define MEMO_SEND_PLEASE_WAIT            465
#define MEMO_X_GETS_NO_MEMOS             466
#define MEMO_X_HAS_TOO_MANY_MEMOS        467
#define MEMO_SENT                        468
#define MEMO_LIST_SYNTAX                 469
#define MEMO_HAVE_NO_NEW_MEMOS           470
#define MEMO_X_HAS_NO_NEW_MEMOS          471
#define MEMO_LIST_MEMOS                  472
#define MEMO_LIST_NEW_MEMOS              473
#define MEMO_LIST_CHAN_MEMOS             474
#define MEMO_LIST_CHAN_NEW_MEMOS         475
#define MEMO_LIST_HEADER                 476
#define MEMO_LIST_FORMAT                 477
#define MEMO_READ_SYNTAX                 478
#define MEMO_HEADER                      479
#define MEMO_CHAN_HEADER                 480
#define MEMO_TEXT                        481
#define MEMO_DEL_SYNTAX                  482
#define MEMO_DELETED_NONE                483
#define MEMO_DELETED_ONE                 484
#define MEMO_DELETED_SEVERAL             485
#define MEMO_DELETED_ALL                 486
#define MEMO_SET_SYNTAX                  487
#define MEMO_SET_DISABLED                488
#define MEMO_SET_UNKNOWN_OPTION          489
#define MEMO_SET_NOTIFY_SYNTAX           490
#define MEMO_SET_NOTIFY_ON               491
#define MEMO_SET_NOTIFY_LOGON            492
#define MEMO_SET_NOTIFY_NEW              493
#define MEMO_SET_NOTIFY_OFF              494
#define MEMO_SET_LIMIT_SYNTAX            495
#define MEMO_SET_LIMIT_SERVADMIN_SYNTAX  496
#define MEMO_SET_YOUR_LIMIT_FORBIDDEN    497
#define MEMO_SET_LIMIT_FORBIDDEN         498
#define MEMO_SET_YOUR_LIMIT_TOO_HIGH     499
#define MEMO_SET_LIMIT_TOO_HIGH          500
#define MEMO_SET_LIMIT_OVERFLOW          501
#define MEMO_SET_YOUR_LIMIT              502
#define MEMO_SET_YOUR_LIMIT_ZERO         503
#define MEMO_UNSET_YOUR_LIMIT            504
#define MEMO_SET_LIMIT                   505
#define MEMO_SET_LIMIT_ZERO              506
#define MEMO_UNSET_LIMIT                 507
#define MEMO_INFO_SYNTAX                 508
#define MEMO_INFO_SERVADMIN_SYNTAX       509
#define MEMO_INFO_NO_MEMOS               510
#define MEMO_INFO_MEMO                   511
#define MEMO_INFO_MEMO_UNREAD            512
#define MEMO_INFO_MEMOS                  513
#define MEMO_INFO_MEMOS_ONE_UNREAD       514
#define MEMO_INFO_MEMOS_SOME_UNREAD      515
#define MEMO_INFO_MEMOS_ALL_UNREAD       516
#define MEMO_INFO_LIMIT                  517
#define MEMO_INFO_HARD_LIMIT             518
#define MEMO_INFO_LIMIT_ZERO             519
#define MEMO_INFO_HARD_LIMIT_ZERO        520
#define MEMO_INFO_NO_LIMIT               521
#define MEMO_INFO_NOTIFY_OFF             522
#define MEMO_INFO_NOTIFY_ON              523
#define MEMO_INFO_NOTIFY_RECEIVE         524
#define MEMO_INFO_NOTIFY_SIGNON          525
#define MEMO_INFO_X_NO_MEMOS             526
#define MEMO_INFO_X_MEMO                 527
#define MEMO_INFO_X_MEMO_UNREAD          528
#define MEMO_INFO_X_MEMOS                529
#define MEMO_INFO_X_MEMOS_ONE_UNREAD     530
#define MEMO_INFO_X_MEMOS_SOME_UNREAD    531
#define MEMO_INFO_X_MEMOS_ALL_UNREAD     532
#define MEMO_INFO_X_LIMIT                533
#define MEMO_INFO_X_HARD_LIMIT           534
#define MEMO_INFO_X_NO_LIMIT             535
#define MEMO_INFO_X_NOTIFY_OFF           536
#define MEMO_INFO_X_NOTIFY_ON            537
#define MEMO_INFO_X_NOTIFY_RECEIVE       538
#define MEMO_INFO_X_NOTIFY_SIGNON        539
#define OPER_BOUNCY_MODES                540
#define OPER_BOUNCY_MODES_U_LINE         541
#define OPER_SKELETON_MODE               542
#define OPER_GLOBAL_SYNTAX               543
#define OPER_STATS_UNKNOWN_OPTION        544
#define OPER_STATS_RESET_USER_COUNT      545
#define OPER_STATS_CURRENT_USERS         546
#define OPER_STATS_MAX_USERS             547
#define OPER_STATS_UPTIME_DHMS           548
#define OPER_STATS_UPTIME_HM_MS          549
#define OPER_STATS_BYTES_READ            550
#define OPER_STATS_BYTES_WRITTEN         551
#define OPER_STATS_USER_MEM              552
#define OPER_STATS_SERVER_MEM            553
#define OPER_STATS_CHANNEL_MEM           554
#define OPER_STATS_NICKSERV_MEM          555
#define OPER_STATS_CHANSERV_MEM          556
#define OPER_STATS_MEMOSERV_MEM          557
#define OPER_STATS_STATSERV_MEM          558
#define OPER_STATS_OPERSERV_MEM          559
#define OPER_STATS_AKILL_COUNT           560
#define OPER_STATS_AKILL_EXPIRE_DAYS     561
#define OPER_STATS_AKILL_EXPIRE_DAY      562
#define OPER_STATS_AKILL_EXPIRE_HOURS    563
#define OPER_STATS_AKILL_EXPIRE_HOUR     564
#define OPER_STATS_AKILL_EXPIRE_MINS     565
#define OPER_STATS_AKILL_EXPIRE_MIN      566
#define OPER_STATS_AKILL_EXPIRE_NONE     567
#define OPER_STATS_SESSIONS_MEM          568
#define OPER_MODE_SYNTAX                 569
#define OPER_CLEARMODES_SYNTAX           570
#define OPER_CLEARMODES_DONE             571
#define OPER_CLEARMODES_ALL_DONE         572
#define OPER_CLEARCHAN_SYNTAX            573
#define OPER_CLEARCHAN_DONE              574
#define OPER_KICK_SYNTAX                 575
#define OPER_ADMIN_SYNTAX                576
#define OPER_ADMIN_ADD_SYNTAX            577
#define OPER_ADMIN_DEL_SYNTAX            578
#define OPER_ADMIN_SKELETON              579
#define OPER_ADMIN_EXISTS                580
#define OPER_ADMIN_ADDED                 581
#define OPER_ADMIN_TOO_MANY              582
#define OPER_ADMIN_REMOVED               583
#define OPER_ADMIN_NOT_FOUND             584
#define OPER_ADMIN_LIST_HEADER           585
#define OPER_OPER_SYNTAX                 586
#define OPER_OPER_ADD_SYNTAX             587
#define OPER_OPER_DEL_SYNTAX             588
#define OPER_OPER_SKELETON               589
#define OPER_OPER_EXISTS                 590
#define OPER_OPER_ADDED                  591
#define OPER_OPER_TOO_MANY               592
#define OPER_OPER_REMOVED                593
#define OPER_OPER_NOT_FOUND              594
#define OPER_OPER_LIST_HEADER            595
#define OPER_AKILL_SYNTAX                596
#define OPER_AKILL_ADD_SYNTAX            597
#define OPER_AKILL_DEL_SYNTAX            598
#define OPER_TOO_MANY_AKILLS             599
#define OPER_AKILL_EXISTS                600
#define OPER_AKILL_NO_NICK               601
#define OPER_AKILL_MASK_TOO_GENERAL      602
#define OPER_AKILL_ADDED                 603
#define OPER_AKILL_REMOVED               604
#define OPER_AKILL_NOT_FOUND             605
#define OPER_AKILL_LIST_HEADER           606
#define OPER_AKILL_LIST_FORMAT           607
#define OPER_AKILL_VIEW_FORMAT           608
#define OPER_AKILL_COUNT                 609
#define OPER_SU_SYNTAX                   610
#define OPER_SU_NO_PASSWORD              611
#define OPER_SU_SUCCEEDED                612
#define OPER_SU_FAILED                   613
#define OPER_SET_SYNTAX                  614
#define OPER_SET_IGNORE_ON               615
#define OPER_SET_IGNORE_OFF              616
#define OPER_SET_IGNORE_ERROR            617
#define OPER_SET_READONLY_ON             618
#define OPER_SET_READONLY_OFF            619
#define OPER_SET_READONLY_ERROR          620
#define OPER_SET_DEBUG_ON                621
#define OPER_SET_DEBUG_OFF               622
#define OPER_SET_DEBUG_LEVEL             623
#define OPER_SET_DEBUG_ERROR             624
#define OPER_SET_SUPASS_FAILED           625
#define OPER_SET_SUPASS_OK               626
#define OPER_SET_SUPASS_NONE             627
#define OPER_SET_UNKNOWN_OPTION          628
#define OPER_JUPE_SYNTAX                 629
#define OPER_RAW_SYNTAX                  630
#define OPER_UPDATING                    631
#define OPER_IGNORE_LIST                 632
#define OPER_IGNORE_LIST_EMPTY           633
#define OPER_KILLCLONES_SYNTAX           634
#define OPER_KILLCLONES_UNKNOWN_NICK     635
#define OPER_EXCEPTION_SYNTAX            636
#define OPER_EXCEPTION_ADD_SYNTAX        637
#define OPER_EXCEPTION_DEL_SYNTAX        638
#define OPER_EXCEPTION_MOVE_SYNTAX       639
#define OPER_EXCEPTION_DISABLED          640
#define OPER_EXCEPTION_ALREADY_PRESENT   641
#define OPER_EXCEPTION_TOO_MANY          642
#define OPER_EXCEPTION_ADDED             643
#define OPER_EXCEPTION_MOVED             644
#define OPER_EXCEPTION_NO_SUCH_ENTRY     645
#define OPER_EXCEPTION_NOT_FOUND         646
#define OPER_EXCEPTION_NO_MATCH          647
#define OPER_EXCEPTION_DELETED           648
#define OPER_EXCEPTION_DELETED_ONE       649
#define OPER_EXCEPTION_DELETED_SEVERAL   650
#define OPER_EXCEPTION_LIST_HEADER       651
#define OPER_EXCEPTION_LIST_FORMAT       652
#define OPER_EXCEPTION_LIST_COLHEAD      653
#define OPER_EXCEPTION_VIEW_FORMAT       654
#define OPER_EXCEPTION_INVALID_LIMIT     655
#define OPER_EXCEPTION_INVALID_HOSTMASK  656
#define OPER_SESSION_SYNTAX              657
#define OPER_SESSION_LIST_SYNTAX         658
#define OPER_SESSION_VIEW_SYNTAX         659
#define OPER_SESSION_DISABLED            660
#define OPER_SESSION_INVALID_THRESHOLD   661
#define OPER_SESSION_NOT_FOUND           662
#define OPER_SESSION_LIST_HEADER         663
#define OPER_SESSION_LIST_COLHEAD        664
#define OPER_SESSION_LIST_FORMAT         665
#define OPER_SESSION_VIEW_FORMAT         666
#define STAT_SERVERS_REMOVE_SERV_FIRST   667
#define STAT_SERVERS_SERVER_EXISTS       668
#define STAT_SERVERS_SYNTAX              669
#define STAT_SERVERS_STATS_TOTAL         670
#define STAT_SERVERS_STATS_ON_OFFLINE    671
#define STAT_SERVERS_LASTQUIT_WAS        672
#define STAT_SERVERS_LIST_HEADER         673
#define STAT_SERVERS_LIST_RESULTS        674
#define STAT_SERVERS_VIEW_HEADER_ONLINE  675
#define STAT_SERVERS_VIEW_HEADER_OFFLINE 676
#define STAT_SERVERS_VIEW_LASTJOIN       677
#define STAT_SERVERS_VIEW_LASTQUIT       678
#define STAT_SERVERS_VIEW_QUITMSG        679
#define STAT_SERVERS_VIEW_USERS_OPERS    680
#define STAT_SERVERS_VIEW_RESULTS        681
#define STAT_SERVERS_DELETE_SYNTAX       682
#define STAT_SERVERS_DELETE_DONE         683
#define STAT_SERVERS_COPY_SYNTAX         684
#define STAT_SERVERS_COPY_DONE           685
#define STAT_SERVERS_RENAME_SYNTAX       686
#define STAT_SERVERS_RENAME_DONE         687
#define STAT_USERS_SYNTAX                688
#define NEWS_LOGON_TEXT                  689
#define NEWS_OPER_TEXT                   690
#define NEWS_LOGON_SYNTAX                691
#define NEWS_LOGON_LIST_HEADER           692
#define NEWS_LOGON_LIST_ENTRY            693
#define NEWS_LOGON_LIST_NONE             694
#define NEWS_LOGON_ADD_SYNTAX            695
#define NEWS_LOGON_ADD_FULL              696
#define NEWS_LOGON_ADDED                 697
#define NEWS_LOGON_DEL_SYNTAX            698
#define NEWS_LOGON_DEL_NOT_FOUND         699
#define NEWS_LOGON_DELETED               700
#define NEWS_LOGON_DEL_NONE              701
#define NEWS_LOGON_DELETED_ALL           702
#define NEWS_OPER_SYNTAX                 703
#define NEWS_OPER_LIST_HEADER            704
#define NEWS_OPER_LIST_ENTRY             705
#define NEWS_OPER_LIST_NONE              706
#define NEWS_OPER_ADD_SYNTAX             707
#define NEWS_OPER_ADD_FULL               708
#define NEWS_OPER_ADDED                  709
#define NEWS_OPER_DEL_SYNTAX             710
#define NEWS_OPER_DEL_NOT_FOUND          711
#define NEWS_OPER_DELETED                712
#define NEWS_OPER_DEL_NONE               713
#define NEWS_OPER_DELETED_ALL            714
#define NEWS_HELP_LOGON                  715
#define NEWS_HELP_OPER                   716
#define NICK_HELP                        717
#define NICK_HELP_EXPIRE_ZERO            718
#define NICK_HELP_REGISTER               719
#define NICK_HELP_REGISTER_REQ_EMAIL     720
#define NICK_HELP_IDENTIFY               721
#define NICK_HELP_DROP                   722
#define NICK_HELP_ACCESS                 723
#define NICK_HELP_LINK                   724
#define NICK_HELP_UNLINK                 725
#define NICK_HELP_SET                    726
#define NICK_HELP_SET_PASSWORD           727
#define NICK_HELP_SET_LANGUAGE           728
#define NICK_HELP_SET_URL                729
#define NICK_HELP_SET_EMAIL              730
#define NICK_HELP_SET_KILL               731
#define NICK_HELP_SET_SECURE             732
#define NICK_HELP_SET_PRIVATE            733
#define NICK_HELP_SET_HIDE               734
#define NICK_HELP_UNSET                  735
#define NICK_HELP_UNSET_REQ_EMAIL        736
#define NICK_HELP_RECOVER                737
#define NICK_HELP_RELEASE                738
#define NICK_HELP_GHOST                  739
#define NICK_HELP_INFO                   740
#define NICK_HELP_LISTCHANS              741
#define NICK_HELP_LIST                   742
#define NICK_HELP_STATUS                 743
#define NICK_SERVADMIN_HELP              744
#define NICK_SERVADMIN_HELP_DROP         745
#define NICK_SERVADMIN_HELP_SET          746
#define NICK_SERVADMIN_HELP_SET_NOEXPIRE 747
#define NICK_SERVADMIN_HELP_UNSET        748
#define NICK_SERVADMIN_HELP_UNLINK       749
#define NICK_SERVADMIN_HELP_LISTLINKS    750
#define NICK_SERVADMIN_HELP_ACCESS       751
#define NICK_SERVADMIN_HELP_INFO         752
#define NICK_SERVADMIN_HELP_LISTCHANS    753
#define NICK_SERVADMIN_HELP_LIST         754
#define NICK_SERVADMIN_HELP_GETPASS      755
#define NICK_SERVADMIN_HELP_FORBID       756
#define NICK_SERVADMIN_HELP_SUSPEND      757
#define NICK_SERVADMIN_HELP_UNSUSPEND    758
#define CHAN_HELP                        759
#define CHAN_HELP_OTHERS                 760
#define CHAN_HELP_OTHERS_HALFOP_CHANPROT 761
#define CHAN_HELP_EXPIRES                762
#define CHAN_HELP_REGISTER               763
#define CHAN_HELP_IDENTIFY               764
#define CHAN_HELP_DROP                   765
#define CHAN_HELP_SET                    766
#define CHAN_HELP_SET_FOUNDER            767
#define CHAN_HELP_SET_SUCCESSOR          768
#define CHAN_HELP_SET_PASSWORD           769
#define CHAN_HELP_SET_DESC               770
#define CHAN_HELP_SET_URL                771
#define CHAN_HELP_SET_EMAIL              772
#define CHAN_HELP_SET_ENTRYMSG           773
#define CHAN_HELP_SET_TOPIC              774
#define CHAN_HELP_SET_KEEPTOPIC          775
#define CHAN_HELP_SET_TOPICLOCK          776
#define CHAN_HELP_SET_MLOCK              777
#define CHAN_HELP_SET_PRIVATE            778
#define CHAN_HELP_SET_RESTRICTED         779
#define CHAN_HELP_SET_SECURE             780
#define CHAN_HELP_SET_SECUREOPS          781
#define CHAN_HELP_SET_LEAVEOPS           782
#define CHAN_HELP_SET_OPNOTICE           783
#define CHAN_HELP_SET_ENFORCE            784
#define CHAN_HELP_UNSET                  785
#define CHAN_HELP_SOP                    786
#define CHAN_HELP_SOP_NOPROT             787
#define CHAN_HELP_SOP_PROT               788
#define CHAN_HELP_SOP_END                789
#define CHAN_HELP_AOP                    790
#define CHAN_HELP_HOP                    791
#define CHAN_HELP_VOP                    792
#define CHAN_HELP_ACCESS                 793
#define CHAN_HELP_ACCESS_LEVELS          794
#define CHAN_HELP_AKICK                  795
#define CHAN_HELP_LEVELS                 796
#define CHAN_HELP_LEVELS_DESC            797
#define CHAN_HELP_LEVELS_DESC_FORMAT     798
#define CHAN_HELP_INFO                   799
#define CHAN_HELP_LIST                   800
#define CHAN_HELP_OP                     801
#define CHAN_HELP_DEOP                   802
#define CHAN_HELP_VOICE                  803
#define CHAN_HELP_DEVOICE                804
#define CHAN_HELP_HALFOP                 805
#define CHAN_HELP_DEHALFOP               806
#define CHAN_HELP_PROTECT                807
#define CHAN_HELP_DEPROTECT              808
#define CHAN_HELP_INVITE                 809
#define CHAN_HELP_UNBAN                  810
#define CHAN_HELP_CLEAR                  811
#define CHAN_HELP_CLEAR_EXCEPTIONS       812
#define CHAN_HELP_CLEAR_MID              813
#define CHAN_HELP_CLEAR_HALFOPS          814
#define CHAN_HELP_CLEAR_END              815
#define CHAN_SERVADMIN_HELP              816
#define CHAN_SERVADMIN_HELP_DROP         817
#define CHAN_SERVADMIN_HELP_SET          818
#define CHAN_SERVADMIN_HELP_UNSET        819
#define CHAN_SERVADMIN_HELP_SET_NOEXPIRE 820
#define CHAN_SERVADMIN_HELP_INFO         821
#define CHAN_SERVADMIN_HELP_LIST         822
#define CHAN_SERVADMIN_HELP_GETPASS      823
#define CHAN_SERVADMIN_HELP_FORBID       824
#define CHAN_SERVADMIN_HELP_SUSPEND      825
#define CHAN_SERVADMIN_HELP_UNSUSPEND    826
#define CHAN_SERVADMIN_HELP_STATUS       827
#define MEMO_HELP                        828
#define MEMO_HELP_SEND                   829
#define MEMO_HELP_LIST                   830
#define MEMO_HELP_READ                   831
#define MEMO_HELP_DEL                    832
#define MEMO_HELP_SET                    833
#define MEMO_HELP_SET_NOTIFY             834
#define MEMO_HELP_SET_LIMIT              835
#define MEMO_HELP_INFO                   836
#define MEMO_SERVADMIN_HELP_SET_LIMIT    837
#define MEMO_SERVADMIN_HELP_INFO         838
#define OPER_HELP                        839
#define OPER_HELP_GLOBAL                 840
#define OPER_HELP_STATS                  841
#define OPER_HELP_OPER                   842
#define OPER_HELP_ADMIN                  843
#define OPER_HELP_MODE                   844
#define OPER_HELP_CLEARMODES             845
#define OPER_HELP_CLEARCHAN              846
#define OPER_HELP_KICK                   847
#define OPER_HELP_AKILL                  848
#define OPER_HELP_EXCEPTION              849
#define OPER_HELP_SESSION                850
#define OPER_HELP_SU                     851
#define OPER_HELP_SET                    852
#define OPER_HELP_SET_READONLY           853
#define OPER_HELP_SET_DEBUG              854
#define OPER_HELP_SET_SUPASS             855
#define OPER_HELP_JUPE                   856
#define OPER_HELP_RAW                    857
#define OPER_HELP_UPDATE                 858
#define OPER_HELP_QUIT                   859
#define OPER_HELP_SHUTDOWN               860
#define OPER_HELP_RESTART                861
#define OPER_HELP_KILLCLONES             862
#define STAT_HELP                        863
#define STAT_HELP_SERVERS                864
#define STAT_HELP_USERS                  865
#define STAT_SERVROOT_HELP_SERVERS       866
#define FLOOD_HELP	                 867
#define FLOOD_HELP_CHAN                  868
#define FLOOD_HELP_SET				869
#define FLOOD_HELP_GRNAME			870
#define OPER_HELP_NOOPER		     871
#define OPER_HELP_SNOOPER		     872
#define OPER_HELP_ACONNECT		     873
#define OPER_HELP_CLOSENET		     874
#define CHAN_HELP_SET_FLOODSERV		875

#define NUM_STRINGS 876
