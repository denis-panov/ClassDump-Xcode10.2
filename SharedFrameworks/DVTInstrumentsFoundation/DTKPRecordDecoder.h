//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, XRFrameActivity, XRIntKeyedDictionary;

@interface DTKPRecordDecoder : NSObject
{
    struct unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _tidToPidMap;
    NSMutableArray *_storageFreeList;
    XRIntKeyedDictionary *_earliestPendingByThread;
    unsigned long long _latestTimestamp;
    struct kpdecode_cursor *_kpcursor;
    struct kperf_kdebug_filter *_callstackActionFilter;
    unsigned char _stopped;
    int _pmcCount;
    unsigned long long *_pmcIndices;
    BOOL _configSeen;
    BOOL _configInvalid;
    unsigned char _configMode;
    BOOL _configHasPET;
    BOOL _configSystrace;
    struct pmc_lastval *_pmcLastValues[32];
    struct {
        unsigned long long buffersProcessed;
        unsigned long long bufferBytes;
        unsigned long long kprecsDecoded;
        unsigned long long kprecsInternal;
        unsigned long long kprecsWithUserStacks;
        unsigned long long kprecsWithKernelStacks;
        unsigned long long kprecsTimeFilteredOut;
        unsigned long long dtkpRecsSent;
        unsigned long long dtkpCallstackFixup;
        unsigned long long eventPoolDepth;
    } _stats;
    unsigned long long _enumerateStartTime;
    unsigned long long _enumerateStopTime;
    struct ktrace_session *_decodingSession;
    BOOL _decodeKPerfFromSession;
    BOOL _decodeKTraceFromSession;
    unsigned long long _eventHorizon;
    NSDictionary *_tidToPid;
    NSDictionary *_tailspinLPET;
    XRFrameActivity *_minorFrameActivity;
}

+ (unsigned long long)peekAtFirstRecordTimestampInDatastream:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) XRFrameActivity *minorFrameActivity; // @synthesize minorFrameActivity=_minorFrameActivity;
@property(retain, nonatomic) NSDictionary *tailspinLPET; // @synthesize tailspinLPET=_tailspinLPET;
@property BOOL decodeKTraceFromSession; // @synthesize decodeKTraceFromSession=_decodeKTraceFromSession;
@property BOOL decodeKPerfFromSession; // @synthesize decodeKPerfFromSession=_decodeKPerfFromSession;
@property(retain, nonatomic) NSDictionary *tidToPid; // @synthesize tidToPid=_tidToPid;
@property(readonly, nonatomic) unsigned long long eventHorizon; // @synthesize eventHorizon=_eventHorizon;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logKPRecsFromBuffer:(const void *)arg1 bufferSize:(unsigned long long)arg2 finalBuffer:(BOOL)arg3 includingCallstacks:(BOOL)arg4 toFile:(struct __sFILE *)arg5;
- (void)_logKPRec:(struct kpdecode_record *)arg1 includingCallstacks:(BOOL)arg2 toFile:(struct __sFILE *)arg3;
- (int)flushRecords:(CDUnknownBlockType)arg1;
- (int)heartbeatTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_getPid:(int *)arg1 fromTid:(unsigned long long)arg2;
- (int)enumerateRecordsFromSession:(struct ktrace_session *)arg1 block:(CDUnknownBlockType)arg2;
- (int)enumerateRecordsFromDatastream:(id)arg1 block:(CDUnknownBlockType)arg2;
- (int)_enumerateRecordsFromBuffer:(const void *)arg1 bufferSize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)_handleRecord:(struct kpdecode_record *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setEnumerateTimeRangeStart:(unsigned long long)arg1 stop:(unsigned long long)arg2;
- (void)_decodeConfig:(struct kpdecode_record *)arg1;
- (void)_setPMCConfigWordCount:(unsigned long long)arg1 wordArray:(unsigned long long *)arg2;
- (void)dealloc;
- (id)init;
- (int)drainEventsThroughTimestamp:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)applyCallstackEvent:(struct kpdecode_record *)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
