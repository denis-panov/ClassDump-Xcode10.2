//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestTargetLoadBalancer-Protocol.h>

@class NSArray;
@protocol IDETestTargetLoadBalancerDelegate, OS_dispatch_queue;

@interface IDETestTargetStaticLoadBalancer : NSObject <IDETestTargetLoadBalancer>
{
    BOOL _hasRequestedWorkers;
    unsigned long long _maxWorkerCount;
    id <IDETestTargetLoadBalancerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSArray *_workQueue;
    unsigned long long _state;
}

@property BOOL hasRequestedWorkers; // @synthesize hasRequestedWorkers=_hasRequestedWorkers;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSArray *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <IDETestTargetLoadBalancerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long maxWorkerCount; // @synthesize maxWorkerCount=_maxWorkerCount;
- (void).cxx_destruct;
- (void)requestWorkersIfNecessary;
- (void)workQueueDidChange:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithMaximumWorkerCount:(unsigned long long)arg1;

@end
