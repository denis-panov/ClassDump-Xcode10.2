//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

#import <DTGraphKit/DTObjectGridGraphDataSource-Protocol.h>
#import <DTGraphKit/DTObjectGridGraphDelegate-Protocol.h>

@class DTObjectGridGraph, DVT_VMUDirectedGraph, DVT_VMUProcessObjectGraph, NSLayoutConstraint, NSString;
@protocol DTObjectGridGraphDelegate;

@interface DTVMUObjectGridGraphViewController : NSViewController <DTObjectGridGraphDataSource, DTObjectGridGraphDelegate>
{
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    DVT_VMUDirectedGraph *_invertedDisplayGraph;
    DVT_VMUDirectedGraph *_forwardDisplayGraph;
    DVT_VMUProcessObjectGraph *_sourceGraph;
    unsigned int _rootInspectedNode;
    BOOL _restrictToPivot;
    id <DTObjectGridGraphDelegate> _delegate;
    struct CGSize _minimumViewportSize;
}

@property(nonatomic) __weak id <DTObjectGridGraphDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize minimumViewportSize; // @synthesize minimumViewportSize=_minimumViewportSize;
@property(readonly, nonatomic) DVT_VMUProcessObjectGraph *graph; // @synthesize graph=_sourceGraph;
- (void).cxx_destruct;
- (id)objectGridGraph:(id)arg1 contextMenuForNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 didDoubleClickReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 didDoubleClickNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 didCmdClickReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 didClickReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 didCmdClickNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 didClickNode:(id)arg2;
- (void)objectGridGraph:(id)arg1 willDisplayReference:(id)arg2;
- (void)objectGridGraph:(id)arg1 willDisplayNode:(id)arg2;
- (unsigned int)enclosingGroupNodeForNode:(unsigned int)arg1;
- (void)enumerateMemberNodesOfGroupNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)memberNodeCountForGroupNode:(unsigned int)arg1;
- (void)enumerateIncomingReferencesForNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateOutgoingReferencesForNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) DTObjectGridGraph *gridGraphView;
- (void)viewDidLoad;
- (void)loadView;
- (void)resetZoomLevel;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)displayImmediateReferencesForNode:(unsigned int)arg1 inGraph:(id)arg2;
- (void)displayLeakHierarchyForNode:(unsigned int)arg1 inGraph:(id)arg2;
- (void)displayRootPathsForNode:(unsigned int)arg1 inGraph:(id)arg2 rootPathsGraph:(id)arg3 initialGenerations:(BOOL)arg4;
- (void)displayRootPathsForNode:(unsigned int)arg1 inGraph:(id)arg2 initialGenerations:(BOOL)arg3;
- (void)displayRootPathsForNode:(unsigned int)arg1 inGraph:(id)arg2;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id)arg2 initialGenerations:(BOOL)arg3;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id)arg2;
- (unsigned int)_setupDataSourcesForPivot:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
