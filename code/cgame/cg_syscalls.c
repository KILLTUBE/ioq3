/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Quake III Arena source code; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
//
// cg_syscall_cgames.c -- this file is only included when building a dll
// cg_syscall_cgames.asm is included instead when building a qvm
#ifdef Q3_VM
#error "Do not use in VM build"
#endif

#include "cg_local.h"
#define NO_GL
#include "../renderergl2/tr_local.h"

extern refexport_t	re;

intptr_t (QDECL *syscall_cgame)( intptr_t arg, ... ) = (intptr_t (QDECL *)( intptr_t, ...))-1;


Q_EXPORT void dllEntry_cgame( intptr_t (QDECL  *syscall_cgameptr)( intptr_t arg,... ) ) {
	syscall_cgame = syscall_cgameptr;
}


int PASSFLOAT( float x ) {
	floatint_t fi;
	fi.f = x;
	return fi.i;
}

void	trap_cgame_Print( const char *fmt ) {
	syscall_cgame( CG_PRINT, fmt );
}

void trap_cgame_Error(const char *fmt)
{
	syscall_cgame(CG_ERROR, fmt);
	// shut up GCC warning about returning functions, because we know better
	exit(1);
}

int		trap_cgame_Milliseconds( void ) {
	return syscall_cgame( CG_MILLISECONDS ); 
}

void	trap_cgame_Cvar_Register( vmCvar_t *vmCvar, const char *varName, const char *defaultValue, int flags ) {
	syscall_cgame( CG_CVAR_REGISTER, vmCvar, varName, defaultValue, flags );
}

void	trap_cgame_Cvar_Update( vmCvar_t *vmCvar ) {
	syscall_cgame( CG_CVAR_UPDATE, vmCvar );
}

void	trap_cgame_Cvar_Set( const char *var_name, const char *value ) {
	syscall_cgame( CG_CVAR_SET, var_name, value );
}

void trap_cgame_Cvar_VariableStringBuffer(const char *var_name, char *buffer, int bufsize) {
	syscall_cgame(CG_CVAR_VARIABLESTRINGBUFFER, var_name, buffer, bufsize);
}

void trap_Cvar_VariableStringBuffer(const char *var_name, char *buffer, int bufsize) {
	syscall_cgame(CG_CVAR_VARIABLESTRINGBUFFER, var_name, buffer, bufsize);
}

int		trap_cgame_Argc( void ) {
	return syscall_cgame( CG_ARGC );
}

void	trap_cgame_Argv( int n, char *buffer, int bufferLength ) {
	syscall_cgame( CG_ARGV, n, buffer, bufferLength );
}

void	trap_cgame_Args( char *buffer, int bufferLength ) {
	syscall_cgame( CG_ARGS, buffer, bufferLength );
}

int		trap_cgame_FS_FOpenFile( const char *qpath, fileHandle_t *f, fsMode_t mode ) {
	return syscall_cgame( CG_FS_FOPENFILE, qpath, f, mode );
}

void	trap_cgame_FS_Read( void *buffer, int len, fileHandle_t f ) {
	syscall_cgame( CG_FS_READ, buffer, len, f );
}

void	trap_cgame_FS_Write( const void *buffer, int len, fileHandle_t f ) {
	syscall_cgame( CG_FS_WRITE, buffer, len, f );
}

void	trap_cgame_FS_FCloseFile( fileHandle_t f ) {
	syscall_cgame( CG_FS_FCLOSEFILE, f );
}

int trap_cgame_FS_Seek( fileHandle_t f, long offset, int origin ) {
	return syscall_cgame( CG_FS_SEEK, f, offset, origin );
}

void	trap_cgame_SendConsoleCommand( const char *text ) {
	syscall_cgame( CG_SENDCONSOLECOMMAND, text );
}

void	trap_cgame_AddCommand( const char *cmdName ) {
	syscall_cgame( CG_ADDCOMMAND, cmdName );
}

void	trap_cgame_RemoveCommand( const char *cmdName ) {
	syscall_cgame( CG_REMOVECOMMAND, cmdName );
}

