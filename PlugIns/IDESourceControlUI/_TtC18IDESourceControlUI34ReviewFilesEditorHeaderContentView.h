//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSButton, NSTextField;

@interface _TtC18IDESourceControlUI34ReviewFilesEditorHeaderContentView : NSView
{
    // Error parsing type: , name: messageField
    // Error parsing type: , name: contractMessageButton
    // Error parsing type: , name: textContainer
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: textStorage
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
- (BOOL)isFlipped;
- (void)fieldEditorChangedSelectionWithNotification:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak NSButton *contractMessageButton; // @synthesize contractMessageButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

