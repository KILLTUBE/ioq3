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

#pragma once

#include "qfiles.h"
#include "../ccall.h"

CCALL void		CM_LoadMap( const char *name, qboolean clientload, int *checksum);
CCALL void		CM_ClearMap( void );
CCALL clipHandle_t CM_InlineModel( int index );		// 0 = world, 1 + are bmodels
CCALL clipHandle_t CM_TempBoxModel( const vec3_t mins, const vec3_t maxs, int capsule );

CCALL void		CM_ModelBounds( clipHandle_t model, vec3_t mins, vec3_t maxs );

CCALL int			CM_NumClusters (void);
CCALL int			CM_NumInlineModels( void );
CCALL char		*CM_EntityString (void);

// returns an ORed contents mask
CCALL int			CM_PointContents( const vec3_t p, clipHandle_t model );
CCALL int			CM_TransformedPointContents( const vec3_t p, clipHandle_t model, const vec3_t origin, const vec3_t angles );

CCALL void		CM_BoxTrace ( trace_t *results, const vec3_t start, const vec3_t end,
						  vec3_t mins, vec3_t maxs,
						  clipHandle_t model, int brushmask, int capsule );
CCALL void		CM_TransformedBoxTrace( trace_t *results, const vec3_t start, const vec3_t end,
						  vec3_t mins, vec3_t maxs,
						  clipHandle_t model, int brushmask,
						  const vec3_t origin, const vec3_t angles, int capsule );

CCALL byte		*CM_ClusterPVS (int cluster);

CCALL int			CM_PointLeafnum( const vec3_t p );

// only returns non-solid leafs
// overflow if return listsize and if *lastLeaf != list[listsize-1]
CCALL int			CM_BoxLeafnums( const vec3_t mins, const vec3_t maxs, int *list,
		 					int listsize, int *lastLeaf );

CCALL int			CM_LeafCluster (int leafnum);
CCALL int			CM_LeafArea (int leafnum);

CCALL void		CM_AdjustAreaPortalState( int area1, int area2, qboolean open );
CCALL qboolean	CM_AreasConnected( int area1, int area2 );

CCALL int			CM_WriteAreaBits( byte *buffer, int area );

// cm_patch.c
CCALL void CM_DrawDebugSurface( void (*drawPoly)(int color, int numPoints, float *points) );