void	trap_cgame_SendClientCommand( const char *s ) {
	syscall_cgame( CG_SENDCLIENTCOMMAND, s );
}

void	trap_cgame_UpdateScreen( void ) {
	syscall_cgame( CG_UPDATESCREEN );
}

void	trap_cgame_CM_LoadMap( const char *mapname ) {
	syscall_cgame( CG_CM_LOADMAP, mapname );
}

int		trap_cgame_CM_NumInlineModels( void ) {
	return syscall_cgame( CG_CM_NUMINLINEMODELS );
}

clipHandle_t trap_cgame_CM_InlineModel( int index ) {
	return syscall_cgame( CG_CM_INLINEMODEL, index );
}

clipHandle_t trap_cgame_CM_TempBoxModel( const vec3_t mins, const vec3_t maxs ) {
	return syscall_cgame( CG_CM_TEMPBOXMODEL, mins, maxs );
}

clipHandle_t trap_cgame_CM_TempCapsuleModel( const vec3_t mins, const vec3_t maxs ) {
	return syscall_cgame( CG_CM_TEMPCAPSULEMODEL, mins, maxs );
}

int		trap_cgame_CM_PointContents( const vec3_t p, clipHandle_t model ) {
	return syscall_cgame( CG_CM_POINTCONTENTS, p, model );
}

int		trap_cgame_CM_TransformedPointContents( const vec3_t p, clipHandle_t model, const vec3_t origin, const vec3_t angles ) {
	return syscall_cgame( CG_CM_TRANSFORMEDPOINTCONTENTS, p, model, origin, angles );
}

void	trap_cgame_CM_BoxTrace( trace_t *results, const vec3_t start, const vec3_t end,
						  const vec3_t mins, const vec3_t maxs,
						  clipHandle_t model, int brushmask ) {
	syscall_cgame( CG_CM_BOXTRACE, results, start, end, mins, maxs, model, brushmask );
}

void	trap_cgame_CM_CapsuleTrace( trace_t *results, const vec3_t start, const vec3_t end,
						  const vec3_t mins, const vec3_t maxs,
						  clipHandle_t model, int brushmask ) {
	syscall_cgame( CG_CM_CAPSULETRACE, results, start, end, mins, maxs, model, brushmask );
}

void	trap_cgame_CM_TransformedBoxTrace( trace_t *results, const vec3_t start, const vec3_t end,
						  const vec3_t mins, const vec3_t maxs,
						  clipHandle_t model, int brushmask,
						  const vec3_t origin, const vec3_t angles ) {
	syscall_cgame( CG_CM_TRANSFORMEDBOXTRACE, results, start, end, mins, maxs, model, brushmask, origin, angles );
}

void	trap_cgame_CM_TransformedCapsuleTrace( trace_t *results, const vec3_t start, const vec3_t end,
						  const vec3_t mins, const vec3_t maxs,
						  clipHandle_t model, int brushmask,
						  const vec3_t origin, const vec3_t angles ) {
	syscall_cgame( CG_CM_TRANSFORMEDCAPSULETRACE, results, start, end, mins, maxs, model, brushmask, origin, angles );
}

int		trap_cgame_CM_MarkFragments( int numPoints, const vec3_t *points, 
				const vec3_t projection,
				int maxPoints, vec3_t pointBuffer,
				int maxFragments, markFragment_t *fragmentBuffer ) {
	return syscall_cgame( CG_CM_MARKFRAGMENTS, numPoints, points, projection, maxPoints, pointBuffer, maxFragments, fragmentBuffer );
}

void	trap_cgame_S_StartSound( vec3_t origin, int entityNum, int entchannel, sfxHandle_t sfx ) {
	syscall_cgame( CG_S_STARTSOUND, origin, entityNum, entchannel, sfx );
}

void	trap_cgame_S_StartLocalSound( sfxHandle_t sfx, int channelNum ) {
	syscall_cgame( CG_S_STARTLOCALSOUND, sfx, channelNum );
}

