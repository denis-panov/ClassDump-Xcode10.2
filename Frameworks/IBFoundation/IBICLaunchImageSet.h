//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICSlottedAsset.h>

@interface IBICLaunchImageSet : IBICSlottedAsset
{
}

+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (id)createInstanceNamed:(id)arg1 forIdioms:(id)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
- (BOOL)requiresRootNamespace;
- (id)initializeManifestArchivist;
- (void)createChildrenForSlots:(id)arg1 usingRenderer:(CDUnknownBlockType)arg2;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end

