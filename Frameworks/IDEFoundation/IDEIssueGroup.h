//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEContainer, IDEIssueProvider, IDEIssueTypeGroup, NSArray, NSMapTable, NSMutableArray, NSSet;
@protocol IDEBlueprint, IDEIssueRuntimeGroupingObject;

@interface IDEIssueGroup : NSObject
{
    NSMutableArray *_issueFileGroups;
    NSMapTable *_issueFileGroupsIndex;
    NSMutableArray *_issuesWithNoFile;
    NSMutableArray *_issueTypeGroups;
    NSMapTable *_issueTypeGroupsIndex;
    IDEIssueTypeGroup *_runtimeTopGroup;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    unsigned long long _runtimeCount;
    IDEIssueProvider *_issueProvider;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
    id <IDEIssueRuntimeGroupingObject> _runtimeGroupingObject;
    unsigned long long _issueType;
}

@property unsigned long long issueType; // @synthesize issueType=_issueType;
@property(readonly) id <IDEIssueRuntimeGroupingObject> runtimeGroupingObject; // @synthesize runtimeGroupingObject=_runtimeGroupingObject;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly, copy) NSArray *issueTypeGroups; // @synthesize issueTypeGroups=_issueTypeGroups;
@property(readonly, copy) NSArray *issuesWithNoFile; // @synthesize issuesWithNoFile=_issuesWithNoFile;
@property(readonly, copy) NSArray *issueFileGroups; // @synthesize issueFileGroups=_issueFileGroups;
- (void).cxx_destruct;
@property(readonly) NSSet *_allIssues;
- (void)_removeIssues:(id)arg1;
- (void)_addIssues:(id)arg1;
- (void)_createRuntimeGroupIfNecessary:(id)arg1;
- (void)_addNoFileIssues:(id)arg1;
- (void)_updateIssueType;
@property(readonly) unsigned long long issueCount;
- (id)_initWithIssueProvider:(id)arg1 container:(id)arg2 blueprint:(id)arg3 runtimeGroupingObject:(id)arg4;
- (id)init;

@end