void	trap_cgame_S_ClearLoopingSounds( qboolean killall ) {
	syscall_cgame( CG_S_CLEARLOOPINGSOUNDS, killall );
}

void	trap_cgame_S_AddLoopingSound( int entityNum, const vec3_t origin, const vec3_t velocity, sfxHandle_t sfx ) {
	syscall_cgame( CG_S_ADDLOOPINGSOUND, entityNum, origin, velocity, sfx );
}

void	trap_cgame_S_AddRealLoopingSound( int entityNum, const vec3_t origin, const vec3_t velocity, sfxHandle_t sfx ) {
	syscall_cgame( CG_S_ADDREALLOOPINGSOUND, entityNum, origin, velocity, sfx );
}

void	trap_cgame_S_StopLoopingSound( int entityNum ) {
	syscall_cgame( CG_S_STOPLOOPINGSOUND, entityNum );
}

void	trap_cgame_S_UpdateEntityPosition( int entityNum, const vec3_t origin ) {
	syscall_cgame( CG_S_UPDATEENTITYPOSITION, entityNum, origin );
}

void	trap_cgame_S_Respatialize( int entityNum, const vec3_t origin, vec3_t axis[3], int inwater ) {
	syscall_cgame( CG_S_RESPATIALIZE, entityNum, origin, axis, inwater );
}

sfxHandle_t	trap_cgame_S_RegisterSound( const char *sample, qboolean compressed ) {
	return syscall_cgame( CG_S_REGISTERSOUND, sample, compressed );
}

void	trap_cgame_S_StartBackgroundTrack( const char *intro, const char *loop ) {
	syscall_cgame( CG_S_STARTBACKGROUNDTRACK, intro, loop );
}

void	trap_cgame_R_LoadWorldMap( const char *mapname ) {
	syscall_cgame( CG_R_LOADWORLDMAP, mapname );
}

qhandle_t trap_cgame_R_RegisterModel( const char *name ) {
	return syscall_cgame( CG_R_REGISTERMODEL, name );
}

qhandle_t trap_cgame_R_RegisterSkin( const char *name ) {
	return syscall_cgame( CG_R_REGISTERSKIN, name );
}

qhandle_t trap_cgame_R_RegisterShader( const char *name ) {
	return syscall_cgame( CG_R_REGISTERSHADER, name );
}

qhandle_t trap_cgame_R_RegisterShaderNoMip( const char *name ) {
	return syscall_cgame( CG_R_REGISTERSHADERNOMIP, name );
}

void trap_cgame_R_RegisterFont(const char *fontName, int pointSize, fontInfo_t *font) {
	syscall_cgame(CG_R_REGISTERFONT, fontName, pointSize, font );
}

void	trap_cgame_R_ClearScene( void ) {
	syscall_cgame( CG_R_CLEARSCENE );
}

void	trap_cgame_R_AddRefEntityToScene( const refEntity_t *re ) {
	syscall_cgame( CG_R_ADDREFENTITYTOSCENE, re );
}

void	trap_cgame_R_AddPolyToScene( qhandle_t hShader , int numVerts, const polyVert_t *verts ) {
	syscall_cgame( CG_R_ADDPOLYTOSCENE, hShader, numVerts, verts );
}

void	trap_cgame_R_AddPolysToScene( qhandle_t hShader , int numVerts, const polyVert_t *verts, int num ) {
	syscall_cgame( CG_R_ADDPOLYSTOSCENE, hShader, numVerts, verts, num );
}

int		trap_cgame_R_LightForPoint( vec3_t point, vec3_t ambientLight, vec3_t directedLight, vec3_t lightDir ) {
	return syscall_cgame( CG_R_LIGHTFORPOINT, point, ambientLight, directedLight, lightDir );
}

void	trap_cgame_R_AddLightToScene( const vec3_t org, float intensity, float r, float g, float b ) {
	syscall_cgame( CG_R_ADDLIGHTTOSCENE, org, PASSFLOAT(intensity), PASSFLOAT(r), PASSFLOAT(g), PASSFLOAT(b) );
}

