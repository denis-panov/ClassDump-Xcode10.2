//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSConditionLock, NSThread;

@interface XCRunLoopMonitor : NSObject
{
    NSThread *_monitoredThread;
    struct __CFRunLoopObserver *_runLoopWakeObserver;
    struct __CFRunLoopObserver *_runLoopSleepObserver;
    NSConditionLock *_runLoopStatus;
    double _sleepTime;
    NSThread *_lockingThread;
    unsigned long long _lockCount;
    unsigned long long _enabledCount;
}

+ (id)mainThreadMonitor;
- (void).cxx_destruct;
- (void)resumeRunLoop;
- (void)unblockRunLoop;
- (void)blockRunLoopAfterIdleInterval:(double)arg1;
- (void)waitForRunLoopIdleInterval:(double)arg1;
- (void)_waitForIdleInterval:(double)arg1 blockMonitoredThread:(BOOL)arg2;
- (BOOL)_currentThreadHasLock;
- (void)disableMonitoring;
- (void)enableMonitoring;
- (void)_runLoopWillRun;
- (void)_runLoopWillSleep;
- (void)dealloc;
- (id)initWithThread:(id)arg1;
- (id)init;

@end
