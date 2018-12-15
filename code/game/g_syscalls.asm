code

equ	trap_game_Print				-1
equ	trap_game_Error				-2
equ	trap_game_Milliseconds		-3
equ	trap_game_Cvar_Register		-4
equ	trap_game_Cvar_Update		-5
equ	trap_game_Cvar_Set			-6
equ	trap_game_Cvar_VariableIntegerValue	-7
equ	trap_game_Cvar_VariableStringBuffer	-8
equ	trap_game_Argc				-9
equ	trap_game_Argv				-10
equ	trap_game_FS_FOpenFile		-11
equ	trap_game_FS_Read			-12
equ	trap_game_FS_Write			-13
equ	trap_game_FS_FCloseFile		-14
equ	trap_game_SendConsoleCommand	-15
equ	trap_game_LocateGameData		-16
equ	trap_game_DropClient			-17
equ	trap_game_SendServerCommand	-18
equ	trap_game_SetConfigstring	-19
equ	trap_game_GetConfigstring	-20
equ	trap_game_GetUserinfo		-21
equ	trap_game_SetUserinfo		-22
equ	trap_game_GetServerinfo		-23
equ	trap_game_SetBrushModel		-24
equ	trap_game_Trace				-25
equ	trap_game_PointContents		-26
equ trap_game_InPVS				-27
equ	trap_game_InPVSIgnorePortals	-28
equ	trap_game_AdjustAreaPortalState	-29
equ	trap_game_AreasConnected		-30
equ	trap_game_LinkEntity			-31
equ	trap_game_UnlinkEntity		-32
equ	trap_game_EntitiesInBox		-33
equ	trap_game_EntityContact		-34
equ	trap_game_BotAllocateClient	-35
equ	trap_game_BotFreeClient		-36
equ	trap_game_GetUsercmd			-37
equ	trap_game_GetEntityToken		-38
equ	trap_game_FS_GetFileList		-39
equ trap_game_DebugPolygonCreate	-40
equ trap_game_DebugPolygonDelete	-41
equ trap_game_RealTime			-42
equ trap_game_SnapVector			-43
equ trap_game_TraceCapsule		-44
equ trap_game_EntityContactCapsule	-45
equ trap_game_FS_Seek -46

equ	memset					-101
equ	memcpy					-102
equ	strncpy					-103
equ	sin						-104
equ	cos						-105
equ	atan2					-106
equ	sqrt					-107
equ floor					-111
equ	ceil					-112
equ	testPrintInt			-113
equ	testPrintFloat			-114



equ trap_game_BotLibSetup					-201
equ trap_game_BotLibShutdown					-202
equ trap_game_BotLibVarSet					-203
equ trap_game_BotLibVarGet					-204
equ trap_game_BotLibDefine					-205
equ trap_game_BotLibStartFrame				-206
equ trap_game_BotLibLoadMap					-207
equ trap_game_BotLibUpdateEntity				-208
equ trap_game_BotLibTest						-209

equ trap_game_BotGetSnapshotEntity			-210
equ trap_game_BotGetServerCommand		-211
equ trap_game_BotUserCommand					-212



equ trap_game_AAS_EnableRoutingArea		-301
equ trap_game_AAS_BBoxAreas				-302
equ trap_game_AAS_AreaInfo				-303
equ trap_game_AAS_EntityInfo					-304

equ trap_game_AAS_Initialized				-305
equ trap_game_AAS_PresenceTypeBoundingBox	-306
equ trap_game_AAS_Time						-307

equ trap_game_AAS_PointAreaNum				-308
equ trap_game_AAS_TraceAreas					-309

equ trap_game_AAS_PointContents				-310
equ trap_game_AAS_NextBSPEntity				-311
equ trap_game_AAS_ValueForBSPEpairKey		-312
equ trap_game_AAS_VectorForBSPEpairKey		-313
equ trap_game_AAS_FloatForBSPEpairKey		-314
equ trap_game_AAS_IntForBSPEpairKey			-315

equ trap_game_AAS_AreaReachability			-316

equ trap_game_AAS_AreaTravelTimeToGoalArea	-317

equ trap_game_AAS_Swimming					-318
equ trap_game_AAS_PredictClientMovement		-319



equ trap_game_EA_Say							-401
equ trap_game_EA_SayTeam						-402
equ trap_game_EA_Command						-403

equ trap_game_EA_Action						-404
equ trap_game_EA_Gesture						-405
equ trap_game_EA_Talk						-406
equ trap_game_EA_Attack						-407
equ trap_game_EA_Use							-408
equ trap_game_EA_Respawn						-409
equ trap_game_EA_Crouch						-410
equ trap_game_EA_MoveUp						-411
equ trap_game_EA_MoveDown					-412
equ trap_game_EA_MoveForward					-413
equ trap_game_EA_MoveBack					-414
equ trap_game_EA_MoveLeft					-415
equ trap_game_EA_MoveRight					-416

