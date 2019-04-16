//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTOutlineView.h>

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSNumber, NSSet, NSString;

@interface IBOutlineView : DVTOutlineView
{
    NSMutableDictionary *_cachedAutolayoutHeightDrivenWidthConstraintsByIdentifier;
    NSMutableDictionary *_cachedAutolayoutHeightDrivenCellViewsByIdentifier;
    NSMutableIndexSet *_temporaryRowIndexesForDynamicHeightItems;
    NSMutableSet *_itemsGettingHeightComputed;
    NSString *_cachedGroupCellViewIdentifier;
    NSString *_separatorRowViewIdentifier;
    NSMutableSet *_itemsWithDynamicHeight;
    NSString *_groupRowViewIdentifier;
    BOOL _drawsWithActiveLook;
    NSNumber *_rowIndicatingPotentialConnection;
    NSSet *_highlightedRows;
}

@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(retain, nonatomic) NSSet *highlightedRows; // @synthesize highlightedRows=_highlightedRows;
@property(copy, nonatomic) NSNumber *rowIndicatingPotentialConnection; // @synthesize rowIndicatingPotentialConnection=_rowIndicatingPotentialConnection;
- (void).cxx_destruct;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)drawPotentialConnectionIndicatorInRect:(struct CGRect)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (double)heightForItem:(id)arg1 givenContentHeight:(double)arg2;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)delegateInterceptsRightAndContextClickActions;
- (void)trackingLoopWithInitialEvent:(id)arg1;
- (id)makeEffectiveCellViewForItem:(id)arg1 withOwner:(id)arg2 groupCellViewConfigurationBlock:(CDUnknownBlockType)arg3 cellViewForNonGroupRowBlock:(CDUnknownBlockType)arg4;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)reloadItem:(id)arg1;
- (void)reloadDataForRowIndexes:(id)arg1 columnIndexes:(id)arg2;
- (void)reloadData;
- (id)makeSeparatorRowViewForItem:(id)arg1 withOwner:(id)arg2;
- (id)makeGroupRowViewForItem:(id)arg1 withOwner:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)syncRowHeights;
- (void)setFrameSize:(struct CGSize)arg1;

@end

