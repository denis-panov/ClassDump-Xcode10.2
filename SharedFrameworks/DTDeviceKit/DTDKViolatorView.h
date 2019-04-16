//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSButton, NSMutableDictionary, NSString, NSTextFieldCell, SFAnimatedLockButton;

@interface DTDKViolatorView : NSView
{
    int _state;
    struct CGSize _minimumSize;
    NSString *_message;
    SFAnimatedLockButton *_lockButton;
    NSButton *_utilityButton;
    NSMutableDictionary *bindingInfo;
    NSTextFieldCell *textCell;
}

+ (void)initialize;
@property(retain) NSMutableDictionary *bindingInfo; // @synthesize bindingInfo;
@property(retain) NSTextFieldCell *textCell; // @synthesize textCell;
- (void).cxx_destruct;
@property(nonatomic) SEL utilityButtonAction;
@property(retain, nonatomic) id utilityButtonTarget;
@property BOOL utilityButtonVisible;
@property(copy, nonatomic) NSString *utilityButtonTitle;
@property(nonatomic) SEL lockButtonAction;
@property(retain, nonatomic) id lockButtonTarget;
- (void)unlockLockButton:(_Bool)arg1;
- (void)lockLockButton:(_Bool)arg1;
- (void)_windowChangedKeyState;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)_adjustSubviews;
- (void)_adjustUtilityButton;
- (void)_adjustLockButton;
@property(nonatomic) struct CGSize minimumSize;
@property(nonatomic) int state;
- (struct CGRect)contentRect;
@property(readonly) struct CGRect headerRect;
- (BOOL)isOpaque;
- (double)maxTextWidth;
- (double)headerThickness;
- (id)headerImage;
@property(readonly, nonatomic) NSButton *utilityButton;
@property(readonly, nonatomic) SFAnimatedLockButton *lockButton;
@property(copy, nonatomic) NSString *message;
- (id)messageAttributes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)infoForBinding:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

