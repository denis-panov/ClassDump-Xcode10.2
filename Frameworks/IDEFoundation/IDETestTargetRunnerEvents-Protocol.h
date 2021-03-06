//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class DVTTestPerformanceMetricOutput, IDETestIdentifier, IDETestResult, IDETestResultMessage, NSError, NSString, XCActivityRecord;
@protocol IDETestRunner, IDETestTargetRunner;

@protocol IDETestTargetRunnerEvents
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 didFinishTestWithIdentifier:(IDETestIdentifier *)arg3 withTestResult:(IDETestResult *)arg4 rawOutput:(NSString *)arg5;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 didFailTestWithIdentifier:(IDETestIdentifier *)arg3 withTestResultMessage:(IDETestResultMessage *)arg4 rawOutput:(NSString *)arg5;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testWithIdentifier:(IDETestIdentifier *)arg3 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg4 rawOutput:(NSString *)arg5;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 didOutput:(NSString *)arg3;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testWithIdentifier:(IDETestIdentifier *)arg3 didFinishActivity:(XCActivityRecord *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testWithIdentifier:(IDETestIdentifier *)arg3 willStartActivity:(XCActivityRecord *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 didStartTestWithIdentifier:(IDETestIdentifier *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testSuiteDidFinish:(unsigned long long)arg3 withFailures:(unsigned long long)arg4 unexpected:(unsigned long long)arg5 testDuration:(double)arg6 totalDuration:(double)arg7 rawOutput:(NSString *)arg8;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testSuite:(IDETestIdentifier *)arg3 willFinishAt:(NSString *)arg4 rawOutput:(NSString *)arg5;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 testSuite:(IDETestIdentifier *)arg3 didStartAt:(NSString *)arg4 rawOutput:(NSString *)arg5;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 willFinishWithError:(NSError *)arg3 didCancel:(BOOL)arg4;
- (void)worker:(id <IDETestRunner>)arg1 forTestTargetRunner:(id <IDETestTargetRunner>)arg2 didLaunchWithDiagnosticLogPath:(NSString *)arg3;
- (void)testTargetRunner:(id <IDETestTargetRunner>)arg1 didEndWithCancellation:(BOOL)arg2;
- (void)testTargetRunnerDidStart:(id <IDETestTargetRunner>)arg1;
@end

