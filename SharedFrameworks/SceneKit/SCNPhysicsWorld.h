//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, SCNPhysicsContact, SCNScene;
@protocol SCNPhysicsContactDelegate;

@interface SCNPhysicsWorld : NSObject <NSSecureCoding>
{
    struct btDiscreteDynamicsWorld *_world;
    struct btOverlappingPairCallback *_ghostPairCallback;
    struct btVehicleRaycaster *_vehicleRayCaster;
    struct btC3DDebugDraw *_debugDrawer;
    struct c3dAether _aether;
    BOOL _hasActiveFields;
    id <SCNPhysicsContactDelegate> _contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    struct SCNVector3 _gravity;
    double _speed;
    double _scale;
    double _timeStep;
    NSMutableArray *_fields;
    double _elapsedTime;
    NSMutableArray *_behaviors;
    NSMutableSet *_bodies;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNPhysicsWorld:(id)arg1;
- (void)_customDecodingOfSCNPhysicsWorld:(id)arg1;
- (void)_customEncodingOfSCNPhysicsWorld:(id)arg1;
- (void)removePhysicsBody:(id)arg1 handle:(void *)arg2;
- (void)addPhysicsBody:(id)arg1 nodeRef:(struct __C3DNode *)arg2 colGroup:(unsigned long long)arg3 colMask:(unsigned long long)arg4 colTest:(unsigned long long)arg5;
- (void)_drawDebugInAuthoringEnvironment:(void *)arg1;
- (void)_postCommandWithBlock:(CDUnknownBlockType)arg1;
- (void)setScene:(id)arg1;
- (id)scene;
- (void)_allowGhostObjects;
- (struct btDynamicsWorld *)_handle;
- (struct btVehicleRaycaster *)_defaultVehicleRayCaster;
- (void)_step:(double)arg1;
- (void)_updatePhysicsFieldsTrasforms;
- (struct c3dAether *)_aetherHandle;
- (void)_removeFieldFromWorld:(id)arg1;
- (void)_addFieldToWorld:(id)arg1;
- (id)_findFieldAttachedToNode:(id)arg1;
- (void)_reset;
- (void)enumerateBodiesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_needsRedraw;
- (void)updateCollisionPairs;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct CATransform3D)arg2 toTransform:(struct CATransform3D)arg3 options:(id)arg4;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3)arg1 toPoint:(struct btVector3)arg2 options:(id)arg3;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
@property(readonly, nonatomic) NSArray *allBehaviors;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3;
- (id)objectInAllBehaviorsAtIndex:(unsigned long long)arg1;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
@property __weak id <SCNPhysicsContactDelegate> contactDelegate;
@property(nonatomic) double timeStep;
- (double)scale;
- (void)setScale:(double)arg1;
@property(nonatomic) double speed;
@property(nonatomic) struct SCNVector3 gravity;
- (void)wakeUpAllBodies;
- (BOOL)_isDefault;
- (void)sceneWillDie;
- (void)dealloc;
- (id)initWithScene:(id)arg1;
- (void)commonInit;
- (id)_physicsContact;
- (void)_createDynamicWorldIfNeeded;
- (void)_preTick:(double)arg1;

@end

