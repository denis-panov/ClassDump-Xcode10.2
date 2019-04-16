//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <DVTKit/DVTEmptyContentPlaceholderContainer-Protocol.h>
#import <DVTKit/DVTFirstResponderShowingView-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>

@class DVTFirstResponderDrawingStrategy, DVTNotificationToken, DVTTileViewItem, DVTTypeCompletionHandler, NSArray, NSColor, NSFont, NSIndexSet, NSString, NSTextField;
@protocol DVTTileViewDelegate;

@interface DVTTileView : NSView <DVTFirstResponderShowingView, NSAnimationDelegate, DVTEmptyContentPlaceholderContainer>
{
    CDStruct_0c3316f8 _appliedLayout;
    DVTTypeCompletionHandler *_typeCompletionHandler;
    NSArray *_content;
    NSIndexSet *_selectionIndexes;
    unsigned long long _minNumberOfRows;
    unsigned long long _maxNumberOfRows;
    unsigned long long _minNumberOfColumns;
    unsigned long long _maxNumberOfColumns;
    BOOL _superviewIsClipView;
    BOOL _gridParametersReadFromPrototype;
    BOOL _layingOut;
    NSArray *_tileViewItems;
    double _animationDuration;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    NSTextField *_emptyContentTextField;
    DVTNotificationToken *_superviewFrameChangeToken;
    BOOL _hasContent;
    BOOL _showsFirstResponder;
    BOOL _animates;
    BOOL _selectable;
    BOOL _allowsMultipleSelection;
    BOOL _avoidsEmptySelection;
    int _emptyContentStringStyle;
    NSString *_emptyContentString;
    NSString *_emptyContentSubtitle;
    NSFont *_emptyContentFont;
    long long _firstResponderDrawingScope;
    id _clickedContentObject;
    id <DVTTileViewDelegate> _delegate;
    DVTTileViewItem *_layoutItemPrototype;
    NSColor *_backgroundColor;
    struct CGSize _minGridSize;
    struct CGSize _maxGridSize;
}

