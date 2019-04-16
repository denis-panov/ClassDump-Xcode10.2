//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsKit/DTAbstractAssetGroup.h>

@class NSDictionary, NSPredicate;

@interface DTSmartAssetGroup : DTAbstractAssetGroup
{
    NSPredicate *predicate;
    NSDictionary *intermediatePredicateRepresentation;
}

+ (id)defaultImage;
- (id)assets;
- (id)canidateAssets;
- (void)canidateAssetsChanged:(id)arg1;
- (BOOL)groupsAreEditable;
- (void)setPredicate:(id)arg1 andIntermediateRepresentation:(id)arg2;
- (id)intermediateRepresentation;
- (id)predicate;
- (void)registerForNotifications;
- (void)dealloc;
- (id)initWithPropertyListRepresentation:(id)arg1 assetCategory:(id)arg2 andIdentifiedAssets:(id)arg3;
- (void)buildPropertyListRepresentation:(id)arg1;
- (id)initWithDisplayName:(id)arg1 andAssetCategory:(id)arg2;

@end

