//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class IBSlateBezierButton, NSTextField;

@interface IBHUDSliceTitleView : NSView
{
    IBSlateBezierButton *disclosureButton;
    NSTextField *titleView;
}

+ (double)titleHeight;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRect;
- (void)setTitle:(id)arg1;
- (void)disclosureClicked:(id)arg1;
- (id)paletteSlice;
- (id)disclosureButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

