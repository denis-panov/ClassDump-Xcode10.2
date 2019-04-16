//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTTimeSlicedMainThreadWorkQueue.h>

@class NSMutableArray;

@interface _DVTTimeSlicedMainThreadUnorderedNonUniquingWorkQueue : DVTTimeSlicedMainThreadWorkQueue
{
    NSMutableArray *_workItems;
}

- (void).cxx_destruct;
- (void)_processWorkItemsWithDeadline:(unsigned long long)arg1;
- (void)_removeWorkItems:(id)arg1;
- (void)_removeWorkItem:(id)arg1;
- (BOOL)_workIsEnqueued;
- (void)_removeAllWorkItems;
- (void)_addWorkItemsAtFront:(id)arg1;
- (void)_addWorkItemAtFront:(id)arg1;
- (void)_addWorkItems:(id)arg1;
- (void)_addWorkItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)_init;

@end

