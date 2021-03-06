//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>
#import <IDEInterfaceBuilderKit/NSTextFieldDelegate-Protocol.h>

@class IBNinePartImage, NSEvent, NSMutableDictionary, NSString, NSTextField;
@protocol IBICAssetCapsuleDelegate;

@interface IBICAssetCapsule : DVTLayoutView_ML <NSTextFieldDelegate, NSAccessibilityGroup>
{
    NSTextField *_titleField;
    NSTextField *_subtitleField;
    IBNinePartImage *_titleHighlightImage;
    IBNinePartImage *_borderImage;
    struct CGRect _titleHighlightFrame;
    NSEvent *_lastMouseDown;
    NSTextField *_placeholderTextField;
    NSMutableDictionary *_borderCache;
    BOOL _drawsWithKeyAppearance;
    BOOL _wholeAssetShowsSelection;
    BOOL _wholeAssetShowsContextFocus;
    BOOL _drawsBottomBorder;
    BOOL _titleIsEditing;
    NSString *_title;
    NSString *_subtitle;
    id <IBICAssetCapsuleDelegate> _delegate;
}

+ (id)normalOuterBorderColor;
+ (id)createPlaceholderTextField;
+ (id)subtitleTextField;
+ (id)titleTextField;
+ (id)textFieldWithFont:(id)arg1;
@property(nonatomic) BOOL titleIsEditing; // @synthesize titleIsEditing=_titleIsEditing;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(nonatomic) BOOL wholeAssetShowsContextFocus; // @synthesize wholeAssetShowsContextFocus=_wholeAssetShowsContextFocus;
@property(nonatomic) BOOL wholeAssetShowsSelection; // @synthesize wholeAssetShowsSelection=_wholeAssetShowsSelection;
@property(nonatomic) BOOL drawsWithKeyAppearance; // @synthesize drawsWithKeyAppearance=_drawsWithKeyAppearance;
@property(nonatomic) __weak id <IBICAssetCapsuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)trackBandSelectionWithInitialMouseDown:(id)arg1 currentMouseEvent:(id)arg2 initialSelection:(id)arg3;
- (void)keyDown:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)performDelete:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)beginTrackingMenuWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)delegateSelectionHandlingForMouseEvent:(id)arg1;
- (void)layoutSubtitleField;
- (void)layoutTitleField;
- (struct CGRect)titleHighlightFrameForTitleFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (double)effectiveOutterBorderStrokeWidth;
- (id)effectiveSubtitleColor;
- (id)effectiveTitleColor;
- (id)effectiveOuterBorderColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTitleHighlightFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)refreshHighlightState;
- (void)setTitleHighlightImage:(id)arg1;
- (void)setBorderImage:(id)arg1;
- (long long)effectiveBorderStyle;
@property(readonly, nonatomic) NSTextField *subtitleField;
@property(readonly, nonatomic) NSTextField *titleField;
- (id)placeholderTextField;
- (BOOL)isTitleOrLabelHitByPoint:(struct CGPoint)arg1;
- (id)assetComponentIDAtPoint:(struct CGPoint)arg1;
- (id)targetedAssetComponentIDsAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForImageOfComponentWithAssetComponentID:(id)arg1;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (void)setContextFocusedAssetComponentIDs:(id)arg1;
- (struct CGRect)bandSelectionFrameForAssetComponentID:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

