//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

#import <GPURenderTargetEditor/GPUDependencySubEditorDelegate-Protocol.h>
#import <GPURenderTargetEditor/GPUGVRenderer-Protocol.h>
#import <GPURenderTargetEditor/NSScrollViewDelegate-Protocol.h>
#import <GPURenderTargetEditor/SKViewDelegate-Protocol.h>

@class DVTBorderedView, GPUDependencyMetalView, GPUGVGraph, GPUTextureClipView, GPUTraceSKScene, GPUTraceSKView, NSMutableDictionary, NSProgressIndicator, NSScrollView, NSSegmentedControl, NSString, NSTextField, NSView, SKCameraNode, SKNode;
@protocol SKSelectable;

__attribute__((visibility("hidden")))
@interface GPUTraceDependencySubEditor : GPUTraceSubEditor <NSScrollViewDelegate, GPUDependencySubEditorDelegate, SKViewDelegate, GPUGVRenderer>
{
    SKNode *_renderRoot;
    GPUTraceSKScene *_scene;
    SKCameraNode *_camera;
    double _zoomLevel;
    struct CGRect _bounds;
    BOOL _edgesHidden;
    GPUGVGraph *_graph;
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_outlineItemIdToNode;
    NSMutableDictionary *_edges;
    unsigned int _edgeType;
    struct CGPoint _initialPanPoint;
    id <SKSelectable> _selectedNode;
    BOOL _finishMagnification;
    double _previousMagnification;
    NSScrollView *_scrollView;
    GPUTextureClipView *_clipView;
    GPUDependencyMetalView *_metalView;
    GPUTraceSKView *skView;
    NSTextField *_unavailableLabel;
    NSSegmentedControl *_viewSegmentedControl;
    NSProgressIndicator *_loadingIndicator;
    NSView *_overlayView;
    DVTBorderedView *_toolbar;
}

@property __weak DVTBorderedView *toolbar; // @synthesize toolbar=_toolbar;
@property __weak NSView *overlayView; // @synthesize overlayView=_overlayView;
@property __weak NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak NSSegmentedControl *viewSegmentedControl; // @synthesize viewSegmentedControl=_viewSegmentedControl;
@property(nonatomic) __weak NSTextField *unavailableLabel; // @synthesize unavailableLabel=_unavailableLabel;
@property(nonatomic) __weak GPUTraceSKView *skView; // @synthesize skView;
- (void).cxx_destruct;
- (void)didEndScrollInScrollView:(id)arg1;
- (void)didScrollInScrollView:(id)arg1;
- (void)didBeginScrollInScrollView:(id)arg1;
- (void)endMagnifying;
- (void)didMagnify;
- (void)beginMagnifying;
- (void)synchroniseScroll;
- (void)synchroniseCamera;
- (void)scrollWheel:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)_moveCameraByTranslation:(struct CGPoint)arg1 initialPanPoint:(struct CGPoint)arg2;
- (void)setCameraPosition:(struct CGPoint)arg1;
- (struct CGPoint)cameraPosition;
- (void)zoomBy:(double)arg1;
- (void)handleMagnificationGesture:(id)arg1;
- (void)updateMetal;
- (BOOL)view:(id)arg1 shouldRenderAtTime:(double)arg2;
- (void)magnifyAtPoint:(struct CGPoint)arg1 byAmount:(double)arg2 animate:(BOOL)arg3;
- (void)_updateMagnification:(double)arg1;
- (void)onZoom:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setRepresentedObject:(id)arg1 userInfo:(id)arg2;
- (void)focusOnRepresentedObject;
- (void)selectNode:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)drawNode:(id)arg1;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (void)redrawEdges;
- (id)documentLocationsForItems:(id)arg1;
- (void)setupGestures;
- (void)setupSpriteKit;
- (void)viewDidLayout;
- (void)_calculateScrollMagnification;
- (void)_setupGraph;
- (void)_setIndicatorProgress:(double)arg1;
- (void)_onGraphReady:(id)arg1;
- (void)_requestThumbnails;
@property(readonly) struct CGSize separation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (BOOL)_setupLoadingMessage;
- (void)_setupScrolling;
- (void)_setupView;
- (void)_makeSegmentedControlImagesTemplates:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) int direction;
@property(readonly) BOOL drawEdgesFirst;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

