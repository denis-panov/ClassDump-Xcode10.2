//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <IDEDocViewer/DVTReplacementViewDelegate-Protocol.h>
#import <IDEDocViewer/_TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_-Protocol.h>

@class DVTBorderView, DVTFilterExpressionControlBar, DVTReplacementView, DVTViewController, IDEDocContentAreaViewController, IDEReferenceDocumentationInfo, NSArrayController, NSStackView, NSString, NSVisualEffectView, _TtC6DVTKit23DVTExplorableIdentifier;
@protocol IDEDocNavigatorAreaDelegate, _TtP6DVTKit30DVTExplorerNavigatorCommonCore_;

@interface IDEDocNavigatorArea : IDEViewController <_TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_, DVTReplacementViewDelegate>
{
    NSString *_UUID;
    id <IDEDocNavigatorAreaDelegate> _delegate;
    IDEReferenceDocumentationInfo *_selectedReferenceDocumentation;
    IDEDocContentAreaViewController *_contentAreaViewController;
    NSArrayController *_referenceScopeButtonsController;
    DVTViewController<_TtP6DVTKit30DVTExplorerNavigatorCommonCore_> *_activeExplorerViewController;
    NSStackView *_chooserScopeBar;
    DVTReplacementView *_replacementView;
    NSVisualEffectView *_visualEffectView;
    DVTFilterExpressionControlBar *_filterExpressionControlBar;
    DVTBorderView *_chooserNavigatorSeparatorView;
}

@property(retain, nonatomic) DVTBorderView *chooserNavigatorSeparatorView; // @synthesize chooserNavigatorSeparatorView=_chooserNavigatorSeparatorView;
@property(retain, nonatomic) DVTFilterExpressionControlBar *filterExpressionControlBar; // @synthesize filterExpressionControlBar=_filterExpressionControlBar;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) NSStackView *chooserScopeBar; // @synthesize chooserScopeBar=_chooserScopeBar;
@property(retain, nonatomic) DVTViewController<_TtP6DVTKit30DVTExplorerNavigatorCommonCore_> *activeExplorerViewController; // @synthesize activeExplorerViewController=_activeExplorerViewController;
@property(retain) NSArrayController *referenceScopeButtonsController; // @synthesize referenceScopeButtonsController=_referenceScopeButtonsController;
@property(nonatomic) __weak IDEDocContentAreaViewController *contentAreaViewController; // @synthesize contentAreaViewController=_contentAreaViewController;
@property(retain, nonatomic) IDEReferenceDocumentationInfo *selectedReferenceDocumentation; // @synthesize selectedReferenceDocumentation=_selectedReferenceDocumentation;
@property(nonatomic) __weak id <IDEDocNavigatorAreaDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (void)restoreNavigatorWithIdentifier:(id)arg1;
- (void)restoreReferenceDocumentationWithIdentifier:(id)arg1;
- (void)showOtherReferenceNavigator:(id)arg1;
- (void)showObjectiveCReferenceNavigator:(id)arg1;
- (void)showSwiftReferenceNavigator:(id)arg1;
- (void)_referenceDocumentationExtensionPointButtonAction:(id)arg1;
- (id)navigatorOrExplorerViewController;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)switchToReferenceForDocumentationLanguage:(int)arg1;
- (void)updateWithURL:(id)arg1 explorableIdentifier:(id)arg2;
@property(readonly, nonatomic) _TtC6DVTKit23DVTExplorableIdentifier *selectedExplorableIdentifier;
- (void)giveFilterFieldFocus;
- (void)selectedItemURLDidChange:(id)arg1;
- (void)_hideFilterControlBar;
- (void)primitiveInvalidate;
- (void)_layoutSubviews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
