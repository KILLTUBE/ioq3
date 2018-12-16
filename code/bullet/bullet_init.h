#pragma once

#include "../ccall.h"

CCALL void bullet_init();
CCALL void bullet_step();
CCALL void bullet_cleanup();


#ifdef __cplusplus

#include <btBulletDynamicsCommon.h>

EXTERNC btDefaultCollisionConfiguration *collisionConfiguration;
EXTERNC btCollisionDispatcher *dispatcher;
EXTERNC btBroadphaseInterface *overlappingPairCache;
EXTERNC btSequentialImpulseConstraintSolver *solver;
EXTERNC btDiscreteDynamicsWorld *dynamicsWorld;

//keep track of the shapes, we release memory at exit.
//make sure to re-use collision shapes among rigid bodies whenever possible!
EXTERNC btAlignedObjectArray<btCollisionShape*> collisionShapes;

#endif