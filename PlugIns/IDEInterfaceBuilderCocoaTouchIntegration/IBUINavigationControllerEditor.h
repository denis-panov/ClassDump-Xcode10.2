//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerEditor.h>

@interface IBUINavigationControllerEditor : IBUIViewControllerEditor
{
    BOOL showingViewControllerInsertionIndicator;
}

+ (Class)ibDropTargetResolverClass;
- (void)drawDragAndDropInsertionHints;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (void)setShowingViewControllerInsertionIndicator:(BOOL)arg1;
- (struct CGRect)viewControllerInsertionIndidicatorRect;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)bottomBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)displayedChildViewController;
- (id)editedNavigationController;
- (void)didOpen;

@end