void	trap_cgame_R_AddAdditiveLightToScene( const vec3_t org, float intensity, float r, float g, float b ) {
	syscall_cgame( CG_R_ADDADDITIVELIGHTTOSCENE, org, PASSFLOAT(intensity), PASSFLOAT(r), PASSFLOAT(g), PASSFLOAT(b) );
}

void	trap_cgame_R_RenderScene( const refdef_t *fd ) {
	syscall_cgame( CG_R_RENDERSCENE, fd );
}

void	trap_cgame_R_SetColor( const float *rgba ) {
	//syscall_cgame( CG_R_SETCOLOR, rgba );
	RE_SetColor(rgba);
}

void	trap_cgame_R_DrawStretchPic( float x, float y, float w, float h, 
							   float s1, float t1, float s2, float t2, qhandle_t hShader ) {
	//syscall_cgame( CG_R_DRAWSTRETCHPIC, PASSFLOAT(x), PASSFLOAT(y), PASSFLOAT(w), PASSFLOAT(h), PASSFLOAT(s1), PASSFLOAT(t1), PASSFLOAT(s2), PASSFLOAT(t2), hShader );
	re.DrawStretchPic((x), (y), (w), (h), (s1), (t1), (s2), (t2), hShader);

}

void	trap_cgame_R_ModelBounds( clipHandle_t model, vec3_t mins, vec3_t maxs ) {
	syscall_cgame( CG_R_MODELBOUNDS, model, mins, maxs );
}

int		trap_cgame_R_LerpTag( orientation_t *tag, clipHandle_t mod, int startFrame, int endFrame, 
					   float frac, const char *tagName ) {
	return syscall_cgame( CG_R_LERPTAG, tag, mod, startFrame, endFrame, PASSFLOAT(frac), tagName );
}

void	trap_cgame_R_RemapShader( const char *oldShader, const char *newShader, const char *timeOffset ) {
	syscall_cgame( CG_R_REMAP_SHADER, oldShader, newShader, timeOffset );
}

void		trap_cgame_GetGlconfig( glconfig_t *glconfig ) {
	syscall_cgame( CG_GETGLCONFIG, glconfig );
}

void		trap_cgame_GetGameState( gameState_t *gamestate ) {
	syscall_cgame( CG_GETGAMESTATE, gamestate );
}

void		trap_cgame_GetCurrentSnapshotNumber( int *snapshotNumber, int *serverTime ) {
	syscall_cgame( CG_GETCURRENTSNAPSHOTNUMBER, snapshotNumber, serverTime );
}

qboolean	trap_cgame_GetSnapshot( int snapshotNumber, snapshot_t *snapshot ) {
	return syscall_cgame( CG_GETSNAPSHOT, snapshotNumber, snapshot );
}

qboolean	trap_cgame_GetServerCommand( int serverCommandNumber ) {
	return syscall_cgame( CG_GETSERVERCOMMAND, serverCommandNumber );
}

int			trap_cgame_GetCurrentCmdNumber( void ) {
	return syscall_cgame( CG_GETCURRENTCMDNUMBER );
}

qboolean	trap_cgame_GetUserCmd( int cmdNumber, usercmd_t *ucmd ) {
	return syscall_cgame( CG_GETUSERCMD, cmdNumber, ucmd );
}

void		trap_cgame_SetUserCmdValue( int stateValue, float sensitivityScale ) {
	syscall_cgame( CG_SETUSERCMDVALUE, stateValue, PASSFLOAT(sensitivityScale) );
}

void		testPrintInt( char *string, int i ) {
	syscall_cgame( CG_TESTPRINTINT, string, i );
}

void		testPrintFloat( char *string, float f ) {
	syscall_cgame( CG_TESTPRINTFLOAT, string, PASSFLOAT(f) );
}

int trap_cgame_MemoryRemaining( void ) {
	return syscall_cgame( CG_MEMORY_REMAINING );
}

