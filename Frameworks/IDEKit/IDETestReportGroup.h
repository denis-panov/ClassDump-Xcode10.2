//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_TestGroup-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDETestReportGroup : NSObject <IDETestReport_TestGroup>
{
    NSMutableArray *_testWrappers;
    NSString *_parentGroupName;
    NSArray *_testSummaries;
    NSString *_name;
    double _duration;
}

@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSArray *testSummaries; // @synthesize testSummaries=_testSummaries;
@property(readonly) NSString *parentGroupName; // @synthesize parentGroupName=_parentGroupName;
- (void).cxx_destruct;
@property(readonly, nonatomic) double ide_testReport_testGroup_duration;
@property(readonly, copy, nonatomic) NSString *ide_testReport_base_identifier;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_testTargetName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testGroup_groupName;
- (void)addTestWrapper:(id)arg1;
- (id)ide_sharedTests_testGroup_includePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
- (id)ide_sharedTests_testGroup_perfTests;
- (id)ide_sharedTests_passingTests;
- (id)ide_sharedTests_failingTests;
- (id)ide_sharedTests_testGroup_allTests;
- (id)initWithName:(id)arg1 parentGroupName:(id)arg2 duration:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

