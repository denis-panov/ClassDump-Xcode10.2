//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSTextField;

@interface IDEInspectorResizableTextField : DVTLayoutView_ML
{
    NSTextField *_textField;
    CDStruct_bf6d4a14 _textFieldInset;
}

@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) CDStruct_bf6d4a14 textFieldInset; // @synthesize textFieldInset=_textFieldInset;
- (void).cxx_destruct;
- (void)textFieldTextDidChange:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)awakeFromNib;
- (void)dealloc;

@end

