//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTObservingToken, IDEWorkspace;
@protocol IDEFunctionBarSimulatorWorkspaceExecutionReporterDelegate;

@interface IDEFunctionBarSimulatorWorkspaceExecutionReporter : NSObject
{
    IDEWorkspace *_workspace;
    long long _activeExecutionsCount;
    id <IDEFunctionBarSimulatorWorkspaceExecutionReporterDelegate> _delegate;
    DVTObservingToken *_launchSessionsObserverToken;
    DVTObservingToken *_launchSessionsStateObserverToken;
}

@property(retain) DVTObservingToken *launchSessionsStateObserverToken; // @synthesize launchSessionsStateObserverToken=_launchSessionsStateObserverToken;
@property(retain) DVTObservingToken *launchSessionsObserverToken; // @synthesize launchSessionsObserverToken=_launchSessionsObserverToken;
@property __weak id <IDEFunctionBarSimulatorWorkspaceExecutionReporterDelegate> delegate; // @synthesize delegate=_delegate;
@property long long activeExecutionsCount; // @synthesize activeExecutionsCount=_activeExecutionsCount;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_updateWithLaunchSession:(id)arg1;
- (BOOL)_isRunDestinationCompatibleWithFunctionBar:(id)arg1;
- (BOOL)_isLaunchSessionInteresting:(id)arg1;
- (void)_launchSessionsDidChange;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 delegate:(id)arg2;

@end
