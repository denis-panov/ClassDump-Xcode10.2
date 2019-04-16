//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <IDEKit/NSAccessibilityButton-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSColor, NSDictionary, NSObject, NSString;
@protocol IDESourceControlNameTokenViewDelegate;

@interface IDESourceControlNameTokenView : NSView <NSMenuDelegate, NSAccessibilityButton>
{
    NSString *_value;
    struct CGRect _tokenRect;
    struct CGRect _stringRect;
    BOOL _showToken;
    BOOL _selected;
    NSObject<IDESourceControlNameTokenViewDelegate> *_delegate;
    NSDictionary *_textAttributes;
    double _fontSize;
    BOOL _miniStyle;
    NSColor *_textColor;
}

@property(copy) NSColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic, getter=isMiniStyle) BOOL miniStyle; // @synthesize miniStyle=_miniStyle;
@property __weak NSObject<IDESourceControlNameTokenViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawWholeTokenWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawInteriorWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawTextWithFrame:(struct CGRect)arg1;
- (void)_drawTokenWithFrame:(struct CGRect)arg1;
- (id)tokenSelectedColor;
- (id)tokenColor;
- (id)_pullDownImage;
- (struct CGRect)_pullDownRectForTokenFrame:(struct CGRect)arg1;
- (struct CGRect)_tokenRectForStringRect:(struct CGRect)arg1;
@property(copy) NSString *value;
@property(readonly) struct CGRect textFrame;
- (void)_resetTokenRect;
- (struct CGRect)_rectForString:(id)arg1 withRect:(struct CGRect)arg2;
- (double)_widthOfRightMenuWithPadding;
- (void)mouseUp:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setTrackingRectWithRect:(struct CGRect)arg1;
- (void)_setFontSize:(double)arg1;
- (double)fontSize;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (double)cornerRadius;
- (struct NSEdgeInsets)textPadding;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

