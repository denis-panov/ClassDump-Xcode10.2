//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEContainerDelegate-Protocol.h>

@class IDEFileReference, IDEWorkspace;

@protocol IDEWorkspaceDelegate <IDEContainerDelegate>
- (void)_workspace:(IDEWorkspace *)arg1 failedToResolveContainerForProjectFile:(IDEFileReference *)arg2;

@optional
- (void)_workspace:(IDEWorkspace *)arg1 didChangeSimpleFilesFocusedTo:(BOOL)arg2;
- (void)_workspace:(IDEWorkspace *)arg1 didChangeFinishedLoadingTo:(BOOL)arg2;
@end

