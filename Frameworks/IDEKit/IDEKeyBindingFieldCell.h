//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTImageAndTextCell.h>

@class IDEKeyBinding, IDEKeyBindingFieldEditor, NSMutableArray;
@protocol IDEKeyBindingFieldCellDelegate;

@interface IDEKeyBindingFieldCell : DVTImageAndTextCell
{
    IDEKeyBinding *_keyBinding;
    NSMutableArray *_keyboardShortcuts;
    IDEKeyBindingFieldEditor *_keyBindingFieldEditor;
    long long _selectedIndex;
    id <IDEKeyBindingFieldCellDelegate> _delegate;
    struct _IDEKeyBindingFieldCellFlags _kbcFlags;
}

@property(readonly) IDEKeyBinding *keyBinding; // @synthesize keyBinding=_keyBinding;
- (void).cxx_destruct;
- (BOOL)suppressesTabAlignment;
- (void)setSuppressTabAlignment:(BOOL)arg1;
- (void)setIndexOfSelectedKeyboardShortcut:(long long)arg1;
- (long long)indexOfSelectedKeyboardShortcut;
- (void)replaceSelectionWithKeyboardShortcut:(id)arg1;
- (void)deleteKeyboardShortcut;
- (void)addKeyboardShortcut;
- (id)selectedKeyboardShortcut;
- (void)selectKeyboardShortcutAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)selectedCharacterRange;
- (BOOL)canDeleteKeyboardShortcut;
- (BOOL)canAddKeyboardShortcut;
- (void)endEditing:(id)arg1;
- (void)endEditing;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (id)fieldEditorForView:(id)arg1;
@property __weak id <IDEKeyBindingFieldCellDelegate> delegate;
- (id)attributedStringValueForEditing:(BOOL)arg1;
- (id)attributedStringValue;
- (void)setObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

