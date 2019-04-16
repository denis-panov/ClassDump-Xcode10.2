//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTKit/DVTComparisonScrollContentAreaDelegate-Protocol.h>
#import <DVTKit/DVTMarkedScrollerDelegate-Protocol.h>
#import <DVTKit/DVTSourceTextScrollViewDelegate-Protocol.h>
#import <DVTKit/NSScrollerImpPairDelegate-Protocol.h>

@class DVTBorderedView, DVTComparisonScroller, DVTComparisonSplitView, NSArray, NSIndexSet, NSMutableDictionary, NSScrollView, NSScrollerImpPair, NSString, NSView;
@protocol DVTSourceCodeComparisonTextEditorView, DVTSourceCodeComparisonTextView;

@interface DVTComparisonScrollCoordinator : NSObject <NSScrollerImpPairDelegate, DVTSourceTextScrollViewDelegate, DVTComparisonScrollContentAreaDelegate, DVTMarkedScrollerDelegate>
{
    NSScrollView *_leftScrollView;
    struct CGRect _leftContentViewPreviousBounds;
    NSScrollView *_rightScrollView;
    struct CGRect _rightContentViewPreviousBounds;
    DVTComparisonScroller *_globalScroller;
    NSScrollerImpPair *_scrollerImpPair;
    DVTBorderedView *_contentAreaView;
    NSArray *_diffDescriptors;
    NSIndexSet *_modifiedDiffDescriptorIndexes;
    id _leftContentViewBoundsObserver;
    id _rightContentViewBoundsObserver;
    id _leftContentViewFrameObserver;
    id _rightContentViewFrameObserver;
    id _fontAndColorThemeObserver;
    BOOL _recursing;
    BOOL _computingTotalScrollSize;
    BOOL _isRevertingState;
    BOOL _shouldSyncRevertedState;
    double _totalScrollSize;
    long long _lastCurrentIndex;
    BOOL _lastInReverse;
    NSMutableDictionary *_cachedDiffRatios;
    DVTComparisonSplitView *_comparisonSplitView;
}

+ (id)logAspect;
+ (void)initialize;
@property __weak DVTComparisonSplitView *comparisonSplitView; // @synthesize comparisonSplitView=_comparisonSplitView;
@property(retain) DVTBorderedView *contentAreaView; // @synthesize contentAreaView=_contentAreaView;
@property(retain) NSIndexSet *modifiedDiffDescriptorIndexes; // @synthesize modifiedDiffDescriptorIndexes=_modifiedDiffDescriptorIndexes;
@property(copy) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
@property(retain, nonatomic) DVTComparisonScroller *globalScroller; // @synthesize globalScroller=_globalScroller;
@property(retain, nonatomic) NSScrollView *rightScrollView; // @synthesize rightScrollView=_rightScrollView;
@property(retain, nonatomic) NSScrollView *leftScrollView; // @synthesize leftScrollView=_leftScrollView;
- (void).cxx_destruct;
- (void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;
- (void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(struct CGRect)arg2;
- (struct CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(struct CGPoint)arg2 toScrollerImp:(id)arg3;
- (struct CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1;
- (BOOL)inLiveResizeForScrollerImpPair:(id)arg1;
- (struct CGRect)contentAreaRectForScrollerImpPair:(id)arg1;
- (void)contentAreaWindowOrderedOut;
- (void)contentAreaWindowOrderedIn;
- (void)contentAreaMovedToNewWindow;
- (void)contentAreaRemovedFromSuperview;
- (void)contentAreaDidHide;
- (void)mouseExitedContentArea;
- (void)mouseMovedInContentArea;
- (void)mouseEnteredContentArea;
- (void)contentAreaWillDraw;
- (void)updateDiffMarks;
- (void)_doUpdateDiffMarks;
- (void)notifyScrollPercentage:(double)arg1;
- (void)notifyScrollDifference:(double)arg1;
- (BOOL)editor:(id)arg1 cannotScrollDifference:(double)arg2;
- (id)currentDiffForDirection:(double)arg1 halfwayPoint:(double)arg2 ratio:(struct _DVTComparisonDiffDescriptorRatio *)arg3;
- (struct _DVTComparisonDiffDescriptorRatio)ratioForDiffDescriptor:(id)arg1;
- (void)synchronizeScrollViewsFromSide:(int)arg1;
- (struct _DVTSourceCodeComparisonTextEditorScrollPosition)positionForPosition:(struct _DVTSourceCodeComparisonTextEditorScrollPosition)arg1 fromSide:(int)arg2;
- (void)computeTotalScrollSize;
- (int)largerSideByNumberOfLinesAndWidth;
- (int)largerSideByNumberOfLines;
- (double)getTargetPositionFromSide:(long long)arg1;
- (double)getTargetPosition;
- (void)notifyScrollAction:(id)arg1;
- (void)rescindObservations;
- (void)setupObservations;
- (void)_doSetupObservations;
- (BOOL)didRevertState;
- (void)willStartStateRestoration;
- (id)scrollView:(id)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (void)scrollViewDidSetFrameSize:(id)arg1;
- (void)scrollViewDidEndLiveResize:(id)arg1;
- (void)scrollViewWillStartLiveResize:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldHandleScrollWheelEvent:(id)arg2;
- (void)scrollWheel:(id)arg1;
@property(readonly) NSView<DVTSourceCodeComparisonTextView> *rightTextView;
@property(readonly) NSView<DVTSourceCodeComparisonTextView> *leftTextView;
@property(readonly) NSView<DVTSourceCodeComparisonTextEditorView> *rightEditorView;
@property(readonly) NSView<DVTSourceCodeComparisonTextEditorView> *leftEditorView;
- (void)updateScrollerKnobStyle;
- (void)updateBoundSelectedIndex;
- (void)didClickMarkForLine:(long long)arg1;
- (void)updateBoundContentArray;
- (id)dvt_extraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

