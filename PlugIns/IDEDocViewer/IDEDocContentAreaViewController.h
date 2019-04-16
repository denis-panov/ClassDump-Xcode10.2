//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

#import <IDEDocViewer/DVTBasicFindBarFindable-Protocol.h>
#import <IDEDocViewer/DVTFindBarHostable-Protocol.h>
#import <IDEDocViewer/DVTReplacementViewDelegate-Protocol.h>
#import <IDEDocViewer/DVTScopeBarHost-Protocol.h>
#import <IDEDocViewer/IDEDocNavigatorAreaDelegate-Protocol.h>
#import <IDEDocViewer/NSSplitViewDelegate-Protocol.h>

@class DVTBasicFindBar, DVTChoice, DVTObservingToken, DVTReplacementView, DVTScopeBarController, DVTScopeBarsManager, DVTSplitView, DVTSplitViewItem, IDEDocNavigatorArea, IDEDocWebViewContentViewController, NSScrollView, NSString, NSView, WebView, _TtC6DVTKit23DVTExplorableIdentifier;

@interface IDEDocContentAreaViewController : DVTViewController <NSSplitViewDelegate, DVTFindBarHostable, DVTScopeBarHost, DVTReplacementViewDelegate, IDEDocNavigatorAreaDelegate, DVTBasicFindBarFindable>
{
    DVTObservingToken *_selectedNodeWatcher;
    DVTObservingToken *_contentSearchFieldStringWatcher;
    NSView *_findBarView;
    DVTScopeBarsManager *_scopeBarsMgr;
    DVTBasicFindBar *_findBar;
    NSString *_findString;
    BOOL _findCaseSensitive;
    DVTScopeBarController *_findBarScopeBarController;
    WebView *_tempWebView;
    DVTChoice *_detailsChoice;
    BOOL _chooserViewIsSettingChoices;
    NSString *_UUID;
    DVTReplacementView *_contentReplacementView;
    DVTSplitView *_contentAreaSplitView;
    IDEDocNavigatorArea *_navigatorArea;
    DVTChoice *_sidebarChoice;
    DVTSplitViewItem *_navigatorAreaSplitViewItem;
}

+ (id)keyPathsForValuesAffectingSidebarVisible;
@property(retain) DVTSplitViewItem *navigatorAreaSplitViewItem; // @synthesize navigatorAreaSplitViewItem=_navigatorAreaSplitViewItem;
@property(retain, nonatomic) DVTChoice *sidebarChoice; // @synthesize sidebarChoice=_sidebarChoice;
@property(retain) IDEDocNavigatorArea *navigatorArea; // @synthesize navigatorArea=_navigatorArea;
@property(retain) DVTSplitView *contentAreaSplitView; // @synthesize contentAreaSplitView=_contentAreaSplitView;
@property(retain) DVTReplacementView *contentReplacementView; // @synthesize contentReplacementView=_contentReplacementView;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)printDocument:(id)arg1;
- (id)printInfo;
- (BOOL)_isDocumentHTML;
- (void)useSelectionForFind:(id)arg1;
- (void)showContentFindView;
- (id)findBar;
- (void)_updateFindBar:(id)arg1;
- (id)_scopeBarsManager;
@property(readonly, nonatomic, getter=isFindBarInstalled) BOOL findBarInstalled;
- (void)basicFindBarLostFocus:(id)arg1;
- (BOOL)basicFindBar:(id)arg1 findPreviousByWrapping:(BOOL)arg2;
- (BOOL)basicFindBar:(id)arg1 findNextByWrapping:(BOOL)arg2;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (BOOL)_findPreviousByWrapping:(BOOL)arg1;
- (BOOL)_findNextByWrapping:(BOOL)arg1;
- (long long)basicFindBar:(id)arg1 findString:(id)arg2 caseSensitive:(BOOL)arg3 withFindType:(unsigned long long)arg4 andMatchStyle:(unsigned long long)arg5;
- (BOOL)basicFindBar:(id)arg1 supportsMatchStyle:(unsigned long long)arg2;
- (BOOL)basicFindBar:(id)arg1 supportsFindType:(unsigned long long)arg2;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (void)closeFindBar;
@property(readonly) NSView *scopeBarsBaseView;
@property(readonly) BOOL webViewCanGoForward;
@property(readonly) BOOL webViewCanGoBack;
@property(readonly) BOOL webViewCanMakeTextStandardSize;
@property(readonly) BOOL webViewCanZoomOut;
@property(readonly) BOOL webViewCanZoomIn;
- (void)webViewMakeTextStandardSize:(id)arg1;
- (void)webViewZoomOut:(id)arg1;
- (void)webViewZoomIn:(id)arg1;
- (void)webViewGoForward:(id)arg1;
- (void)webViewGoBack:(id)arg1;
@property(readonly, copy) NSString *webViewBackForwardListForwardItemURLString;
@property(readonly, copy) NSString *webViewBackForwardListBackItemURLString;
- (void)toggleNavigatorVisibility;
@property(readonly, getter=isSidebarVisible) BOOL sidebarVisible;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)giveFilterFieldFocus;
- (void)showNavigator;
@property(readonly) NSString *webViewURLString;
- (void)loadURL:(id)arg1 explorableIdentifier:(id)arg2;
@property(readonly) _TtC6DVTKit23DVTExplorableIdentifier *jumpBarSelectedExplorableIdentifier;
@property(readonly) IDEDocWebViewContentViewController *installedContentViewController;
@property(readonly) WebView *webView;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)maxSplitterPosition;
- (double)minSplitterPosition;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
@property(readonly) DVTScopeBarsManager *scopeBarsManager;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)navigatorArea:(id)arg1 didSelectURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;

@end

