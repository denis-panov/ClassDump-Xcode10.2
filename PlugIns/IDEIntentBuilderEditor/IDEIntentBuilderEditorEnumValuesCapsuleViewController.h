//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleTableViewController.h>

#import <IDEIntentBuilderEditor/NSMenuDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, IDEIntentBuilderEditorImageButton, IDEIntentBuilderEnum, NSArrayController, NSString, NSTableView;

@interface IDEIntentBuilderEditorEnumValuesCapsuleViewController : IDEIntentBuilderEditorCapsuleTableViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate>
{
    DVTObservingToken *_contentArrayObservationToken;
    DVTObservingToken *_selectionObserver;
    NSTableView *_tableView;
    IDEIntentBuilderEditorImageButton *_addButton;
    IDEIntentBuilderEditorImageButton *_deleteButton;
    NSArrayController *_contentArrayController;
    IDEIntentBuilderEnum *_selectedEnum;
}

@property(retain) IDEIntentBuilderEnum *selectedEnum; // @synthesize selectedEnum=_selectedEnum;
@property __weak NSArrayController *contentArrayController; // @synthesize contentArrayController=_contentArrayController;
@property __weak IDEIntentBuilderEditorImageButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property __weak IDEIntentBuilderEditorImageButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)_resize;
- (void)_bindContentViewController;
- (void)_setupBindings;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)selectedObjects;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

