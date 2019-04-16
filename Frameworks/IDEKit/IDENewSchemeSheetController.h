//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class IDEWorkspace, NSButton, NSPopUpButton, NSString, NSTextField, NSWindow;
@protocol IDEClientTrackingToken;

@interface IDENewSchemeSheetController : IDEViewController
{
    NSWindow *_sheetWindow;
    NSPopUpButton *_blueprintPopUp;
    NSTextField *_nameField;
    NSButton *_okButton;
    NSWindow *_hostWindow;
    NSWindow *_workspaceWindow;
    IDEWorkspace *_workspace;
    BOOL _didSheetEnd;
    BOOL _userHasEditedName;
    NSString *_name;
    id <IDEClientTrackingToken> _clientTrackingToken;
}

+ (BOOL)automaticallyNotifiesObserversForName;
+ (void)runSheetForWindow:(id)arg1 workspaceWindow:(id)arg2;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)filterItems:(id)arg1 inMenu:(id)arg2 forSearchString:(id)arg3;
- (void)windowDidResize:(id)arg1;
- (void)blueprintPopUpAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)_setName:(id)arg1;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)_newSchemeSheetDidEndWithReturnCode:(long long)arg1;
- (void)_beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2;
- (void)_updateOKButtonEnabledState;
- (void)_populateBlueprintPopUp;
- (id)_menuImageForImage:(id)arg1;

@end

