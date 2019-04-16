//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTTimeSlicedMainThreadWorkQueue.h>

@class NSHashTable;

@interface _DVTTimeSlicedMainThreadUnorderedUniquingWorkQueue : DVTTimeSlicedMainThreadWorkQueue
{
    NSHashTable *_workItems;
    unsigned long long _hashTableOptions;
    unsigned long long _lastBatchSize;
}

- (void).cxx_destruct;
- (id)_batchOfWorkItems;
- (void)_processWorkItemsWithDeadline:(unsigned long long)arg1;
- (void)_removeWorkItems:(id)arg1;
- (void)_removeWorkItem:(id)arg1;
- (BOOL)_workIsEnqueued;
- (void)_removeAllWorkItems;
- (void)_addWorkItems:(id)arg1;
- (void)_addWorkItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)_initWithStorageOptions:(unsigned long long)arg1;

@end
