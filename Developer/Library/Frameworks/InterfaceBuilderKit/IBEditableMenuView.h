//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class IBSelectionOwner, NSMenu;

@interface IBEditableMenuView : NSView
{
    NSMenu *menu;
    IBSelectionOwner *selectionOwner;
    id previousSelectionOwnerDelegate;
    BOOL managesSelection;
    id drawingDelegate;
}

- (void)sizeToFit;
- (id)cellAtIndex:(long long)arg1;
- (void)setDrawsKeyEquivalentRectForItemAtIndex:(long long)arg1;
- (long long)indexOfItemAtPoint:(struct CGPoint)arg1;
- (struct CGRect)stateImageRectForMenuItemAtIndex:(long long)arg1;
- (struct CGRect)titleRectForMenuItemAtIndex:(long long)arg1;
- (struct CGRect)keyEquivalentRectForMenuItemAtIndex:(long long)arg1;
- (struct CGRect)frameForMenuItemAtIndex:(long long)arg1;
- (BOOL)isHorizontal;
- (void)setMinimumSize:(struct CGSize)arg1;
- (struct CGSize)minimumSize;
- (void)viewWillDraw;
- (void)menuViewDidDraw;
- (void)cycleStateForItemAtIndex:(long long)arg1;
- (void)didSelect:(id)arg1 andDeselect:(id)arg2;
- (void)willSelect:(id)arg1 andDeselect:(id)arg2;
- (id)selectionOwner;
- (void)setSelectionOwner:(id)arg1;
- (void)rebuild;
- (void)setMenuItemAtIndexNeedsDisplay:(long long)arg1;
- (id)menuItemAtIndex:(long long)arg1;
- (void)setManagesSelection:(BOOL)arg1;
- (BOOL)managesSelection;
- (void)setDrawingDelegate:(id)arg1;
- (id)drawingDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)copyForDisplayingMenu:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andMenu:(id)arg2;

@end

