//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class IDESelection, IDEWorkspaceTabController;

@protocol IDESelectionSource <NSObject>
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly, copy) IDESelection *outputSelection;
@end

