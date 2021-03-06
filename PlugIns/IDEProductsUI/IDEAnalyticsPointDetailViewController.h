//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class DVTAnalyticsLogRecord, DVTAnalyticsPointAbstractClass, DVTBorderedView, DVTGradientImageButton, DVTPopUpButtonPagerViewController, DVTUserDefaultsLeastRecentlyUsedCache, IDEAnalyticsPointLogViewController, IDEAnalyticsPointOverviewViewController, IDEAnalyticsPointsViewController, NSView;

@interface IDEAnalyticsPointDetailViewController : IDEViewController
{
    BOOL _isSettingPagerAnalyticsLogIdentiers;
    BOOL _pagerIsSettingAnalyticsLogIdentifier;
    BOOL _restoringSelectedAnalyticsLog;
    DVTAnalyticsPointAbstractClass *_analyticsPoint;
    DVTAnalyticsLogRecord *_selectedAnalyticsLogRecord;
    IDEAnalyticsPointOverviewViewController *_overviewViewController;
    IDEAnalyticsPointLogViewController *_pointLogViewController;
    IDEAnalyticsPointsViewController *_analyticsPointsViewController;
    DVTPopUpButtonPagerViewController *_popUpButtonPagerViewController;
    DVTBorderedView *_overviewBorderedView;
    DVTBorderedView *_logBorderedView;
    DVTBorderedView *_controlBarBorderedView;
    NSView *_popUpButtonPagerView;
    DVTGradientImageButton *_libraryFrameCompressionButton;
    DVTGradientImageButton *_lowSampleCountCompressionButton;
    DVTUserDefaultsLeastRecentlyUsedCache *_analyticsLogSelectedCache;
}

+ (id)keyPathsForValuesAffectingShouldShowAnalyticsLogPagingButtons;
@property(nonatomic, getter=isRestoringSelectedAnalyticsLog) BOOL restoringSelectedAnalyticsLog; // @synthesize restoringSelectedAnalyticsLog=_restoringSelectedAnalyticsLog;
@property(retain) DVTUserDefaultsLeastRecentlyUsedCache *analyticsLogSelectedCache; // @synthesize analyticsLogSelectedCache=_analyticsLogSelectedCache;
@property(nonatomic) BOOL pagerIsSettingAnalyticsLogIdentifier; // @synthesize pagerIsSettingAnalyticsLogIdentifier=_pagerIsSettingAnalyticsLogIdentifier;
@property(nonatomic) BOOL isSettingPagerAnalyticsLogIdentiers; // @synthesize isSettingPagerAnalyticsLogIdentiers=_isSettingPagerAnalyticsLogIdentiers;
@property __weak DVTGradientImageButton *lowSampleCountCompressionButton; // @synthesize lowSampleCountCompressionButton=_lowSampleCountCompressionButton;
@property __weak DVTGradientImageButton *libraryFrameCompressionButton; // @synthesize libraryFrameCompressionButton=_libraryFrameCompressionButton;
@property __weak NSView *popUpButtonPagerView; // @synthesize popUpButtonPagerView=_popUpButtonPagerView;
@property __weak DVTBorderedView *controlBarBorderedView; // @synthesize controlBarBorderedView=_controlBarBorderedView;
@property __weak DVTBorderedView *logBorderedView; // @synthesize logBorderedView=_logBorderedView;
@property __weak DVTBorderedView *overviewBorderedView; // @synthesize overviewBorderedView=_overviewBorderedView;
@property(retain, nonatomic) DVTPopUpButtonPagerViewController *popUpButtonPagerViewController; // @synthesize popUpButtonPagerViewController=_popUpButtonPagerViewController;
@property(nonatomic) __weak IDEAnalyticsPointsViewController *analyticsPointsViewController; // @synthesize analyticsPointsViewController=_analyticsPointsViewController;
@property(retain) IDEAnalyticsPointLogViewController *pointLogViewController; // @synthesize pointLogViewController=_pointLogViewController;
@property(retain) IDEAnalyticsPointOverviewViewController *overviewViewController; // @synthesize overviewViewController=_overviewViewController;
- (void).cxx_destruct;
- (void)updateCompressLowSampleCountFramesButtonState;
- (void)compressLowSampleCountFrames:(id)arg1;
- (void)updateCompressLibraryFramesButtonState;
- (void)compressLibraryFrames:(id)arg1;
- (BOOL)shouldShowAnalyticsLogPagingButtons;
- (id)_pageStringForAnalyticsLogIndex:(unsigned long long)arg1 analyticsLogCount:(unsigned long long)arg2;
- (void)_restoreSelectedAnalyticsLogFromAnalyticsPoint:(id)arg1;
- (void)_saveSelectedAnalyticsLog;
@property(retain, nonatomic) DVTAnalyticsLogRecord *selectedAnalyticsLogRecord; // @synthesize selectedAnalyticsLogRecord=_selectedAnalyticsLogRecord;
@property(retain) DVTAnalyticsPointAbstractClass *analyticsPoint; // @synthesize analyticsPoint=_analyticsPoint;
- (void)setAnalyticsLogSelectorToAnalyticsLogWithIdentifier:(id)arg1;
- (void)setUpCompressionButtons;
- (void)loadView;
- (void)setUpPopUpButtonPagerView;
- (void)primitiveInvalidate;

@end

