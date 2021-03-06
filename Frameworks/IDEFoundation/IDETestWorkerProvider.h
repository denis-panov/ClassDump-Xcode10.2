//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestWorkerProvider-Protocol.h>

@class IDEExecutionEnvironment, IDETestDestination, IDETestRunSpecification, NSURL;
@protocol IDETestingActivityGenerating;

@interface IDETestWorkerProvider : NSObject <IDETestWorkerProvider>
{
    IDETestRunSpecification *_testRunSpecification;
    IDEExecutionEnvironment *_executionEnvironment;
    CDUnknownBlockType _launchParametersBlock;
    IDETestDestination *_testDestination;
    NSURL *_artifactsDirectory;
    id <IDETestingActivityGenerating> _activityReporter;
}

@property(readonly) id <IDETestingActivityGenerating> activityReporter; // @synthesize activityReporter=_activityReporter;
@property(readonly) NSURL *artifactsDirectory; // @synthesize artifactsDirectory=_artifactsDirectory;
@property(retain) IDETestDestination *testDestination; // @synthesize testDestination=_testDestination;
@property(readonly, copy) CDUnknownBlockType launchParametersBlock; // @synthesize launchParametersBlock=_launchParametersBlock;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(readonly) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
- (void).cxx_destruct;
- (void)returnWorker:(id)arg1;
- (id)vendWorker;
- (id)initWithTestRunSpecification:(id)arg1 testDestination:(id)arg2 executionEnvironment:(id)arg3 launchParametersBlock:(CDUnknownBlockType)arg4 artifactsDirectory:(id)arg5 activityReporter:(id)arg6;

@end

