//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTColorLiteralQuickEditViewController, NSColor;

@protocol DVTColorLiteralQuickEditViewControllerDelegate <NSObject>
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didSelectMoreColorOptions:(NSColor *)arg2;
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didSelectColor:(NSColor *)arg2;
- (void)colorQuickEdit:(DVTColorLiteralQuickEditViewController *)arg1 didHighlightColor:(NSColor *)arg2;
@end

