//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXGroup.h>

@interface PBXVariantGroup : PBXGroup
{
}

+ (id)referenceByUnwrappingVariantGroup:(id)arg1;
+ (void)replaceBuildFilesForReference:(id)arg1 withBuildFilesForReference:(id)arg2;
- (void)pruneReferencesBySendingBooleanSelector:(SEL)arg1 toObject:(id)arg2 withContext:(void *)arg3;
- (BOOL)enumerateReferencesForBuildingUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencesForBuilding;
- (BOOL)makeVariantForRegion:(id)arg1;
- (BOOL)makeVariantForRegion:(id)arg1 fromRegion:(id)arg2;
- (BOOL)makeGlobal;
- (BOOL)makeLocalized;
- (id)variantForRegion:(id)arg1;
- (BOOL)ensureHasDefaultReference;
- (id)buildReference;
- (id)defaultReference;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (id)destinationGroupForInsertion;
- (BOOL)isVariantGroup;

@end

