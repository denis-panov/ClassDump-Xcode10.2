//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTReplacementViewDelegate-Protocol.h>
#import <XCSUI/DVTSplitViewDelegate-Protocol.h>

@class DVTBorderedView, DVTEmptyContentPlaceholder, DVTSplitView, IDETestReportViewController, NSError, NSString, NSURL, XCSIntegration, XCSUIProgressReplacementView;

@interface XCSUIIntegrationTestsViewController : IDEViewController <DVTSplitViewDelegate, DVTReplacementViewDelegate>
{
    XCSIntegration *_integration;
    NSError *_error;
    NSURL *_documentURL;
    CDUnknownBlockType _selectionChangedCallback;
    XCSUIProgressReplacementView *_detailReplacementView;
    DVTBorderedView *_borderedView;
    DVTSplitView *_splitView;
    DVTEmptyContentPlaceholder *_errorPlaceholder;
}

@property __weak DVTEmptyContentPlaceholder *errorPlaceholder; // @synthesize errorPlaceholder=_errorPlaceholder;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak XCSUIProgressReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property(copy, nonatomic) CDUnknownBlockType selectionChangedCallback; // @synthesize selectionChangedCallback=_selectionChangedCallback;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)installTestReport;
@property(readonly, nonatomic) IDETestReportViewController *testReportViewController;
- (void)_configureTestReport;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)_cleanUpOldDefaults;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

