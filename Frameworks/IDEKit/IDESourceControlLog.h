//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDispatchLock, DVTSourceControlBranch, DVTSourceControlWorkingCopy, DVTSourceControlWorkspace, DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface IDESourceControlLog : NSObject <DVTInvalidation>
{
    DVTSourceControlWorkspace *_sourceControlWorkspace;
    DVTSourceControlWorkingCopy *_workingCopy;
    NSString *_path;
    DVTSourceControlBranch *_branch;
    NSMutableArray *_logRequests;
    DVTDispatchLock *_requestLock;
    DVTDispatchLock *_logItemsLock;
    NSMutableArray *_logItems;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _displayFilesChanged;
    BOOL _datasourceExternal;
    NSMapTable *_lastRevisionsLoaded;
    NSArray *_authors;
    NSString *_searchTerm;
    unsigned long long _searchType;
    NSString *_startingRevision;
    NSString *_endingRevision;
    NSArray *_logContents;
}

+ (id)logAspect;
+ (void)initialize;
@property(getter=isDatasourceExternal) BOOL datasourceExternal; // @synthesize datasourceExternal=_datasourceExternal;
@property(retain, nonatomic) NSArray *logContents; // @synthesize logContents=_logContents;
@property(copy) NSString *endingRevision; // @synthesize endingRevision=_endingRevision;
@property(copy) NSString *startingRevision; // @synthesize startingRevision=_startingRevision;
@property unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain) NSArray *authors; // @synthesize authors=_authors;
@property(retain, nonatomic) NSMapTable *lastRevisionsLoaded; // @synthesize lastRevisionsLoaded=_lastRevisionsLoaded;
@property(readonly) DVTSourceControlBranch *branch; // @synthesize branch=_branch;
@property BOOL displayFilesChanged; // @synthesize displayFilesChanged=_displayFilesChanged;
@property(readonly) NSArray *logItems; // @synthesize logItems=_logItems;
- (void).cxx_destruct;
- (id)loadLogItems:(id)arg1 searchType:(unsigned long long)arg2 incrementalLogBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)arrangeLogEntries:(id)arg1;
- (unsigned long long)_lastIndexForWorkingCopy:(id)arg1;
- (void)setLogContentsWithItems:(id)arg1;
- (void)clearLog;
@property(readonly) NSString *subpath;
- (void)setWorkingCopy:(id)arg1 subpath:(id)arg2 branch:(id)arg3;
@property(retain) DVTSourceControlWorkingCopy *workingCopy;
- (void)_setWorkingCopy:(id)arg1;
@property(retain) DVTSourceControlWorkspace *sourceControlWorkspace;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

