//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface LOCImportComparison : NSObject
{
    NSMutableSet *_changedFiles;
    NSObject<OS_dispatch_queue> *_changedFilesQueue;
    NSMutableArray *_issues;
    NSObject<OS_dispatch_queue> *_issuesQueue;
    NSMutableDictionary *_changesAndIssues;
    NSObject<OS_dispatch_queue> *_changesAndIssuesQueue;
}

@property(readonly, copy) NSDictionary *changesAndIssues; // @synthesize changesAndIssues=_changesAndIssues;
@property(readonly, copy) NSArray *issues; // @synthesize issues=_issues;
@property(readonly, copy) NSSet *changedFiles; // @synthesize changedFiles=_changedFiles;
- (void).cxx_destruct;
- (void)addComparisonDetailInfoToOldProperties:(id)arg1 changedFile:(id)arg2;
- (void)addComparisonDetailsFromComparison:(id)arg1;
- (void)addComparisonDetail:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

