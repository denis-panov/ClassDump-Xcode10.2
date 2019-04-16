//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface IBICCatalogMediaRepositoryChangeSet : NSObject
{
    NSMutableSet *_addedOrUpdatedResources;
    NSMutableSet *_removedResources;
}

@property(readonly) NSSet *addedOrUpdatedResources; // @synthesize addedOrUpdatedResources=_addedOrUpdatedResources;
- (void).cxx_destruct;
- (BOOL)hasAnyChanges;
- (void)noteRemovedResource:(id)arg1;
- (void)noteAddedOrUpdatedResource:(id)arg1;
@property(readonly) NSSet *removedResources;
- (id)addedOrUpdated;
- (id)init;

@end

