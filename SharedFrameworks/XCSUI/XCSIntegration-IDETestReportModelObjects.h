//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSIntegration.h>

#import <XCSUI/IDETestReport_RootObject-Protocol.h>

@class IDESchemeActionsInvocationRecord, NSArray, NSString;

@interface XCSIntegration (IDETestReportModelObjects) <IDETestReport_RootObject>
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(id)arg1;
- (id)ide_testReport_rootObject_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
- (id)testsIncludePassing:(BOOL)arg1 includeFailing:(BOOL)arg2 perfOnly:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@property(readonly) Class superclass;
@end
