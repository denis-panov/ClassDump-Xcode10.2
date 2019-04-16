//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUToolsServices/DYAnalyzerFinding.h>

@interface DYAnalyzerFindingPunchThrough : DYAnalyzerFinding
{
    unsigned int _punchThroughReasons;
    unsigned int _numReasons;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int numReasons; // @synthesize numReasons=_numReasons;
@property(readonly, nonatomic) unsigned int punchThroughReasons; // @synthesize punchThroughReasons=_punchThroughReasons;
- (BOOL)isTextureImageCompletelyUpdated;
- (BOOL)isBufferDataCompletelyUpdated;
- (BOOL)isInefficientStateUpdate;
- (BOOL)isRedundantCallOrQuery;
- (BOOL)isRedundantCall;
- (BOOL)isFrameStatistics;
- (BOOL)isDataRestoreUnnecessaryForFunc:(const struct Function *)arg1 targetArgIndex:(int)arg2 objectType:(unsigned int)arg3 analyzerEngine:(id)arg4;
- (id)_determineSeparatorByNumReasonsAdded:(unsigned int)arg1;
- (id)_apiSpecificReasonString:(int)arg1;
- (id)reasonsString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPunchThroughReasons:(unsigned int)arg1;
- (void)_initCommon;
- (id)description;

@end