qboolean trap_cgame_Key_IsDown( int keynum ) {
	return syscall_cgame( CG_KEY_ISDOWN, keynum );
}

int trap_cgame_Key_GetCatcher( void ) {
	return syscall_cgame( CG_KEY_GETCATCHER );
}

void trap_cgame_Key_SetCatcher( int catcher ) {
	syscall_cgame( CG_KEY_SETCATCHER, catcher );
}

int trap_cgame_Key_GetKey( const char *binding ) {
	return syscall_cgame( CG_KEY_GETKEY, binding );
}

int trap_cgame_PC_AddGlobalDefine( char *define ) {
	return syscall_cgame( CG_PC_ADD_GLOBAL_DEFINE, define );
}

int trap_cgame_PC_LoadSource( const char *filename ) {
	return syscall_cgame( CG_PC_LOAD_SOURCE, filename );
}

int trap_cgame_PC_FreeSource( int handle ) {
	return syscall_cgame( CG_PC_FREE_SOURCE, handle );
}

int trap_cgame_PC_ReadToken( int handle, pc_token_t *pc_token ) {
	return syscall_cgame( CG_PC_READ_TOKEN, handle, pc_token );
}

int trap_cgame_PC_SourceFileAndLine( int handle, char *filename, int *line ) {
	return syscall_cgame( CG_PC_SOURCE_FILE_AND_LINE, handle, filename, line );
}

void	trap_cgame_S_StopBackgroundTrack( void ) {
	syscall_cgame( CG_S_STOPBACKGROUNDTRACK );
}

int trap_cgame_RealTime(qtime_t *qtime) {
	return syscall_cgame( CG_REAL_TIME, qtime );
}

void trap_cgame_SnapVector(float *v) {
	syscall_cgame(CG_SNAPVECTOR, v);
}

void trap_SnapVector(float *v) {
	syscall_cgame(CG_SNAPVECTOR, v);
}

// this returns a handle.  arg0 is the name in the format "idlogo.roq", set arg1 to NULL, alteredstates to qfalse (do not alter gamestate)
int trap_cgame_CIN_PlayCinematic( const char *arg0, int xpos, int ypos, int width, int height, int bits) {
  return syscall_cgame(CG_CIN_PLAYCINEMATIC, arg0, xpos, ypos, width, height, bits);
}
 
// stops playing the cinematic and ends it.  should always return FMV_EOF
// cinematics must be stopped in reverse order of when they are started
e_status trap_cgame_CIN_StopCinematic(int handle) {
  return syscall_cgame(CG_CIN_STOPCINEMATIC, handle);
}


// will run a frame of the cinematic but will not draw it.  Will return FMV_EOF if the end of the cinematic has been reached.
e_status trap_cgame_CIN_RunCinematic (int handle) {
  return syscall_cgame(CG_CIN_RUNCINEMATIC, handle);
}
 

// draws the current frame
void trap_cgame_CIN_DrawCinematic (int handle) {
  syscall_cgame(CG_CIN_DRAWCINEMATIC, handle);
}
 

// allows you to resize the animation dynamically
void trap_cgame_CIN_SetExtents (int handle, int x, int y, int w, int h) {
  syscall_cgame(CG_CIN_SETEXTENTS, handle, x, y, w, h);
}

/*
qboolean trap_cgame_loadCamera( const char *name ) {
	return syscall_cgame( CG_LOADCAMERA, name );
}

void trap_cgame_startCamera(int time) {
	syscall_cgame(CG_STARTCAMERA, time);
}

qboolean trap_cgame_getCameraInfo( int time, vec3_t *origin, vec3_t *angles) {
	return syscall_cgame( CG_GETCAMERAINFO, time, origin, angles );
}
*/

qboolean trap_cgame_GetEntityToken( char *buffer, int bufferSize ) {
	return syscall_cgame( CG_GET_ENTITY_TOKEN, buffer, bufferSize );
}

qboolean trap_cgame_R_inPVS( const vec3_t p1, const vec3_t p2 ) {
	return syscall_cgame( CG_R_INPVS, p1, p2 );
}
