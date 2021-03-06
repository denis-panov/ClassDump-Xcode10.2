//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SpriteKit/SKScene.h>

#import <IDESpriteKitParticleEditor/SKNodeWithShader-Protocol.h>

@class NSString, NSURL, SKCameraNode, SKShader;

@interface SKScene (InspectorAdditions) <SKNodeWithShader>
+ (id)keyPathsForValuesAffectingSk_isSizeOrientationAvailable;
+ (id)keyPathsForValuesAffectingSk_isDeviceSizeCategory;
+ (id)keyPathsForValuesAffectingSk_isCustomSizeCategory;
@property(retain, nonatomic) NSURL *sk_customSpriteShader;
@property(nonatomic) BOOL sk_useCameraNode;
@property(retain, nonatomic) SKCameraNode *sk_cameraRef;
@property(nonatomic) struct CGPoint sk_anchorPoint;
@property(nonatomic) struct CGSize sk_editorSize;
@property(nonatomic) struct CGPoint sk_spriteKitEditorGravity;
@property(nonatomic) BOOL sk_physicsDrawEnabled;
@property(nonatomic) BOOL sk_drawCameraEnabled;
@property(nonatomic) float sk_sizeScale;
@property(nonatomic) unsigned long long sk_sizeOrientation;
@property(nonatomic) unsigned long long sk_sizeCategory;
- (struct CGSize)_sizeForCategory:(unsigned long long)arg1 orientation:(unsigned long long)arg2 scale:(float)arg3;
@property(readonly, nonatomic) BOOL sk_isSizeOrientationAvailable;
@property(readonly, nonatomic) BOOL sk_isDeviceSizeCategory;
@property(readonly, nonatomic) BOOL sk_isCustomSizeCategory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKShader *shader;
@property(readonly) Class superclass;
@end

