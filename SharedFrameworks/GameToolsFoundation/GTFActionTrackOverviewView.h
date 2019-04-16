//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GameToolsFoundation/GTFActionStackView.h>

@class GTFActionNodeTrackView, GTFActionTimelineControlView, NSMenu;
@protocol GTFActionTrackOverviewDelegate;

@interface GTFActionTrackOverviewView : GTFActionStackView
{
    GTFActionTimelineControlView *_timelineControl;
    GTFActionNodeTrackView *_mouseInteractionView;
    NSMenu *_rightClickContextMenu;
    float _timeScale;
    double _trackEndTime;
    double _previewTime;
    BOOL _mouseDown;
    BOOL _lastViewWasCollapsed;
    BOOL _needCursorReset;
    id <GTFActionTrackOverviewDelegate> _delegate;
}

@property(nonatomic) __weak id <GTFActionTrackOverviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetCursorRects;
- (void)setResetCursorRects;
- (void)redrawAllTrackViews;
- (void)rightMouseDown:(id)arg1;
- (void)showLoopPopoverForSelectedActions:(id)arg1;
- (void)createLoopFromSelectedActions:(id)arg1;
- (void)convertToReference:(id)arg1;
- (void)reverse:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)removeAllNodeTracks;
- (void)removeNodeTrackFromStack:(id)arg1;
- (void)redrawNodeTrackView:(id)arg1 resetCursorRects:(BOOL)arg2;
- (BOOL)nodeTrackViewFinalInOverview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (BOOL)isOpaque;
- (void)setPlayForTimelineControl:(double)arg1;
- (void)pauseTimelineControl;
- (void)updatePreviewTime:(double)arg1;
- (void)updateTimeScaleTo:(float)arg1;
- (void)updateSize;
- (void)addNodeTrackToEndOfStack:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double trackEndTime;

@end

