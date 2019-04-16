//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DebugHierarchyCrawlerOptions, DebugHierarchyRequestActionExecutor, DebugHierarchyRequestExecutionContext, NSMapTable;

@interface DebugHierarchyCrawler : NSObject
{
    DebugHierarchyRequestExecutionContext *_requestContext;
    NSMapTable *_knownObjectsMap;
    DebugHierarchyRequestActionExecutor *_actionExecutor;
}

+ (id)crawlerWithRequestContext:(id)arg1 knownObjectsMap:(id)arg2;
@property(retain, nonatomic) DebugHierarchyRequestExecutionContext *requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) NSMapTable *knownObjectsMap; // @synthesize knownObjectsMap=_knownObjectsMap;
@property(retain) DebugHierarchyRequestActionExecutor *actionExecutor; // @synthesize actionExecutor=_actionExecutor;
- (void).cxx_destruct;
- (id)_entryPointClasses;
- (void)crawlDebugHierarchyObject:(id)arg1 inGroupWithID:(id)arg2 asDirectChild:(BOOL)arg3 belowParent:(id)arg4 withParentDefinedVisibility:(long long)arg5;
- (void)enumerateDebugHierarchyObjects:(id)arg1 inGroupWithID:(id)arg2 options:(id)arg3 asDirectChildren:(BOOL)arg4 belowParent:(id)arg5;
@property(readonly, nonatomic) DebugHierarchyCrawlerOptions *options;
- (void)crawlEntryPointClasses;
- (void)crawlTopLevelGroups;
- (void)run;
- (id)initWithRequestContext:(id)arg1 knownObjectsMap:(id)arg2;

@end

