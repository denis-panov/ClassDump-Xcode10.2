//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSColor, NSString;

@interface IBTargetIdentifierInfoView : NSView
{
    struct CGRect textRect;
    struct CGRect targetRect;
    struct CGRect localTargetRect;
    NSString *caption;
    NSColor *baseColor;
    BOOL usesAlternateColor;
}

- (void)layout;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawFrame:(struct CGRect)arg1;
- (void)drawText:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (id)attributedTitle;
- (id)textFrameColor;
- (id)fillColor;
- (id)textFillColor;
- (id)baseColor;
- (void)setBaseColor:(id)arg1;
- (void)setTargetRect:(struct CGRect)arg1 andCaption:(id)arg2;
- (BOOL)isOpaque;
- (void)dealloc;

@end