+ (CDStruct_0c3316f8)computeTargetGridGeometryForNumberOfItems:(long long)arg1 bounds:(struct CGRect)arg2 rowCountRange:(struct _NSRange)arg3 columnCountRange:(struct _NSRange)arg4 minGridSize:(struct CGSize)arg5 maxGridSize:(struct CGSize)arg6 sizeToFit:(BOOL)arg7 superview:(id)arg8 allowsResizingHorizontally:(BOOL)arg9 allowsResizingVertically:(BOOL)arg10;
@property(readonly) NSArray *tileViewItems; // @synthesize tileViewItems=_tileViewItems;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGSize maxGridSize; // @synthesize maxGridSize=_maxGridSize;
@property(nonatomic) struct CGSize minGridSize; // @synthesize minGridSize=_minGridSize;
@property(nonatomic) unsigned long long maxNumberOfColumns; // @synthesize maxNumberOfColumns=_maxNumberOfColumns;
@property(nonatomic) unsigned long long maxNumberOfRows; // @synthesize maxNumberOfRows=_maxNumberOfRows;
@property(retain, nonatomic) DVTTileViewItem *layoutItemPrototype; // @synthesize layoutItemPrototype=_layoutItemPrototype;
@property(nonatomic) __weak id <DVTTileViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id clickedContentObject; // @synthesize clickedContentObject=_clickedContentObject;
@property(nonatomic) BOOL avoidsEmptySelection; // @synthesize avoidsEmptySelection=_avoidsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(readonly) BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
@property(nonatomic) long long firstResponderDrawingScope; // @synthesize firstResponderDrawingScope=_firstResponderDrawingScope;
@property(nonatomic) BOOL hasContent; // @synthesize hasContent=_hasContent;
@property(copy, nonatomic) NSFont *emptyContentFont; // @synthesize emptyContentFont=_emptyContentFont;
@property(nonatomic) int emptyContentStringStyle; // @synthesize emptyContentStringStyle=_emptyContentStringStyle;
@property(copy, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString; // @synthesize emptyContentString=_emptyContentString;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)accessibilityRole;
- (void)setAccessibilitySelectedChildren:(id)arg1;
- (id)accessibilitySelectedChildren;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_contentChanged:(BOOL)arg1 regenerate:(BOOL)arg2;
- (void)_layoutItemsAnimated:(BOOL)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)addSubviews:(id)arg1;
- (id)faultedViewsForRect:(struct CGRect)arg1;
- (id)newTileViewItemForRepresentedObject:(id)arg1;
- (void)tileViewDidStopUsingTileViewItem:(id)arg1;
- (void)didStopUsingTileViewItem:(id)arg1;
- (void)willStartUsingTileViewItem:(id)arg1;
- (id)itemForView:(id)arg1;
- (id)itemForRepresentedObject:(id)arg1;
- (void)_applySelectionToItems:(id)arg1;
- (void)_applySelectionIndexes:(id)arg1 toItems:(id)arg2;
- (void)gridGeometryChanged:(BOOL)arg1;
- (struct CGRect)rectForTileViewItemAtIndex:(long long)arg1;
- (struct CGRect)_frameRectForIndexInGrid:(unsigned long long)arg1 layout:(CDStruct_0c3316f8)arg2;
- (id)_indexSetInAppliedGridForRect:(struct CGRect)arg1 clippedToContent:(BOOL)arg2;
- (unsigned long long)_indexInAppliedGridForPoint:(struct CGPoint)arg1;
- (void)_getRow:(unsigned long long *)arg1 column:(unsigned long long *)arg2 forPoint:(struct CGPoint)arg3 inLayout:(CDStruct_0c3316f8)arg4;
- (CDStruct_0c3316f8)computeTargetGridGeometry;
- (BOOL)_allowsResizingHorizontally;
- (BOOL)_allowsResizingVertically;
- (void)_determineGridParametersFromItemPrototype;
- (struct CGPoint)_pointWithinBounds:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (void)viewDidMoveToSuperview;
- (void)registerForClipviewFrameChangeNotification;
- (void)_superviewFrameChanged:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly) unsigned long long numberOfColumns;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)layout;
- (void)rightMouseDown:(id)arg1;
- (id)_recursiveFindDefaultButtonCell;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (unsigned long long)_indexForMoveDown;
- (unsigned long long)_indexForMoveUp;
- (unsigned long long)_indexForMoveLeft;
- (unsigned long long)_indexForMoveRight;
- (unsigned long long)_indexForIncrementMove:(unsigned long long)arg1;
- (unsigned long long)_indexForDecrementMove:(unsigned long long)arg1;
- (void)selectAll:(id)arg1;
- (void)discardEditing;
- (void)_scrollSelectionToVisible;
- (void)_scrollToVisibleItemAtIndex:(unsigned long long)arg1;
- (void)validateSelectionIndexes;
- (void)_selectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 scrollIndexToVisible:(unsigned long long)arg3;
- (void)_selectIndex:(unsigned long long)arg1 scrollToVisible:(BOOL)arg2;
- (void)_selectionStateChanged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)mouseDown:(id)arg1;
- (id)_handleMouseEvent:(id)arg1 startingPoint:(struct CGPoint)arg2 commandKey:(BOOL)arg3 shiftKey:(BOOL)arg4 rubberband:(id)arg5;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (id)typeCompletionHandler:(id)arg1 typeCompletionStringForObject:(id)arg2;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setContextClickedContentObject:(id)arg1;
- (struct _NSRange)columnCountRange;
- (void)setColumnCountRange:(struct _NSRange)arg1;
- (struct _NSRange)rowCountRange;
- (void)setRowCountRange:(struct _NSRange)arg1;
@property(readonly) NSArray *tiledViews;
@property(copy, nonatomic) NSArray *content;
@property(copy, nonatomic) NSIndexSet *selectionIndexes;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL followsFontAndColorTheme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

