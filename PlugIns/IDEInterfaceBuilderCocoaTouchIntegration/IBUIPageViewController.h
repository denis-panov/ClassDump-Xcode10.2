//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUIPageViewController : IBUIViewController <IBDocumentArchiving>
{
    BOOL _doubleSided;
    long long _transitionStyle;
    long long _pageSpacing;
    long long _navigationOrientation;
    long long _spineLocation;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(getter=isDoubleSided) BOOL doubleSided; // @synthesize doubleSided=_doubleSided;
@property long long spineLocation; // @synthesize spineLocation=_spineLocation;
@property long long navigationOrientation; // @synthesize navigationOrientation=_navigationOrientation;
@property long long pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)setIbInspectedTransitionStyle:(long long)arg1;
- (long long)ibInspectedTransitionStyle;
- (void)setIbInspectedSpineLocation:(long long)arg1;
- (long long)ibInspectedSpineLocation;
- (id)ibImageForOwnedScene;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (id)ibExplanatoryTextForEditor;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (Class)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
