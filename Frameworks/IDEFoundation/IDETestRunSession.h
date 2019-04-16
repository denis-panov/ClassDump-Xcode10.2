//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTProgressReporting-Protocol.h>
#import <IDEFoundation/IDETestTargetRunnerEvents-Protocol.h>
#import <IDEFoundation/IDETestingActivityGenerating-Protocol.h>
#import <IDEFoundation/IDETestsActivityLogBuilderDelegate-Protocol.h>
#import <IDEFoundation/IDETestsInTestableObserver-Protocol.h>

@class DTXConnection, DVTDisallowFinishToken, DVTFilePath, DVTOneShotBlock, DVTPerformanceMetric, DVTStackBacktrace, IDERunDestination, IDESchemeActionRecord, IDETest, IDETestDestination, IDETestIdentifier, IDETestManager, IDETestsActivityLogBuilder, NSArray, NSCountedSet, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol DVTInvalidation, IDETestTargetRunner;

@interface IDETestRunSession : NSObject <IDETestsActivityLogBuilderDelegate, IDETestTargetRunnerEvents, IDETestsInTestableObserver, IDETestingActivityGenerating, DVTProgressReporting, DVTInvalidation>
{
    NSMutableSet *_unitTestsObservers;
    NSMutableArray *_errors;
    unsigned long long _lastReportedMax;
    IDETestManager *_testManager;
    NSCountedSet *_runningTests;
    DVTOneShotBlock *_systemSleepToken;
    DVTOneShotBlock *_displaySleepToken;
    DVTOneShotBlock *_screenSaverSuppressionToken;
    DVTOneShotBlock *_touchBarSimulatorLifecycleToken;
    DVTOneShotBlock *_restoreSystemAfterTestingBlock;
    DVTOneShotBlock *_cleanupTestRunSessionBlock;
    DTXConnection *_keepAliveServiceHubConnection;
    NSDate *_startDate;
    BOOL _atLeastOneTestRunnerFailedWithError;
    BOOL _atLeastOneTestFailed;
    NSMutableArray *_testingActivities;
    BOOL _isUITestingSession;
    BOOL _targetIsMacDevice;
    BOOL _hasFinished;
    BOOL _didCancel;
    IDESchemeActionRecord *_schemeActionRecord;
    DVTFilePath *_testSessionDirectory;
    CDUnknownBlockType _daemonControllerProvider;
    id <IDETestTargetRunner> _currentTestTargetRunner;
    IDETestIdentifier *_currentTestIdentifier;
    NSArray *_testTargetRunners;
    NSDictionary *_testTargetRunnersByTestableName;
    unsigned long long _totalNumberOfTests;
    unsigned long long _currentTestNumber;
    NSMapTable *_pendingTestIDsForTargetRunner;
    NSMapTable *_alreadyRunTestIDsForTargetRunner;
    NSString *_sessionIdentifier;
    unsigned long long _sessionGenerationCount;
    IDERunDestination *_runDestination;
    id <DVTInvalidation> _destinationDeviceClaimToken;
    DVTDisallowFinishToken *_testOperationDisallowFinishToken;
    DVTDisallowFinishToken *_finishWritingLogsToken;
    IDETestsActivityLogBuilder *_activityLogBuilder;
    IDETestDestination *_testDestination;
    DVTPerformanceMetric *_performanceMetric;
    NSString *_currentDiagnosticsTask;
}

