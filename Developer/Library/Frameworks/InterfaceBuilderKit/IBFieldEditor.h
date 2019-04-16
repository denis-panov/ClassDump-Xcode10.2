//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <InterfaceBuilderKit/IBFieldEditorTextViewDelegate-Protocol.h>
#import <InterfaceBuilderKit/NSTextViewDelegate-Protocol.h>

@class IBFieldEditorTextView, NSAttributedString, NSString;

@interface IBFieldEditor : NSView <IBFieldEditorTextViewDelegate, NSTextViewDelegate>
{
    NSAttributedString *initialValue;
    IBFieldEditorTextView *textEditor;
    NSView *editedView;
    struct CGRect originalTitleRect;
    struct CGRect textFrame;
    struct CGSize minSize;
    struct CGSize maxSize;
    struct CGSize previousSize;
    struct CGPoint anchorPoint;
    id delegate;
    id editCell;
    id userInfo;
    struct _sevFlags {
        unsigned int bordered:1;
        unsigned int growsToFitBounds:1;
        unsigned int constrainedToOneLine:1;
        unsigned int usesRuler:1;
        unsigned int usesFontPanel:1;
        unsigned int isRichText:1;
        unsigned int wasCancelled:1;
        unsigned int attributesDidChange:1;
        unsigned int reserved:24;
    } sevFlags;
}

- (void)textViewDidChangeFont:(id)arg1;
- (void)textViewWillChangeFont:(id)arg1;
- (void)textViewDidChangeAttributes:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textFrameDidChange:(id)arg1;
- (void)resizeToFitText;
- (void)adaptToMovedTitleRectangle:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (struct CGRect)clipFrameWithFrame:(struct CGRect)arg1;
- (struct CGSize)maxSizeForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (void)editInRect:(struct CGRect)arg1 ofView:(id)arg2 contextView:(id)arg3;
- (void)edit:(BOOL)arg1;
- (struct CGRect)alignedRectWithSize:(struct CGSize)arg1;
- (void)endEditing;
- (void)cancelOperation:(id)arg1;
- (void)cancelEditing;
- (void)editInRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)attributesDidChange;
- (BOOL)editingWasCancelled;
- (struct CGRect)textFrame;
- (void)setWraps:(BOOL)arg1;
- (BOOL)wraps;
- (void)setLineFragmentPadding:(double)arg1;
- (double)lineFragmentPadding;
- (void)setMaximumSize:(struct CGSize)arg1;
- (struct CGSize)maximumSize;
- (void)setMinimumSize:(struct CGSize)arg1;
- (struct CGSize)minimumSize;
- (void)setEditor:(id)arg1;
- (id)editor;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setUsesFontPanel:(BOOL)arg1;
- (BOOL)usesFontPanel;
- (id)initialValue;
- (void)setInitialValue:(id)arg1;
- (void)setUsesRuler:(BOOL)arg1;
- (BOOL)usesRuler;
- (void)setConstrainedToOneLine:(BOOL)arg1;
- (BOOL)isConstrainedToOneLine;
- (void)setGrowsToFitBounds:(BOOL)arg1;
- (BOOL)growsToFitBounds;
- (void)setImportsGraphics:(BOOL)arg1;
- (BOOL)importsGraphics;
- (void)setRichText:(BOOL)arg1;
- (BOOL)isRichText;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (BOOL)allowsEditingTextAttributes;
- (void)setAttributedStringValue:(id)arg1;
- (id)attributedStringValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setBordered:(BOOL)arg1;
- (BOOL)isBordered;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (void)setFont:(id)arg1;
- (id)font;
- (BOOL)isFlipped;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

