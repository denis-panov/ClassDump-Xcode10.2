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

@class NSMutableDictionary, NSURL, SCNAuthoringEnvironment, SCNMaterialProperty, SCNNode, SCNPhysicsWorld, SCNSceneSource;

@interface SCNScene : NSObject <NSSecureCoding>
{
    struct __C3DScene *_scene;
    SCNSceneSource *_sceneSource;
    SCNPhysicsWorld *_physicsWorld;
    SCNNode *_rootNode;
    SCNNode *_layerRootNode[4];
    SCNMaterialProperty *_background;
    SCNMaterialProperty *_environment;
    NSMutableDictionary *_userAttributes;
    double _fogStartDistance;
    double _fogEndDistance;
    double _fogDensityExponent;
    id _fogColor;
    BOOL _paused;
    NSURL *_sourceURL;
    BOOL _pausedForEditing;
    BOOL _allowsDefaultLightingEnvironmentFallback;
    SCNAuthoringEnvironment *_authoringEnvironment;
}

+ (BOOL)supportsSecureCoding;
+ (SEL)jsConstructor;
+ (id)_indexPathForNode:(id)arg1;
+ (id)supportedFileUTIsForExport;
+ (id)supportedFileUTIsForImport;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (BOOL)canImportFileUTI:(id)arg1;
+ (id)sceneWithSceneRef:(struct __C3DScene *)arg1;
+ (id)sceneWithData:(id)arg1 options:(id)arg2;
+ (id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)sceneWithURL:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 options:(id)arg2;
+ (id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3;
+ (id)sceneNamed:(id)arg1;
+ (id)scene;
+ (id)sceneWithMDLAsset:(id)arg1 options:(id)arg2;
+ (id)sceneWithMDLAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_prettifyForPreview;
- (void)_didEncodeSCNScene:(id)arg1;
- (void)_didDecodeSCNScene:(id)arg1;
- (void)_customDecodingOfSCNScene:(id)arg1;
- (void)_customEncodingOfSCNScene:(id)arg1;
- (id)initForJavascript:(id)arg1;
- (id)_subnodeFromIndexPath:(id)arg1;
- (id)_nodeWithIndexPath:(id)arg1;
- (BOOL)isPausedForEditing;
- (void)setPausedForEditing:(BOOL)arg1;
- (BOOL)isPausedOrPausedByInheritance;
@property(nonatomic, getter=isPaused) BOOL paused;
- (id)particleSystems;
- (void)removeAllParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (void)addParticleSystem:(id)arg1 withTransform:(struct CATransform3D)arg2;
- (void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3;
- (const void *)__CFObject;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)_dumpToDisk;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) double fogStartDistance;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(retain, nonatomic) id fogColor;
- (void)set_allowsDefaultLightingEnvironmentFallback:(BOOL)arg1;
- (BOOL)_allowsDefaultLightingEnvironmentFallback;
@property(readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property(readonly, nonatomic) SCNMaterialProperty *background;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setPlaybackSpeed:(float)arg1;
- (float)playbackSpeed;
- (void)setFrameRate:(double)arg1;
- (double)frameRate;
- (void)setEndTime:(double)arg1;
- (double)endTime;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)_resetSceneTimeRange;
- (id)_physicsWorldCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
- (void)_scaleSceneBy:(double)arg1;
- (id)rootNodeForLayer:(int)arg1;
- (void)setRootNode:(id)arg1 forLayer:(int)arg2;
- (void)setRootNode:(id)arg1;
- (void)_setRootNode:(id)arg1;
@property(readonly, nonatomic) SCNNode *rootNode;
- (id)root;
- (id)sceneSource;
- (void)setSceneSource:(id)arg1;
- (struct __C3DScene *)sceneRef;
- (id)_scenes;
- (id)scene;
- (void)_setSourceURL:(id)arg1;
- (void)dealloc;
- (void)setUpAxis:(struct SCNVector3)arg1;
- (struct SCNVector3)upAxis;
- (void)_clearSceneRef;
- (void)_syncObjCModel;
- (id)initWithSceneRef:(struct __C3DScene *)arg1;
- (id)init;
- (id)debugQuickLookObjectWithPointOfView:(id)arg1;
- (id)debugQuickLookObject;
- (id)exportAsCOLLADAOperationWithDestinationURL:(id)arg1 attributes:(id)arg2 delegate:(id)arg3 didEndSelector:(SEL)arg4 userInfo:(void *)arg5;
- (id)exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (id)_exportAsMovieOperationWithDestinationURL:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 delegate:(id)arg4 didEndSelector:(SEL)arg5 userInfo:(void *)arg6;
- (BOOL)writeToURL:(id)arg1 options:(id)arg2;

@end

