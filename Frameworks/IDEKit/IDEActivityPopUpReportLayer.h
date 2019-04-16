//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <QuartzCore/CALayer.h>

@class DVTObservingToken, IDEActivityActionButtonLayer, IDEActivityProgressIndicatorLayer, IDEActivityReport, IDEActivityScrollingTextLayer, NSMutableArray;

@interface IDEActivityPopUpReportLayer : CALayer
{
    IDEActivityProgressIndicatorLayer *_progressIndicatorLayer;
    IDEActivityScrollingTextLayer *_scrollingTextLayer;
    IDEActivityActionButtonLayer *_cancelButtonLayer;
    NSMutableArray *_stringSegments;
    BOOL _paused;
    DVTObservingToken *_kvoActivityReportTitleSegmentsToken;
    DVTObservingToken *_kvoActivityReportProgressToken;
    DVTObservingToken *_kvoActivityReportTitleToken;
    DVTObservingToken *_kvoActivityReportThrottleFactorToken;
    BOOL _isActiveWindowStyle;
    BOOL _makeSpaceForIndeterminateProgressIndicator;
    IDEActivityReport *_activityReport;
    double _spaceNeededForMultiActionIndicator;
}

+ (id)keyPathsForValuesAffectingIndeterminateReportInProgress;
+ (id)createActivityReportLayer;
+ (struct CGSize)defaultSizeForPopUpStyle;
@property(nonatomic) BOOL makeSpaceForIndeterminateProgressIndicator; // @synthesize makeSpaceForIndeterminateProgressIndicator=_makeSpaceForIndeterminateProgressIndicator;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
@property(nonatomic) BOOL isActiveWindowStyle; // @synthesize isActiveWindowStyle=_isActiveWindowStyle;
@property(retain, nonatomic) IDEActivityReport *activityReport; // @synthesize activityReport=_activityReport;
- (void).cxx_destruct;
- (double)spaceNeededForCancelButtonLayer;
- (BOOL)shouldShowCancelButtonLayer;
@property(readonly) BOOL indeterminateReportInProgress;
- (void)updateVisibilityForCancelButtonAndAdjustLayoutIfNeeded;
- (void)updateVisibilityForTextFieldAndAdjustLayoutIfNeeded;
- (BOOL)shouldHideProgress;
- (void)startObservingActivityReport;
- (void)stopObservingActivityReport;
- (void)updateScrollingTextFieldStringValue;
- (void)_updateStringSegments:(id)arg1;
- (id)_pausedAttributes;
- (id)defaultIdleActionString;
- (id)nonFailedBuildTextAttributes;
- (id)defaultIdleTitle;
- (id)defaultReportTitle;
- (id)defaultCompletionSummary;
- (void)sizeToFit;
- (struct CGPoint)imageLayerPosition;
- (void)updateConstraints;
- (id)description;
- (id)init;
- (void)tearDownLayer;

@end

