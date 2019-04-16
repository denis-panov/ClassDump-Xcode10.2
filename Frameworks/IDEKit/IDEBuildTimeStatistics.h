//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTNotificationToken, NSMapTable, NSMutableSet;

@interface IDEBuildTimeStatistics : NSObject
{
    DVTNotificationToken *_buildOperationWillStartNotificationObservingToken;
    NSMapTable *_currentBuildOperationObserversByWorkspace;
    NSMapTable *_workspaceLifeTimeObserversByWorkspace;
    NSMutableSet *_workspacesInWhichToSuppressSlowBuildActivityReportIcon;
    NSMapTable *_workspaceToBuildOperationCallbacks;
    NSMutableSet *_suppressBuildOperationCallbacksForWorkspaces;
}

+ (BOOL)enableStatisticsUI;
+ (void)initialize;
- (void).cxx_destruct;
- (void)reportSlowBuildInWorkspace:(id)arg1 suppressBuildOperationCallbacksUntilNextBuild:(BOOL)arg2;
- (void)_reportSlowBuild;
- (BOOL)isBuildOperationValidForStatisticsGathering:(id)arg1;
- (void)_observeBuildOperations;
- (void)_suppressBuildOperationCallbacksUntilNextBuildInWorkspace:(id)arg1;
- (void)observeBuildOperationsInWorkspace:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end
