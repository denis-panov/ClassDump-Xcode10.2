//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBThread-Protocol.h>

@class NSString;

@interface LLDBRPCThread : NSObject <DBGSBThread>
{
    struct SBThread {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _thread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)StepOut;
- (void)StepOver:(int)arg1;
- (void)StepInto:(int)arg1;
- (void)StepInstruction:(_Bool)arg1;
- (unsigned int)GetExtendedBacktraceOriginatingIndexID;
- (const char *)GetQueueName;
- (unsigned long long)GetQueueID;
- (unsigned long long)GetThreadID;
- (unsigned long long)GetStopDescription:(char *)arg1 dst_len:(unsigned long long)arg2;
- (unsigned long long)GetStopReasonDataAtIndex:(unsigned int)arg1;
- (int)GetStopReason;
- (_Bool)Resume;
- (_Bool)Suspend;
- (unsigned int)GetNumFrames;
- (const char *)GetName;
- (unsigned int)GetIndexID;
- (_Bool)IsValid;
- (id)initWithSBThread:(const struct SBThread *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)StepOverUntil:(id)arg1 fileSpec:(id)arg2 line:(unsigned int)arg3;
- (id)GetStopReturnValue;
- (id)GetStopReasonExtendedBacktraces:(int)arg1;
- (_Bool)GetStopReasonExtendedInfoAsJSON:(id)arg1;
- (id)SetSelectedFrame:(unsigned int)arg1;
- (id)GetSelectedFrame;
- (id)GetFrameAtIndex:(unsigned int)arg1;
- (id)GetProcess;
- (id)GetExtendedBacktraceThread:(const char *)arg1;
- (_Bool)GetInfoItemByPathAsString:(const char *)arg1 stream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

