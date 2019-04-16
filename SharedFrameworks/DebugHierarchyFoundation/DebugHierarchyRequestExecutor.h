//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DebugHierarchyRequestActionExecutor, DebugHierarchyRequestExecutionContext;

@interface DebugHierarchyRequestExecutor : NSObject
{
    DebugHierarchyRequestExecutionContext *_requestContext;
    DebugHierarchyRequestActionExecutor *_actionExecutor;
}

+ (id)executorWithRequest:(id)arg1;
@property(retain, nonatomic) DebugHierarchyRequestExecutionContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) DebugHierarchyRequestActionExecutor *actionExecutor; // @synthesize actionExecutor=_actionExecutor;
- (void).cxx_destruct;
- (id)_performanceMetricsDictionaryRequestActionDuration:(double)arg1;
- (void)_executeRequestActionsWithKnownObjects;
- (void)_executeRequestActionsWithCrawler;
- (void)_v1MakePropertyDescriptionCompatible:(id)arg1 withRuntimeType:(id)arg2;
- (void)_v1RecursivelyMakePropertyDescriptionCompatibleWithGroup:(id)arg1;
- (id)_v1CompatibleRequestResponseFromResponse:(id)arg1;
- (id)runWithError:(id *)arg1;
- (id)initWithRequest:(id)arg1;

@end
