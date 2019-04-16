//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

#import <GPUDebuggerKit/DTTimelineGraphDelegate-Protocol.h>

@class GPUTimelineGraph, GPUTimelineGraphOverlayView, GPUTimelineRulerGraph, NSLayoutConstraint, NSPanel, NSString;
@protocol GPUTimelineGraphDelegate;

@interface GPUTimelineGraphViewController : NSViewController <DTTimelineGraphDelegate>
{
    unsigned long long _itemIndexUnderMouse;
    BOOL _showMarkers;
    GPUTimelineGraph *_graph;
    id <GPUTimelineGraphDelegate> _delegate;
    GPUTimelineRulerGraph *_rulerGraph;
    GPUTimelineGraphOverlayView *_overlayView;
    NSPanel *_tooltipPanel;
    NSLayoutConstraint *_rulerHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *rulerHeight; // @synthesize rulerHeight=_rulerHeight;
@property(nonatomic) __weak NSPanel *tooltipPanel; // @synthesize tooltipPanel=_tooltipPanel;
@property(nonatomic) __weak GPUTimelineGraphOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak GPUTimelineRulerGraph *rulerGraph; // @synthesize rulerGraph=_rulerGraph;
@property(nonatomic) BOOL showMarkers; // @synthesize showMarkers=_showMarkers;
@property(nonatomic) __weak id <GPUTimelineGraphDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GPUTimelineGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)moveSelectionToPrevItem;
- (void)moveSelectionToNextItem;
- (void)_moveSelectionToItem:(unsigned long long)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (id)_viewForThumbnail:(unsigned long long)arg1 point:(struct CGPoint)arg2;
- (id)_viewForTooltip:(unsigned long long)arg1 point:(struct CGPoint)arg2;
- (void)inputHandlerForGraph:(id)arg1 rightMouseClicked:(struct CGPoint)arg2;
- (void)inputHandlerForGraph:(id)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(id)arg4;
- (void)inputHandlerForGraph:(id)arg1 iconClickedOnPlane:(id)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)inputHandlerForGraph:(id)arg1 glyphClickedAt:(unsigned long long)arg2 onPlane:(id)arg3 relativeRect:(struct CGRect)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2 withEventNanosecondOffset:(long long)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)_clearSelection;
- (void)_selectIndex:(unsigned long long)arg1;
- (void)setupColors;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

