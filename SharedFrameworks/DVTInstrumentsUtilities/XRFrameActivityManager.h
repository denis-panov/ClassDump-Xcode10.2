//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRFrameActivityManager-Protocol.h>
#import <DVTInstrumentsUtilities/XRMobileAgentStop-Protocol.h>

@class NSString, XRFrameActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, XRFrameCommutator;

@interface XRFrameActivityManager : NSObject <XRFrameActivityManager, XRMobileAgentStop>
{
    // Error parsing type: ^Ac, name: _shouldYield
    id <XRFrameCommutator> _commutator;
    // Error parsing type: Ac, name: _yieldFlag
    BOOL _establishesAffinity;
    BOOL _activitiesCanRunInParallel;
    BOOL _debugCanCallSuspend;
    BOOL _debugCanCallResume;
    unsigned char _suspendCount;
    unsigned int _activityQoS;
    struct XRSerializedAccess<ActivityInfo> _activityInfo;
    NSObject<OS_dispatch_semaphore> *_actionRequired;
    NSObject<OS_dispatch_queue> *_serialActivityQueue;
    struct _opaque_pthread_rwlock_t _insideFrameLock;
    struct _opaque_pthread_rwlock_t _outsideFrameLock;
    XRFrameActivity *_syncActivity;
    int _kdebugCodeBase;
    unsigned long long _signpostID;
}

+ (void)initialize;
+ (int)_identifierForSignposting;
+ (unsigned int)_activityQoS;
+ (BOOL)_establishesAffinity;
+ (BOOL)_enableConcurrentActivities;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finalShutdown;
- (void)underrunWarning;
- (void)shutdown;
- (void)_prepareMinorFrameAgent:(id)arg1;
- (void)_escortMinorFrameAgentToExit:(id)arg1;
- (void)receiveMobileAgent:(id)arg1;
- (void)setupVisitDuringMinorFrame:(id)arg1 agent:(id)arg2 mode:(id)arg3 ticket:(id)arg4;
- (id)_scheduleActivityWithBlock:(CDUnknownBlockType)arg1;
- (void)_scheduleActivityInGroup:(id)arg1 qualityOfService:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (void)_performOutsideMinorFrame:(CDUnknownBlockType)arg1;
- (void)_performDuringMinorFrame:(CDUnknownBlockType)arg1;
- (int)_handleMinorFrameWithDeadline:(unsigned long long)arg1;
- (void)_markAsReady;
- (void)beginMinorFrameWithDeadline:(unsigned long long)arg1;
- (void)_suspendActivitiesWithDeadline:(unsigned long long)arg1;
- (void)_resumeActivities;
- (void)_dispatchScheduledActivitiesUntil:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
- (void)_activityFinished:(id)arg1;
- (void)_activityYielded:(id)arg1;
- (BOOL)_hasRunnableActivities;
- (void)setCommutator:(id)arg1;
-     // Error parsing type: ^Ac16@0:8, name: _shouldYieldFlag
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

