//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESchemeActionsInvocationRecord, IDEWorkspace, NSArray, NSString;

@protocol IDETestReport_RootObject <NSObject>
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_supportsDurationColumn;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_attachmentsHaveBeenPruned;
@property(readonly, nonatomic) BOOL ide_testReport_rootObject_canRevealActivityAssetsLocally;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
@property(readonly, copy, nonatomic) NSString *ide_testReport_rootObject_identifier;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_allTestClasses;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(IDEWorkspace *)arg1;
- (NSArray *)ide_testReport_rootObject_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;

@optional
@property(readonly, nonatomic) double ide_testReport_rootObject_duration;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_rootObject_schemeActionsInvocationRecord;
@end

