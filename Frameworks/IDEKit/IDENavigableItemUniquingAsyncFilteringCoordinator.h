//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDENavigableItemAsyncFilteringCoordinator.h>

@class NSMapTable;

@interface IDENavigableItemUniquingAsyncFilteringCoordinator : IDENavigableItemAsyncFilteringCoordinator
{
    NSMapTable *_weakRepresentedObjectsToNavigableItems;
}

- (void).cxx_destruct;
- (void)_forgetItems:(id)arg1;
- (void)_performFilterEvaluationOfRepresentedObject:(id)arg1;
- (void)_performFilterEvaluationOfItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

@end
