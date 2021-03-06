//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBDocument, IBViewEditorCanvasFrameController, NSArray, NSNumber, NSValue, NSView;

@interface IBViewTracker : NSObject
{
    CDUnion_31865a80 _initialKnob;
    BOOL _trackingIsFlippedHorizontally;
    BOOL _trackingIsFlippedVertically;
    BOOL _snapsToGuides;
    BOOL _showsGuides;
    BOOL _showsTrackingKnob;
    CDUnknownBlockType _willTrackHandler;
    CDUnknownBlockType _didTrackHandler;
    NSArray *_layoutManagers;
    NSView *_trackedView;
    NSObject *_documentObject;
    id _measurementTarget;
    IBViewEditorCanvasFrameController *_frameController;
    NSNumber *_forceBoundsIndicatorValue;
    NSValue *_pinnedKnob;
}

+ (void)setAppliesAutoResizingRulesWhileResizing:(BOOL)arg1;
+ (BOOL)appliesAutoResizingRulesWhileResizing;
@property(copy) NSValue *pinnedKnob; // @synthesize pinnedKnob=_pinnedKnob;
@property(copy) NSNumber *forceBoundsIndicatorValue; // @synthesize forceBoundsIndicatorValue=_forceBoundsIndicatorValue;
@property BOOL showsTrackingKnob; // @synthesize showsTrackingKnob=_showsTrackingKnob;
@property BOOL showsGuides; // @synthesize showsGuides=_showsGuides;
@property BOOL snapsToGuides; // @synthesize snapsToGuides=_snapsToGuides;
@property(readonly) IBViewEditorCanvasFrameController *frameController; // @synthesize frameController=_frameController;
@property(readonly) id measurementTarget; // @synthesize measurementTarget=_measurementTarget;
@property(readonly) NSObject *documentObject; // @synthesize documentObject=_documentObject;
@property(readonly) NSView *trackedView; // @synthesize trackedView=_trackedView;
@property(copy) NSArray *layoutManagers; // @synthesize layoutManagers=_layoutManagers;
@property(copy) CDUnknownBlockType didTrackHandler; // @synthesize didTrackHandler=_didTrackHandler;
@property(copy) CDUnknownBlockType willTrackHandler; // @synthesize willTrackHandler=_willTrackHandler;
- (void).cxx_destruct;
- (void)trackWithEvent:(id)arg1;
- (void)clearGuides;
- (void)displayGuides;
- (id)layoutFrameAfterApplyingLayoutGuides:(struct CGRect)arg1 withEvent:(id)arg2;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2 isFinalFrame:(BOOL)arg3;
- (struct CGRect)snapToGuidedLayoutFrame:(struct CGRect)arg1 originalLayoutFrame:(struct CGRect)arg2;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviews;
- (BOOL)shouldAutoResizeSubviewsGivenEvent:(id)arg1;
- (BOOL)shouldApplyAutoResizingRulesWhileResizing;
- (void)pushTrackingIndicators;
- (CDUnion_31865a80)effectiveKnobInSpaceOfView:(id)arg1;
- (CDUnion_31865a80)initialKnobInSpaceOfView:(id)arg1;
- (id)canvasView;
- (id)editorCanvasFrame;
- (id)overlayDrawingHandler;
- (id)overlayView;
@property(readonly) IBDocument *document;
- (id)initWithTrackedView:(id)arg1 documentObject:(id)arg2 measurementTarget:(id)arg3 frameController:(id)arg4 knob:(CDUnion_31865a80)arg5;

@end

