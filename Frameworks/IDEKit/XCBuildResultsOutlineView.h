//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSOutlineView.h>

@class IDEConfigurableDataSource, NSArray, XCTranscriptTextView;

@interface XCBuildResultsOutlineView : NSOutlineView
{
    long long _mouseRow;
    BOOL _withinDrawRect;
    double _xceLastWidth;
    BOOL _changedWidthWhileLiveResizing;
    XCTranscriptTextView *_textView;
    NSArray *_collapsedItems;
    NSArray *_expandedItems;
    NSArray *_selectedItems;
    NSArray *_itemsWithExpandedTranscripts;
    struct CGPoint _scrollPositionAllResults;
    BOOL _scrollerIsPinnedToBottomAllResults;
    struct CGPoint _scrollPositionLatestResults;
    BOOL _scrollerIsPinnedToBottomLatestResults;
    BOOL _batchUpdateMode;
    BOOL _cleared;
    BOOL _allowsSizingShorterThanClipView;
}

@property(nonatomic) BOOL allowsSizingShorterThanClipView; // @synthesize allowsSizingShorterThanClipView=_allowsSizingShorterThanClipView;
@property(nonatomic) BOOL scrollerIsPinnedToBottomLatestResults; // @synthesize scrollerIsPinnedToBottomLatestResults=_scrollerIsPinnedToBottomLatestResults;
@property(nonatomic) struct CGPoint scrollPositionLatestResults; // @synthesize scrollPositionLatestResults=_scrollPositionLatestResults;
@property(nonatomic) BOOL scrollerIsPinnedToBottomAllResults; // @synthesize scrollerIsPinnedToBottomAllResults=_scrollerIsPinnedToBottomAllResults;
@property(nonatomic) struct CGPoint scrollPositionAllResults; // @synthesize scrollPositionAllResults=_scrollPositionAllResults;
@property(retain) NSArray *itemsWithExpandedTranscripts; // @synthesize itemsWithExpandedTranscripts=_itemsWithExpandedTranscripts;
@property(retain) NSArray *selectedItems; // @synthesize selectedItems=_selectedItems;
@property(retain) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(retain) NSArray *collapsedItems; // @synthesize collapsedItems=_collapsedItems;
@property(retain, nonatomic) XCTranscriptTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long mouseRow; // @synthesize mouseRow=_mouseRow;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearOutlineView;
- (BOOL)becomeFirstResponder;
- (void)scrollToEnd;
- (BOOL)shouldScrollToEnd;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)selectPreviousContentSibling:(id)arg1;
- (void)selectNextContentSibling:(id)arg1;
- (void)selectContentChild:(id)arg1;
- (void)selectContentParent:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)copy:(id)arg1;
- (id)selectedNodes;
- (id)selectedData;
@property(readonly, nonatomic) IDEConfigurableDataSource *xceDataSource; // @dynamic xceDataSource;
- (void)_widthChanged:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)viewWillDraw;
- (void)_checkForChangedWidth;
- (void)_updateAllRowHeights;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)clearTextView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_reflectMouseRow:(id)arg1;
- (void)_updateForOldMouseRow;
- (void)keyDown:(id)arg1;
- (struct CGSize)_adjustFrameSizeToFitSuperview:(struct CGSize)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (void)_redisplayAfterExpansionChangeFromRow:(long long)arg1 withOriginalRowCount:(long long)arg2;
- (void)xceSetBatchUpdateMode:(BOOL)arg1;
- (double)xceLastWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initCommon;

@end

