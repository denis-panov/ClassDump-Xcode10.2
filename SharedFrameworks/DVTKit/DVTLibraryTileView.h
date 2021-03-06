//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTTileView.h>

@class DVTDragIndicatorView;
@protocol DVTLibraryTileViewDelegate;

@interface DVTLibraryTileView : DVTTileView
{
    DVTDragIndicatorView *_overlayView;
}

+ (BOOL)eventWouldToggleSelection:(id)arg1;
+ (BOOL)eventWouldExtendSelection:(id)arg1;
- (void).cxx_destruct;
- (id)dropHighlightColor;
- (void)copy:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)cancelOperation:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertNewline:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)shouldTrackSelectionWithMouseDownEvent:(id)arg1;
- (void)selectItemWithEvent:(id)arg1;
- (id)contentObjectAtPoint:(struct CGPoint)arg1;
- (id)tileViewItemAtPoint:(struct CGPoint)arg1;
- (void)viewWillDraw;
@property(nonatomic) BOOL showDropIndicator;
- (id)draggedImageState:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (id)newTileViewItemForRepresentedObject:(id)arg1;
- (void)setSelectedContentObjects:(id)arg1;
- (id)indexesForContentObjects:(id)arg1;
@property(retain) id <DVTLibraryTileViewDelegate> delegate;

@end

