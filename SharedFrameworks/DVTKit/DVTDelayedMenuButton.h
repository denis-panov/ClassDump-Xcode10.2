//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTRolloverTrackingButton.h>

@class NSMenuItem;
@protocol DVTDelayedMenuButtonDelegate;

@interface DVTDelayedMenuButton : DVTRolloverTrackingButton
{
    BOOL _showsMenuIndcatorOnlyWhileMouseInside;
}

+ (id)keyPathsForValuesAffectingCurrentMenuItem;
+ (Class)cellClass;
@property(nonatomic) BOOL showsMenuIndcatorOnlyWhileMouseInside; // @synthesize showsMenuIndcatorOnlyWhileMouseInside=_showsMenuIndcatorOnlyWhileMouseInside;
- (void)setImage:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (BOOL)_allowsContextMenus;
- (void)_runPopup:(id)arg1;
- (struct CGSize)menuOffset;
@property(copy) NSMenuItem *currentMenuItem;
- (void)setMenu:(id)arg1;
@property(retain) id <DVTDelayedMenuButtonDelegate> delegate;

@end
