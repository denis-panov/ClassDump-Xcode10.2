//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorViewController.h>

#import <IDEIntentBuilderEditor/DVTOutlineViewDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSOutlineViewDataSource-Protocol.h>

@class DVTBorderedView, DVTEmptyContentPlaceholder, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTSearchField, IDEIntentBuilderIndentationAdjustingOutlineView, IDEIntentBuilderModel, NSString;

@interface IDEIntentBuilderEditorSourceListViewController : IDEIntentBuilderEditorViewController <DVTOutlineViewDelegate, NSOutlineViewDataSource>
{
    NSString *_filterText;
    IDEIntentBuilderModel *_systemIntentsModel;
    IDEIntentBuilderIndentationAdjustingOutlineView *_sourceListOutlineView;
    DVTBorderedView *_borderedView;
    DVTSearchField *_searchField;
    DVTBorderedView *_searchBorderedView;
    DVTGradientImagePopUpButton *_addButton;
    DVTGradientImageButton *_removeButton;
    DVTEmptyContentPlaceholder *_placeholderView;
}

@property __weak DVTEmptyContentPlaceholder *placeholderView; // @synthesize placeholderView=_placeholderView;
@property __weak DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property __weak DVTGradientImagePopUpButton *addButton; // @synthesize addButton=_addButton;
@property __weak DVTBorderedView *searchBorderedView; // @synthesize searchBorderedView=_searchBorderedView;
@property __weak DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak IDEIntentBuilderIndentationAdjustingOutlineView *sourceListOutlineView; // @synthesize sourceListOutlineView=_sourceListOutlineView;
- (void).cxx_destruct;
- (void)_removeButtonPressed:(id)arg1;
- (void)_updateFilter:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (double)outlineView:(id)arg1 indentationAdjustmentForRow:(unsigned long long)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)_removeSelectedItem;
- (void)_updateSelectionInSourceListOutlineView;
- (void)_reloadData;
- (void)_unbindChildrenForItem:(id)arg1;
- (id)_childrenForItem:(id)arg1;
- (void)selectionDidChange;
- (void)modelDidChange;
- (void)primitiveInvalidate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)takeFocus;
- (void)_setupSearchField;
- (void)_setupPlaceholderView;
- (void)_setupFilterBar;
- (void)_setupBorderedView;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)startEditing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

