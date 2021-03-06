//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class DVTReplacementView, NSArray, NSScrollView, NSURL, XCSIntegration, XCSUIIntegrationSummaryChangesViewController, XCSUIIntegrationSummaryDevicesViewController, XCSUIIntegrationSummaryIssuesOutlineViewController, XCSUIIntegrationSummaryProductsViewController, XCSUIIntegrationSummaryStatusViewController, XCSUIIntegrationSummaryView_Stack;

@interface XCSUIIntegrationSummaryViewController : DVTViewController <XCSUIDataSourceSnapshotsObserver>
{
    XCSUIIntegrationSummaryView_Stack *_containerView;
    XCSUIIntegrationSummaryStatusViewController *_statusViewController;
    XCSUIIntegrationSummaryChangesViewController *_changesViewController;
    XCSUIIntegrationSummaryProductsViewController *_productsViewController;
    XCSUIIntegrationSummaryDevicesViewController *_devicesViewController;
    XCSUIIntegrationSummaryIssuesOutlineViewController *_issuesViewController;
    XCSIntegration *_integration;
    NSURL *_documentURL;
    NSArray *_selectedDocumentLocations;
    NSScrollView *_scrollView;
    DVTReplacementView *_progressReplacementView;
}

@property __weak DVTReplacementView *progressReplacementView; // @synthesize progressReplacementView=_progressReplacementView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *selectedDocumentLocations; // @synthesize selectedDocumentLocations=_selectedDocumentLocations;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 integrationStepChanged:(id)arg2 serviceSnapshot:(id)arg3 botSnapshot:(id)arg4 integrationSnapshot:(id)arg5;
- (void)sendReportDidLoadNotification;
- (void)configureIssuesControllerCallbacks;
- (void)configureIssuesController:(id)arg1;
- (void)_updateIssues;
- (id)inflightViewController;
- (void)addViewControllers;
- (void)resizeStackHeight;
- (void)addViewToStack:(id)arg1 underneathView:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

@end

