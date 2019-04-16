//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTSourceControlWorkspaceBlueprint, IDEScheme, IDEWorkspace, NSMapTable, NSString, NSWindow, XCSService;

@interface XCSUICreateBotSegueToCommitSheetManager : NSObject
{
    BOOL _shouldIntegrateImmediately;
    IDEWorkspace *_workspace;
    NSWindow *_workspaceWindow;
    XCSService *_service;
    DVTSourceControlWorkspaceBlueprint *_scmWorkspaceBlueprint;
    NSMapTable *_workingCopiesToRemoteRepositories;
    NSString *_botGUID;
    IDEScheme *_scheme;
}

+ (void)doIntegrateImmediatelyForServer:(id)arg1 andBotGUID:(id)arg2;
+ (void)showWillNeedToCommitAlertForWindow:(id)arg1 schemeWithName:(id)arg2 error:(id)arg3;
+ (void)showWillNeedToCommitAlertForWindow:(id)arg1 schemeWithName:(id)arg2;
@property(nonatomic) BOOL shouldIntegrateImmediately; // @synthesize shouldIntegrateImmediately=_shouldIntegrateImmediately;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *botGUID; // @synthesize botGUID=_botGUID;
@property(retain, nonatomic) NSMapTable *workingCopiesToRemoteRepositories; // @synthesize workingCopiesToRemoteRepositories=_workingCopiesToRemoteRepositories;
@property(retain, nonatomic) DVTSourceControlWorkspaceBlueprint *scmWorkspaceBlueprint; // @synthesize scmWorkspaceBlueprint=_scmWorkspaceBlueprint;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_prepareAndRunCommitSheetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareAndRunCommitSheet;
- (id)init;
- (id)initWithBotDefinitionContext:(id)arg1 window:(id)arg2;
- (id)initWithCreateBotAssistantContext:(id)arg1;

@end

