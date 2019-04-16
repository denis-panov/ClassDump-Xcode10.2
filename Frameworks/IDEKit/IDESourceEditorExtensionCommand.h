//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEKeyboardShortcut, IDESourceEditorExtension, NSString;

@interface IDESourceEditorExtensionCommand : NSObject
{
    IDESourceEditorExtension *_extension;
    NSString *_name;
    NSString *_identifier;
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (double)cancellationDelay;
+ (void)initialize;
@property(retain) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) __weak IDESourceEditorExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)_updateCommandMenuItem:(id)arg1;
- (id)menuItemWithAction:(SEL)arg1;
- (id)identifierForAccessibility;
@property(readonly, copy) NSString *identifierForKeyBinding;
- (id)extensionIdentifier;
- (id)performCommandWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithCommandDefinition:(id)arg1 inExtension:(id)arg2;

@end

