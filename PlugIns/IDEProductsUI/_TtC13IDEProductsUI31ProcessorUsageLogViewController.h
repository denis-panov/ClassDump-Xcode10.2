//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, IDEAnalyticsPointLogViewController, NSOutlineView, NSTextField, _TtC12DVTAnalytics17ProcessorUsageLog, _TtC12DVTAnalytics19ProcessorUsagePoint, _TtC13IDEProductsUI22SynchronizedScrollView;

@interface _TtC13IDEProductsUI31ProcessorUsageLogViewController : IDEViewController
{
    // Error parsing type: , name: processorUsagePoint
    // Error parsing type: , name: analyticsPointLogViewController
    // Error parsing type: , name: logAspect
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: floatingColumnsScrollView
    // Error parsing type: , name: floatingColumnsOutlineView
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: emptyContentTitle
    // Error parsing type: , name: emptyContentSubtitle
    // Error parsing type: , name: jumpToArrowWidth
    // Error parsing type: , name: restoringOutlineViewCollapsedItems
    // Error parsing type: , name: collapsedItemStateRestorationCache
    // Error parsing type: , name: scrollPositionStateRestorationCache
    // Error parsing type: , name: mouseInsideTreeNodeStackFrame
    // Error parsing type: , name: processorUsageLog
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) _TtC12DVTAnalytics17ProcessorUsageLog *processorUsageLog; // @synthesize processorUsageLog;
- (void)showAnalyticsLogInFinder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidLoad;
@property(nonatomic) __weak NSTextField *emptyContentSubtitle; // @synthesize emptyContentSubtitle;
@property(nonatomic) __weak NSTextField *emptyContentTitle; // @synthesize emptyContentTitle;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic) __weak NSOutlineView *floatingColumnsOutlineView; // @synthesize floatingColumnsOutlineView;
@property(nonatomic) __weak _TtC13IDEProductsUI22SynchronizedScrollView *floatingColumnsScrollView; // @synthesize floatingColumnsScrollView;
@property(nonatomic) __weak _TtC13IDEProductsUI22SynchronizedScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak NSOutlineView *outlineView; // @synthesize outlineView;
@property(nonatomic) __weak IDEAnalyticsPointLogViewController *analyticsPointLogViewController; // @synthesize analyticsPointLogViewController;
@property(nonatomic, retain) _TtC12DVTAnalytics19ProcessorUsagePoint *processorUsagePoint; // @synthesize processorUsagePoint;

@end

