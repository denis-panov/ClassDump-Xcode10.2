//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEActivityLogSection.h>

@class IDETestIdentifier, NSString;

@interface IDEActivityLogUnitTestSection : IDEActivityLogSection
{
    NSString *_testsPassedString;
    NSString *_durationString;
    NSString *_summaryString;
    NSString *_suiteName;
    NSString *_testName;
    NSString *_performanceTestOutputString;
    unsigned long long _testsPassedCount;
    unsigned long long _testsCount;
    unsigned long long _unexpectedFailuresCount;
    double _duration;
}

+ (id)workerGroupRunnableUTIPropertyType;
+ (id)workerGroupRunnablePathPropertyType;
+ (id)workerGroupDomainType;
+ (Class)logRecorderClass;
+ (id)defaultLogSectionDomainType;
+ (id)newWithDomainType:(id)arg1 title:(id)arg2;
@property double duration; // @synthesize duration=_duration;
@property unsigned long long unexpectedFailuresCount; // @synthesize unexpectedFailuresCount=_unexpectedFailuresCount;
@property unsigned long long testsCount; // @synthesize testsCount=_testsCount;
@property unsigned long long testsPassedCount; // @synthesize testsPassedCount=_testsPassedCount;
@property(copy) NSString *performanceTestOutputString; // @synthesize performanceTestOutputString=_performanceTestOutputString;
@property(copy) NSString *testName; // @synthesize testName=_testName;
@property(copy) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(copy) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
@property(copy) NSString *testsPassedString; // @synthesize testsPassedString=_testsPassedString;
- (void).cxx_destruct;
@property(readonly) IDETestIdentifier *testIdentifier;
@property(readonly, copy) NSString *runnableUTI;
@property(readonly, copy) NSString *runnablePath;
@property(readonly) IDEActivityLogSection *metadataSubsection;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTestsPassedString:(id)arg1 durationString:(id)arg2 summaryString:(id)arg3 suiteName:(id)arg4 testName:(id)arg5 performanceTestOutputString:(id)arg6 sectionType:(long long)arg7 domainType:(id)arg8 title:(id)arg9 subtitle:(id)arg10 location:(id)arg11 signature:(id)arg12 timeStartedRecording:(double)arg13 timeStoppedRecording:(double)arg14 subsections:(id)arg15 text:(id)arg16 messages:(id)arg17 wasCancelled:(BOOL)arg18 wasFetchedFromCache:(BOOL)arg19 commandDetailDescription:(id)arg20 uniqueIdentifier:(id)arg21 localizedResultString:(id)arg22 xcbuildSignature:(id)arg23;
- (id)initUnitTestWorkerGroupWithTitle:(id)arg1 subtitle:(id)arg2 runnablePath:(id)arg3 runnableUTI:(id)arg4;
- (id)initUnitTestWithTitle:(id)arg1 location:(id)arg2;
- (void)buildStrings;
- (id)addAbnormalFinishMessageWithReason:(id)arg1 error:(id)arg2;

@end

