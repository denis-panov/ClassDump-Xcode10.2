//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEWorkspaceSettings.h>

@class DVTObservingToken;

@interface IDEWorkspaceSharedSettings : IDEWorkspaceSettings
{
    DVTObservingToken *_workspaceLoadingObservingToken;
}

- (void).cxx_destruct;
- (void)setBuildSystemType:(int)arg1;
- (void)primitiveInvalidate;
- (void)_propagateBuildSystemSelectionForWorkspace:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (void)saveSettings;
@property BOOL autocreateContextsIfNeeded;
- (id)settingsOwnership;

@end

