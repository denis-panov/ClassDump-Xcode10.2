//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDESearchWindowController.h>

@class IDEWorkspace, IDEWorkspaceTabController;

@interface IDEAbstractOpenQuicklyWindowController : IDESearchWindowController
{
    BOOL _openRequestIsRunning;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (void)openSelectedContent;
- (BOOL)alwaysTargetsOriginatingEditor;
- (id)locationToOpen;
- (void)inferContextBeforeShowing;
- (void)windowWillClose:(id)arg1;
- (void)showWindow;

@end
