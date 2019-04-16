//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class IDECompletionDestinationManager, IDENavigableItem, NSArray;

@protocol IDECompletionDestinationDelegate <NSObject>
- (NSArray *)targetWorkspacesForDestinationManager:(IDECompletionDestinationManager *)arg1;
- (void)destinationManagerGroupDidChange:(IDECompletionDestinationManager *)arg1;
- (void)destinationManagerWorkspaceDidChange:(IDECompletionDestinationManager *)arg1;
- (BOOL)destinationManager:(IDECompletionDestinationManager *)arg1 shouldAddItemToMenu:(IDENavigableItem *)arg2;
@end

