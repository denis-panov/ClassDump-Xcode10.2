//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBAutoLayoutView.h>

@class DTTypeCompletionHandler, IBConnection, IBDocument, IBHUDConnectionPredecessorsView, IBInvalidationPolicy, IBPathControl, IBSlateBezierButton, IBSlatePopUpButton, IBSlateScrollView, NSArray, NSEvent, NSMutableArray, NSMutableSet, NSView;

@interface IBHUDHeaderView : IBAutoLayoutView
{
    IBSlateBezierButton *forwardButton;
    IBSlateBezierButton *closeButton;
    IBSlateBezierButton *backButton;
    IBSlatePopUpButton *sourcePopUp;
    IBSlateScrollView *scrollView;
    IBPathControl *pathControl;
    NSView *documentView;
    NSArray *contentViews;
    NSArray *contentTitles;
    NSArray *contentSources;
    double contentWidth;
    double maxContentHeight;
    NSEvent *lastMouseDown;
    IBDocument *document;
    NSMutableSet *invalidClasses;
    IBInvalidationPolicy *contentViewInvalidationPolicy;
    IBConnection *connectionToRefocusOnAfterValidating;
    BOOL predecessorsRequestedInvalidation;
    BOOL predecessorsRequestedConditionalInvalidation;
    id delegate;
    NSMutableArray *historyBack;
    NSMutableArray *historyForward;
    id historyCurrent;
    id highlightedObject;
    IBHUDConnectionPredecessorsView *selectedPredecessorView;
    id selectedObject;
    DTTypeCompletionHandler *typeCompletionHandler;
    IBHUDConnectionPredecessorsView *lastCompletionMatch;
}

+ (void)setDefaultMaxContentHeight:(double)arg1;
+ (double)defaultMaxContentHeight;
+ (double)minimumContentHeight;
- (void)deselectAll;
- (id)objectsAtPoint:(struct CGPoint)arg1;
- (id)objectAtPoint:(struct CGPoint)arg1;
- (id)selectedPredecessorEndPoint;
- (id)selectedPredecessorView;
- (void)unselectSelectedPredecessor;
- (void)predecessorView:(id)arg1 wantsToSelectPredecessor:(id)arg2 withEndPoint:(id)arg3;
- (void)connectionView:(id)arg1 connectionWasUnhighlighted:(id)arg2 withEndPoint:(id)arg3;
- (void)connectionView:(id)arg1 connectionWasHighlighted:(id)arg2 withEndPoint:(id)arg3;
- (void)pathControlSegmentWasPressed:(id)arg1;
- (void)updatePathControlForHighlightedObject;
- (void)setHistoryForward:(id)arg1;
- (id)historyForward;
- (void)setHistoryBack:(id)arg1;
- (id)historyBack;
- (void)moveForwardInHistory:(id)arg1;
- (void)moveBackInHistory:(id)arg1;
- (BOOL)saveStateAndMoveToSource:(id)arg1;
- (BOOL)saveStateAndMoveToSource:(id)arg1 selectPredecessor:(id)arg2;
- (BOOL)canMoveForwardInHistory;
- (BOOL)canMoveBackInHistory;
- (id)historyItemForCurrentState;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)insertText:(id)arg1;
- (void)typeCompletionHandlerCompletionDisplayShouldExpire:(id)arg1;
- (id)typeCompletionHandler:(id)arg1 typeCompletionStringForObject:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (struct CGRect)resizerRect;
- (struct CGRect)titleRect;
- (struct CGRect)forwardButtonRect;
- (struct CGRect)backButtonRect;
- (BOOL)shouldShowNavigationButtons;
- (struct CGRect)sourcePopUpRect;
- (struct CGRect)closeButtonRect;
- (struct CGRect)footerRect;
- (struct CGRect)pathControlRect;
- (struct CGRect)contentRect;
- (struct CGRect)headerRect;
- (BOOL)isShowingResizeIndicator;
- (BOOL)isShowingScroller;
- (BOOL)isFlipped;
- (struct CGRect)iconBounds;
- (struct CGRect)buttonBounds;
- (id)windowController;
- (id)attributedTitle;
- (id)title;
- (id)titleAttributes;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)contentViewFrameChanged:(id)arg1;
- (void)switchSource:(id)arg1;
- (void)close:(id)arg1;
- (id)contentSources;
- (id)contentSource;
- (id)selection;
- (void)setContentSource:(id)arg1;
- (id)contentViewForContentSource:(id)arg1;
- (void)setLastMouseDown:(id)arg1;
- (id)lastMouseDown;
- (id)document;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPinned;
- (void)setPinned:(BOOL)arg1;
- (void)windowKeyOrMainStateChanged:(id)arg1;
- (void)documentDidChangeClasses:(id)arg1;
- (void)invalidatePredecessorViews;
- (void)invalidatePredecessorViewsConditionally;
- (void)invalidatePredecessorViewsRefocusingOnConnection:(id)arg1;
- (void)validateContentViews:(id)arg1;
- (void)rebuildWithSources:(id)arg1 initialSelection:(id)arg2 selectPredecessor:(id)arg3 interfaceState:(id)arg4;
- (void)rebuildWithSources:(id)arg1 initialSelection:(id)arg2 selectPredecessor:(id)arg3;
- (void)rebuildWithSources:(id)arg1 initialSelection:(id)arg2;
- (void)rebuildWithHistoryItem:(id)arg1;
- (BOOL)makePrototypeVisible:(id)arg1;
- (BOOL)makeConnectionVisible:(id)arg1;
- (id)predecessorViews;
- (void)applyInterfaceState:(id)arg1;
- (id)captureInterfaceState;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)initializeForwardButton;
- (void)initializeBackButton;
- (void)initializeSourcePopUpWithViews:(id)arg1 andTitles:(id)arg2;
- (void)initializeCloseButton;
- (id)forwardButtonIconContent;
- (id)backButtonIconContent;
- (id)closeButtonIconContent;
- (id)sourcePopUpButtonContent;
- (void)documentWillClose:(id)arg1;
- (void)clearDocumentReference;
- (void)dealloc;
- (void)willClose;
- (id)initWithSources:(id)arg1 andContentViews:(id)arg2 forDocument:(id)arg3;

@end

