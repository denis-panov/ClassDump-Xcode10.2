//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SpriteKit/SKReferenceNode.h>

#import <IDESpriteKitParticleEditor/SKAssetReferenceDelegate-Protocol.h>

@class NSString, SKAssetReference;

@interface SKEditorReferenceNode : SKReferenceNode <SKAssetReferenceDelegate>
{
    SKAssetReference *_referenceSceneReference;
    SKAssetReference *_referenceParticleReference;
    BOOL _createUndoOperation;
    NSString *_oldReferenceFileName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)isAssetStillInWorkspace:(id)arg1;
- (void)assetReferenceInvalidated:(id)arg1;
- (void)verifyAssetReferenceIsValid:(id)arg1 forDocument:(id)arg2;
- (void)assetReference:(id)arg1 didUpdateFromDocument:(id)arg2;
- (void)setDocument:(id)arg1;
- (void)createAssetReference;
- (void)updateReferenceFile:(id)arg1;
@property(retain, nonatomic) NSString *referenceNodeSourceFileName_commit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