equ trap_game_EA_SelectWeapon				-417
equ trap_game_EA_Jump						-418
equ trap_game_EA_DelayedJump					-419
equ trap_game_EA_Move						-420
equ trap_game_EA_View						-421

equ trap_game_EA_EndRegular					-422
equ trap_game_EA_GetInput					-423
equ trap_game_EA_ResetInput					-424



equ trap_game_BotLoadCharacter				-501
equ trap_game_BotFreeCharacter				-502
equ trap_game_Characteristic_Float			-503
equ trap_game_Characteristic_BFloat			-504
equ trap_game_Characteristic_Integer			-505
equ trap_game_Characteristic_BInteger		-506
equ trap_game_Characteristic_String			-507

equ trap_game_BotAllocChatState				-508
equ trap_game_BotFreeChatState				-509
equ trap_game_BotQueueConsoleMessage			-510
equ trap_game_BotRemoveConsoleMessage		-511
equ trap_game_BotNextConsoleMessage			-512
equ trap_game_BotNumConsoleMessages			-513
equ trap_game_BotInitialChat					-514
equ trap_game_BotReplyChat					-515
equ trap_game_BotChatLength					-516
equ trap_game_BotEnterChat					-517
equ trap_game_StringContains					-518
equ trap_game_BotFindMatch					-519
equ trap_game_BotMatchVariable				-520
equ trap_game_UnifyWhiteSpaces				-521
equ trap_game_BotReplaceSynonyms				-522
equ trap_game_BotLoadChatFile				-523
equ trap_game_BotSetChatGender				-524
equ trap_game_BotSetChatName					-525

equ trap_game_BotResetGoalState				-526
equ trap_game_BotResetAvoidGoals				-527
equ trap_game_BotPushGoal					-528
equ trap_game_BotPopGoal						-529
equ trap_game_BotEmptyGoalStack				-530
equ trap_game_BotDumpAvoidGoals				-531
equ trap_game_BotDumpGoalStack				-532
equ trap_game_BotGoalName					-533
equ trap_game_BotGetTopGoal					-534
equ trap_game_BotGetSecondGoal				-535
equ trap_game_BotChooseLTGItem				-536
equ trap_game_BotChooseNBGItem				-537
equ trap_game_BotTouchingGoal				-538
equ trap_game_BotItemGoalInVisButNotVisible	-539
equ trap_game_BotGetLevelItemGoal			-540
equ trap_game_BotAvoidGoalTime				-541
equ trap_game_BotInitLevelItems				-542
equ trap_game_BotUpdateEntityItems			-543
equ trap_game_BotLoadItemWeights				-544
equ trap_game_BotFreeItemWeights				-546
equ trap_game_BotSaveGoalFuzzyLogic			-546
equ trap_game_BotAllocGoalState				-547
equ trap_game_BotFreeGoalState				-548

equ trap_game_BotResetMoveState				-549
equ trap_game_BotMoveToGoal					-550
equ trap_game_BotMoveInDirection				-551
equ trap_game_BotResetAvoidReach				-552
equ trap_game_BotResetLastAvoidReach			-553
equ trap_game_BotReachabilityArea			-554
equ trap_game_BotMovementViewTarget			-555
equ trap_game_BotAllocMoveState				-556
equ trap_game_BotFreeMoveState				-557
equ trap_game_BotInitMoveState				-558

equ trap_game_BotChooseBestFightWeapon		-559
equ trap_game_BotGetWeaponInfo				-560
equ trap_game_BotLoadWeaponWeights			-561
equ trap_game_BotAllocWeaponState			-562
equ trap_game_BotFreeWeaponState				-563
equ trap_game_BotResetWeaponState			-564
equ trap_game_GeneticParentsAndChildSelection -565
equ trap_game_BotInterbreedGoalFuzzyLogic	-566
equ trap_game_BotMutateGoalFuzzyLogic		-567
equ trap_game_BotGetNextCampSpotGoal			-568
equ trap_game_BotGetMapLocationGoal			-569
equ trap_game_BotNumInitialChats				-570
equ trap_game_BotGetChatMessage				-571
equ trap_game_BotRemoveFromAvoidGoals		-572
equ trap_game_BotPredictVisiblePosition		-573
equ trap_game_BotSetAvoidGoalTime			-574
equ trap_game_BotAddAvoidSpot				-575
equ trap_game_AAS_AlternativeRouteGoals		-576
equ trap_game_AAS_PredictRoute				-577
equ trap_game_AAS_PointReachabilityAreaIndex	-578

equ trap_game_BotLibLoadSource				-579
equ trap_game_BotLibFreeSource				-580
equ trap_game_BotLibReadToken				-581
equ trap_game_BotLibSourceFileAndLine		-582
 
