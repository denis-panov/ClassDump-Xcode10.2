//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSOperation.h>

@class DVTDispatchLock, DVTObservingToken, DVTStackBacktrace, NSArray, NSError, NSMutableArray;

@interface DVTOperation : NSOperation
{
    CDUnknownBlockType _block;
    NSError *_error;
    DVTDispatchLock *_cancellationRegistrationLock;
    DVTDispatchLock *_cancellationBlockLock;
    NSMutableArray *_cancellationBlockTokens;
    DVTDispatchLock *_finishingLock;
    NSMutableArray *_finishingTokens;
    BOOL _preventFinish;
    DVTObservingToken *_isFinishedObserverToken;
    DVTObservingToken *_isExecutingObserverToken;
    NSArray *_warnings;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)_trackStateChange:(id)arg1 ofOperation:(id)arg2 forKeyPath:(id)arg3;
+ (id)unfinishedOperations;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
@property BOOL preventFinish; // @synthesize preventFinish=_preventFinish;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(copy) NSArray *warnings; // @synthesize warnings=_warnings;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)notFinishedReasonWithDepth:(unsigned long long)arg1;
- (id)stateString;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateWithStop:(char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)allowFinishForToken:(id)arg1;
- (id)disallowFinishWithReason:(id)arg1;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)unregisterCancellationBlockForToken:(id)arg1;
- (id)registerCancellationBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)trackFuture:(id)arg1;
- (void)trackFuture:(id)arg1 cancel:(BOOL)arg2 error:(BOOL)arg3;

@end

