//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDESpriteKitParticleEditor/DVTInvalidation-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, NSMutableDictionary, NSString, SKWorkspace;

@interface SKAssetManager : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_registeredAssets;
    DVTNotificationToken *_updateToken;
    SKWorkspace *_workspace;
}

+ (id)assetNamesInFileAtPath:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) __weak SKWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)allAssetNamesInWorkspaceInDocumentType:(id)arg1;
- (id)_urlForAssetNamed:(id)arg1 inDocumentType:(id)arg2;
- (void)_autoreleaseEditorDocument:(id)arg1;
- (id)documentForAssetNamed:(id)arg1 inDocumentType:(id)arg2;
- (void)_handleUpdateAtFilePath:(id)arg1;
- (void)_handleDocumentUpdate:(id)arg1;
- (void)_handleUpdatedAndAddedFilePaths:(id)arg1 removedPaths:(id)arg2;
- (void)_setupUpdateHandling;
@property(readonly, nonatomic) BOOL hasAssetReferences;
- (void)_removeAsset:(id)arg1 fromCollectionOfType:(id)arg2;
- (void)_addAsset:(id)arg1 toCollectionOfType:(id)arg2;
- (void)unregisterAssetReferenceUpdates:(id)arg1;
- (void)registerAssetReferenceForUpdates:(id)arg1;
- (void)primitiveInvalidate;
- (id)initForSKWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

