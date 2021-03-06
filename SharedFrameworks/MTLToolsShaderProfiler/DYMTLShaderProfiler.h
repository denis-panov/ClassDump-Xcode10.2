//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUToolsShaderProfiler/DYShaderProfiler.h>

@class NSString;
@protocol DYPShaderProfiler;

@interface DYMTLShaderProfiler : DYShaderProfiler
{
    id <DYPShaderProfiler> _platformShaderProfiler;
    BOOL _useEncoderDataForCounters;
    NSString *_metalPluginName;
}

+ (BOOL)isDisassemblerAvailable;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)_generateSamplesForResult:(id)arg1 withProgramAddressLUT:(vector_321b30a3 *)arg2 withBatchIndexMin:(unsigned int)arg3 andBatchIndexMax:(unsigned int)arg4 andMinIndex:(unsigned int)arg5 withProgramAddressList:(struct DYMTLShaderProfilerProgramAddress *)arg6 withUSCSampleList:(struct DYMTLShaderProfilerUSCSample *)arg7 withUSCSampleNum:(unsigned int)arg8 withBatchIDToEncoderIndex:(vector_f672cb0f *)arg9 andEncoderIndexToBatchIdMap:(unordered_map_67b1bd34 *)arg10;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2 targetIndex:(int)arg3;
- (id)_gatherStaticInformation;
- (id)_constructPayload;
- (id)initWithDelegate:(id)arg1;
- (id)profileShader:(id)arg1;
- (id)_queryDerivedCounterDataWithDelegate:(id)arg1 withShaderInfoResult:(id)arg2 forPayload:(id)arg3 withShaderProfilerResult:(id)arg4;
- (void)_showDrawCallDataforResult:(id)arg1;
- (id)profileFrame;
- (id)computeFromFrameInfoResult:(id)arg1 forFuture:(id)arg2;
- (void)_dumpTraceProfileDataForResult:(id)arg1;
- (id)computeFromShaderInfoResult:(id)arg1 forPayload:(id)arg2 forFuture:(id)arg3;
- (void)_setupFragmentEncoderCountersPerDrawCall:(id)arg1;
- (id)_setupLimiterInfoPerDrawCall:(id)arg1 forPayload:(id)arg2;
- (id)_processEncoderTimeData:(id)arg1 withKickTimeData:(id)arg2 forPayload:(id)arg3 withGPUTime:(unsigned long long)arg4;
- (void)enumerateFragmentShadersForResult:(id)arg1 andShaderInfoDictionary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)initializeShaderAnalyzer;

@end

