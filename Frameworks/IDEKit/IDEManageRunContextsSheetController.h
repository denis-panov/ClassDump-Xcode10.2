//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTTableView, IDEControlGroup, IDEWorkspace, NSArrayController, NSButton, NSWindow;
@protocol IDEClientTrackingToken;

@interface IDEManageRunContextsSheetController : IDEViewController
{
    NSWindow *_sheetWindow;
    DVTBorderedView *_tableBorderView;
    NSArrayController *_runContextsArrayController;
    NSArrayController *_customDataStoresArrayController;
    DVTTableView *_tableView;
    NSButton *_editButton;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    IDEControlGroup *_controlGroup;
    NSWindow *_hostWindow;
    IDEWorkspace *_workspace;
    BOOL _didSheetEnd;
    DVTObservingToken *_selectionObserverToken;
    id <IDEClientTrackingToken> _clientTrackingToken;
}

+ (id)keyPathsForValuesAffectingShouldAutocreateSchemes;
+ (void)runSheetForWindow:(id)arg1;
- (void).cxx_destruct;
- (void)windowDidResize:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)checkToggleAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)editAction:(id)arg1;
- (void)_updateEditEnabledState;
- (void)exportAction:(id)arg1;
- (void)importAction:(id)arg1;
- (void)duplicateAction:(id)arg1;
- (void)newSchemeAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)sheetOKAction:(id)arg1;
- (void)autocreateSchemesAction:(id)arg1;
- (void)cancelOperation:(id)arg1;
@property BOOL shouldAutocreateSchemes;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)_manageRunContextsSheetDidEndWithReturnCode:(long long)arg1;
- (void)_beginSheetForWindow:(id)arg1;
- (void)loadView;

@end

