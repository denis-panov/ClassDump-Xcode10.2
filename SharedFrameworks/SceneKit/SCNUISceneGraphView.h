//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <SceneKit/NSOutlineViewDataSource-Protocol.h>
#import <SceneKit/NSOutlineViewDelegate-Protocol.h>

@class NSOutlineView, NSString;

__attribute__((visibility("hidden")))
@interface SCNUISceneGraphView : NSView <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSView *_mainView;
    NSOutlineView *_outlineView;
    id _typeInspector;
    void *_rootNode;
}

- (void).cxx_destruct;
- (void)selectionDidChange:(id)arg1;
- (void)setRootNode:(void *)arg1;
- (void)del:(id)arg1;
- (void)add:(id)arg1;
- (id)selectedNode;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)updateSceneGraph;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

