code

equ	trap_cgame_Print							-1
equ	trap_cgame_Error							-2
equ	trap_cgame_Milliseconds					-3
equ	trap_cgame_Cvar_Register					-4
equ	trap_cgame_Cvar_Update					-5
equ	trap_cgame_Cvar_Set						-6
equ trap_cgame_Cvar_VariableStringBuffer		-7
equ	trap_cgame_Argc							-8
equ	trap_cgame_Argv							-9
equ	trap_cgame_Args							-10
equ	trap_cgame_FS_FOpenFile					-11
equ	trap_cgame_FS_Read						-12
equ	trap_cgame_FS_Write						-13 
equ	trap_cgame_FS_FCloseFile					-14
equ	trap_cgame_SendConsoleCommand				-15
equ	trap_cgame_AddCommand						-16
equ	trap_cgame_SendClientCommand				-17
equ	trap_cgame_UpdateScreen					-18
equ	trap_cgame_CM_LoadMap						-19
equ	trap_cgame_CM_NumInlineModels				-20
equ	trap_cgame_CM_InlineModel					-21
equ	trap_cgame_CM_LoadModel					-22
equ	trap_cgame_CM_TempBoxModel				-23
equ	trap_cgame_CM_PointContents				-24
equ	trap_cgame_CM_TransformedPointContents	-25
equ	trap_cgame_CM_BoxTrace					-26
equ	trap_cgame_CM_TransformedBoxTrace			-27
equ	trap_cgame_CM_MarkFragments				-28
equ	trap_cgame_S_StartSound					-29
equ	trap_cgame_S_StartLocalSound				-30
equ	trap_cgame_S_ClearLoopingSounds			-31
equ	trap_cgame_S_AddLoopingSound				-32
equ	trap_cgame_S_UpdateEntityPosition			-33
equ	trap_cgame_S_Respatialize					-34
equ	trap_cgame_S_RegisterSound				-35
equ	trap_cgame_S_StartBackgroundTrack			-36
equ	trap_cgame_R_LoadWorldMap					-37
equ	trap_cgame_R_RegisterModel				-38
equ	trap_cgame_R_RegisterSkin					-39
equ	trap_cgame_R_RegisterShader				-40
equ	trap_cgame_R_ClearScene					-41
equ	trap_cgame_R_AddRefEntityToScene			-42
equ	trap_cgame_R_AddPolyToScene				-43
equ	trap_cgame_R_AddLightToScene				-44
equ	trap_cgame_R_RenderScene					-45
equ	trap_cgame_R_SetColor						-46
equ	trap_cgame_R_DrawStretchPic				-47
equ	trap_cgame_R_ModelBounds					-48
equ	trap_cgame_R_LerpTag						-49
equ	trap_cgame_GetGlconfig					-50
equ	trap_cgame_GetGameState					-51
equ	trap_cgame_GetCurrentSnapshotNumber		-52
equ	trap_cgame_GetSnapshot					-53
equ	trap_cgame_GetServerCommand				-54
equ	trap_cgame_GetCurrentCmdNumber			-55
equ	trap_cgame_GetUserCmd						-56
equ	trap_cgame_SetUserCmdValue				-57
equ	trap_cgame_R_RegisterShaderNoMip			-58
equ	trap_cgame_MemoryRemaining				-59
equ trap_cgame_R_RegisterFont					-60
equ trap_cgame_Key_IsDown						-61
equ trap_cgame_Key_GetCatcher					-62
equ trap_cgame_Key_SetCatcher					-63
equ trap_cgame_Key_GetKey						-64
equ trap_cgame_PC_AddGlobalDefine				-65
equ	trap_cgame_PC_LoadSource					-66
equ trap_cgame_PC_FreeSource					-67
equ trap_cgame_PC_ReadToken					-68
equ trap_cgame_PC_SourceFileAndLine			-69
equ trap_cgame_S_StopBackgroundTrack			-70
equ trap_cgame_RealTime						-71
equ trap_cgame_SnapVector						-72
equ trap_cgame_RemoveCommand					-73
equ trap_cgame_R_LightForPoint				-74
equ trap_cgame_CIN_PlayCinematic				-75
equ trap_cgame_CIN_StopCinematic				-76
equ trap_cgame_CIN_RunCinematic 				-77
equ trap_cgame_CIN_DrawCinematic				-78
equ trap_cgame_CIN_SetExtents					-79
equ trap_cgame_R_RemapShader					-80
equ	trap_cgame_S_AddRealLoopingSound			-81
equ trap_cgame_S_StopLoopingSound				-82
equ trap_cgame_CM_TempCapsuleModel			-83
equ trap_cgame_CM_CapsuleTrace				-84
equ trap_cgame_CM_TransformedCapsuleTrace		-85
equ trap_cgame_R_AddAdditiveLightToScene		-86
equ trap_cgame_GetEntityToken					-87
equ	trap_cgame_R_AddPolysToScene				-88
equ trap_cgame_R_inPVS						-89
equ trap_cgame_FS_Seek			-90

equ	memset						-101
equ	memcpy						-102
equ	strncpy						-103
equ	sin							-104
equ	cos							-105
equ	atan2						-106
equ	sqrt						-107
equ floor						-108
equ	ceil						-109
equ	testPrintInt				-110
equ	testPrintFloat				-111
equ acos						-112