+ (id)processNamesToToolchainsForTestRunSpecifications:(id)arg1;
+ (id)bundleIDsForCrashReportEmphasisForTestRunSpecifications:(id)arg1;
+ (id)keyPathsForValuesAffectingProgress;
+ (id)fallbackTestSessionDiectoryForSessionIdentifier:(id)arg1;
+ (void)initialize;
@property(copy) NSString *currentDiagnosticsTask; // @synthesize currentDiagnosticsTask=_currentDiagnosticsTask;
@property(retain) DVTPerformanceMetric *performanceMetric; // @synthesize performanceMetric=_performanceMetric;
@property(retain) IDETestDestination *testDestination; // @synthesize testDestination=_testDestination;
@property(retain) IDETestsActivityLogBuilder *activityLogBuilder; // @synthesize activityLogBuilder=_activityLogBuilder;
@property(retain) DVTDisallowFinishToken *finishWritingLogsToken; // @synthesize finishWritingLogsToken=_finishWritingLogsToken;
@property(retain) DVTDisallowFinishToken *testOperationDisallowFinishToken; // @synthesize testOperationDisallowFinishToken=_testOperationDisallowFinishToken;
@property(retain) id <DVTInvalidation> destinationDeviceClaimToken; // @synthesize destinationDeviceClaimToken=_destinationDeviceClaimToken;
@property(retain) DVTOneShotBlock *touchBarSimulatorLifecycleToken; // @synthesize touchBarSimulatorLifecycleToken=_touchBarSimulatorLifecycleToken;
@property(retain) DVTOneShotBlock *screenSaverSuppressionToken; // @synthesize screenSaverSuppressionToken=_screenSaverSuppressionToken;
@property(retain) DVTOneShotBlock *displaySleepToken; // @synthesize displaySleepToken=_displaySleepToken;
@property(retain) DVTOneShotBlock *systemSleepToken; // @synthesize systemSleepToken=_systemSleepToken;
@property(readonly) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(readonly) unsigned long long sessionGenerationCount; // @synthesize sessionGenerationCount=_sessionGenerationCount;
@property(readonly) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) NSMapTable *alreadyRunTestIDsForTargetRunner; // @synthesize alreadyRunTestIDsForTargetRunner=_alreadyRunTestIDsForTargetRunner;
@property(retain) NSMapTable *pendingTestIDsForTargetRunner; // @synthesize pendingTestIDsForTargetRunner=_pendingTestIDsForTargetRunner;
@property(nonatomic) unsigned long long currentTestNumber; // @synthesize currentTestNumber=_currentTestNumber;
@property(nonatomic) unsigned long long totalNumberOfTests; // @synthesize totalNumberOfTests=_totalNumberOfTests;
@property(retain) NSDictionary *testTargetRunnersByTestableName; // @synthesize testTargetRunnersByTestableName=_testTargetRunnersByTestableName;
@property(retain) NSArray *testTargetRunners; // @synthesize testTargetRunners=_testTargetRunners;
@property(retain) IDETestIdentifier *currentTestIdentifier; // @synthesize currentTestIdentifier=_currentTestIdentifier;
@property(retain) id <IDETestTargetRunner> currentTestTargetRunner; // @synthesize currentTestTargetRunner=_currentTestTargetRunner;
@property(copy) CDUnknownBlockType daemonControllerProvider; // @synthesize daemonControllerProvider=_daemonControllerProvider;
@property BOOL didCancel; // @synthesize didCancel=_didCancel;
@property BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
@property(readonly) BOOL targetIsMacDevice; // @synthesize targetIsMacDevice=_targetIsMacDevice;
@property(readonly) BOOL isUITestingSession; // @synthesize isUITestingSession=_isUITestingSession;
@property(readonly) DVTFilePath *testSessionDirectory; // @synthesize testSessionDirectory=_testSessionDirectory;
@property(readonly) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
- (void).cxx_destruct;
- (void)endActivity:(id)arg1;
- (id)startActivityWithTitle:(id)arg1;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (id)fileURLForTestIdentifier:(id)arg1;
- (unsigned long long)_calculateTestsReported;
- (void)_updateStatisticsForTestable:(id)arg1;
- (BOOL)testableIsPendingRun:(id)arg1;
- (BOOL)testIsPendingRun:(id)arg1;
@property(readonly) long long progress;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 didFinishTestWithIdentifier:(id)arg3 withTestResult:(id)arg4 rawOutput:(id)arg5;
- (void)_removeRunningTest:(id)arg1;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 didFailTestWithIdentifier:(id)arg3 withTestResultMessage:(id)arg4 rawOutput:(id)arg5;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testWithIdentifier:(id)arg3 didMeasurePerformanceMetric:(id)arg4 rawOutput:(id)arg5;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 didOutput:(id)arg3;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testWithIdentifier:(id)arg3 didFinishActivity:(id)arg4;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testWithIdentifier:(id)arg3 willStartActivity:(id)arg4;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 didStartTestWithIdentifier:(id)arg3 rawOutput:(id)arg4;
- (void)_addRunningTest:(id)arg1;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testSuiteDidFinish:(unsigned long long)arg3 withFailures:(unsigned long long)arg4 unexpected:(unsigned long long)arg5 testDuration:(double)arg6 totalDuration:(double)arg7 rawOutput:(id)arg8;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testSuite:(id)arg3 willFinishAt:(id)arg4 rawOutput:(id)arg5;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 testSuite:(id)arg3 didStartAt:(id)arg4 rawOutput:(id)arg5;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 willFinishWithError:(id)arg3 didCancel:(BOOL)arg4;
- (void)_finishTestSession;
- (void)_collectLogArchivesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_considerFinishingWithCancellationFlag:(BOOL)arg1;
- (void)worker:(id)arg1 forTestTargetRunner:(id)arg2 didLaunchWithDiagnosticLogPath:(id)arg3;
- (void)workerDidBecomeReadyForWork:(id)arg1 forTestTargetRunner:(id)arg2;
- (void)testTargetRunner:(id)arg1 didEndWithCancellation:(BOOL)arg2;
- (void)testTargetRunnerDidStart:(id)arg1;
- (void)_stopMonitoringTestables;
- (void)_startMonitoringTestables;
- (id)_contextStringForProgressMessageFromWorker:(id)arg1;
- (BOOL)_shouldPrintProgressMessagesForTestTargetRunner:(id)arg1;
- (BOOL)_shouldCollectLogArchives;
- (void)_relinquishClaimOnDestinationDevice;
- (void)_claimDestinationDevice;
- (void)_stopServiceHubConnection;
- (void)_startServiceHubConnectionForTestTargetRunners:(id)arg1;
- (void)_disableTouchBarSimulator;
- (void)_enableTouchBarSimulator;
- (void)_endSystemActivity;
- (BOOL)_beginSystemActivity:(id *)arg1;
- (id)testOperationForTestRunSpecifications:(id)arg1 executionEnvironment:(id)arg2 actionRecord:(id)arg3 schemeIdentifier:(id)arg4 outSchemeActionResultOperation:(id *)arg5 launchParametersBlock:(CDUnknownBlockType)arg6 actionCallbackBlock:(CDUnknownBlockType)arg7 error:(id *)arg8;
- (BOOL)_prepareSystemForTesting:(id *)arg1;
- (void)_addObserversWithActionResult:(id)arg1 workspace:(id)arg2 activityLogSection:(id)arg3;
- (id)runningTests;
- (void)_addUnitTestsObserver:(id)arg1;
@property(readonly) IDETest *currentTest;
- (void)primitiveInvalidate;
- (id)initWithTestManager:(id)arg1 sessionGenerationCount:(unsigned long long)arg2 runDestination:(id)arg3 actionRecord:(id)arg4;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableTestingActivities; // @dynamic mutableTestingActivities;
@property(readonly) Class superclass;
@property(readonly) NSArray *testingActivities; // @dynamic testingActivities;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

