//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDENavigationHUDTabLayoutLayer.h>

@class IDEWorkspaceTabControllerLayoutTreeNode;

@interface IDENavigationHUDTabLayoutTreeNodeLayer : IDENavigationHUDTabLayoutLayer
{
    IDEWorkspaceTabControllerLayoutTreeNode *_representedLayoutTreeNode;
}

@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *representedLayoutTreeNode; // @synthesize representedLayoutTreeNode=_representedLayoutTreeNode;
- (void).cxx_destruct;
- (id)representativeSelection;
- (id)initWithRepresentedLayoutTreeNode:(id)arg1 inWorkspaceTabLayer:(id)arg2 inWorkspaceWindowController:(id)arg3;

@end

