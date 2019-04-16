//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LOCAGTaskManager : NSObject
{
    unsigned long long _maxConcurrentTaskCount;
    NSMutableArray *_asynchronousTaskQueue;
    NSMutableArray *_synchronousTaskQueue;
}

@property(retain) NSMutableArray *synchronousTaskQueue; // @synthesize synchronousTaskQueue=_synchronousTaskQueue;
@property(retain) NSMutableArray *asynchronousTaskQueue; // @synthesize asynchronousTaskQueue=_asynchronousTaskQueue;
@property unsigned long long maxConcurrentTaskCount; // @synthesize maxConcurrentTaskCount=_maxConcurrentTaskCount;
- (void).cxx_destruct;
- (id)locFileSets;
- (void)processWithCommand:(id)arg1 withObject:(id)arg2 executionMode:(unsigned long long)arg3;
- (void)addTasksToSynchronousQueue:(id)arg1;
- (void)addTasksToAsynchronousQueue:(id)arg1;
- (void)addTaskToSynchronousQueue:(id)arg1;
- (void)addTaskToAsynchronousQueue:(id)arg1;
- (void)initMaxTaskCount;
- (id)init;

@end

