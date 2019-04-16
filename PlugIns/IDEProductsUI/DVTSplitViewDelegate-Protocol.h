//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEProductsUI/NSSplitViewDelegate-Protocol.h>

@class DVTSplitView, DVTSplitViewItem, NSArray, NSSplitView;

@protocol DVTSplitViewDelegate <NSSplitViewDelegate>

@optional
- (NSArray *)splitView:(NSSplitView *)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (void)splitViewDidEndLiveResize:(DVTSplitView *)arg1;
- (void)splitViewWillStartLiveResize:(DVTSplitView *)arg1;
- (NSArray *)splitView:(DVTSplitView *)arg1 needsRectanglesForViewsWithState:(NSArray *)arg2 forSize:(struct CGSize)arg3;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(DVTSplitViewItem *)arg1;
@end

