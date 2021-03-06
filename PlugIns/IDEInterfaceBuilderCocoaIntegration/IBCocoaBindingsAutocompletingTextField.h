//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTextField.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSTextViewDelegate-Protocol.h>

@class NSString;
@protocol IBCocoaBindingsAutocompletingTextFieldDelegate;

@interface IBCocoaBindingsAutocompletingTextField : NSTextField <NSTextViewDelegate>
{
}

- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (unsigned long long)componentNumberForSelectedRange:(struct _NSRange)arg1;
- (void)setShowingProgressIndicator:(BOOL)arg1;
- (void)didDismissCompletions;
- (void)didAcceptCompletion:(id)arg1 by:(unsigned long long)arg2;
- (void)dismissCompletions;
- (void)setValidationStatusToolTip:(id)arg1;
- (void)setValidationStatus:(long long)arg1;
- (void)setSeparatorChars:(id)arg1;
- (id)cell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <IBCocoaBindingsAutocompletingTextFieldDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

