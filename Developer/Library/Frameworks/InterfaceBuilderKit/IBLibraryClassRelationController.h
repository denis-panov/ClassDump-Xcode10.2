//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBLibraryClassDetailController.h>

#import <InterfaceBuilderKit/IBTextChangePostingTableViewDataSource-Protocol.h>
#import <InterfaceBuilderKit/IBTextChangePostingTableViewDelegate-Protocol.h>

@class IBAutoCompletingComboBoxDataSource, IBIconAndTextCell, IBTextChangePostingTableView, NSButton, NSComboBoxCell, NSMutableArray, NSSet, NSString, NSTextField, NSTextFieldCell, NSTimer;

@interface IBLibraryClassRelationController : IBLibraryClassDetailController <IBTextChangePostingTableViewDelegate, IBTextChangePostingTableViewDataSource>
{
    IBTextChangePostingTableView *relationTableView;
    NSButton *addRelationButton;
    NSButton *removeRelationButton;
    NSTextField *statusTextField;
    NSComboBoxCell *comboBoxDataCell;
    NSTextFieldCell *textFieldDataCell;
    IBIconAndTextCell *iconAndTextCell;
    NSString *inspectedClassName;
    NSString *relationNameToSelectAfterRefresh;
    NSString *columnIDToEditAfterRefresh;
    NSSet *previousSelection;
    NSString *previousClassName;
    NSMutableArray *classRelationships;
    BOOL refreshingRelations;
    IBAutoCompletingComboBoxDataSource *typeComboBoxDataSource;
    NSTimer *completionTimer;
    long long nextInsertionIndex;
}

@property(retain, nonatomic) IBIconAndTextCell *iconAndTextCell; // @synthesize iconAndTextCell;
@property(retain, nonatomic) NSTextFieldCell *textFieldDataCell; // @synthesize textFieldDataCell;
@property(retain, nonatomic) NSComboBoxCell *comboBoxDataCell; // @synthesize comboBoxDataCell;
@property(retain, nonatomic) NSTextField *statusTextField; // @synthesize statusTextField;
@property(retain, nonatomic) NSButton *removeRelationButton; // @synthesize removeRelationButton;
@property(retain, nonatomic) NSButton *addRelationButton; // @synthesize addRelationButton;
@property(retain, nonatomic) IBTextChangePostingTableView *relationTableView; // @synthesize relationTableView;
- (id)viewNibName;
- (void)control:(id)arg1 textDidEndEditing:(id)arg2;
- (void)control:(id)arg1 textDidChange:(id)arg2;
- (struct _NSRange)tableView:(id)arg1 textView:(id)arg2 willChangeSelectionFromCharacterRange:(struct _NSRange)arg3 toCharacterRange:(struct _NSRange)arg4;
- (BOOL)tableView:(id)arg1 textView:(id)arg2 shouldChangeTextInRange:(struct _NSRange)arg3 replacementString:(id)arg4;
- (void)doCompletion:(id)arg1;
- (void)startCompletionTimer:(id)arg1;
- (void)stopCompletionTimer;
- (id)tableView:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (long long)relationshipType;
- (id)generateUnusedRelationshipName;
- (void)removeSelectedRelations:(id)arg1;
- (void)addRelation:(id)arg1;
- (void)removeReferenceToSource:(id)arg1;
- (void)openSourceFileForSource:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)tableView:(id)arg1 canWriteRowsWithIndexesToPasteboard:(id)arg2;
- (BOOL)tableView:(id)arg1 canRemoveRowsWithIndexes:(id)arg2;
- (BOOL)tableView:(id)arg1 removeRowsWithIndexes:(id)arg2;
- (BOOL)removeRelationsAtIndexes:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)validateTableColumnEditing:(id)arg1 proposedValue:(id)arg2 error:(id *)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)objectValueByCorrectingCommonMistakes:(id)arg1;
- (BOOL)validateRelationName:(id)arg1 oldRelationName:(id)arg2 compositeDescription:(id)arg3 error:(id *)arg4;
- (BOOL)validateRelationType:(id)arg1 compositeDescription:(id)arg2 error:(id *)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)selectionIndexesForProposedSelection:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)applyNewUserDescription:(id)arg1 andSelectNamedRelation:(id)arg2 editColumnWithIdentifier:(id)arg3;
- (id)documentLocalDescriptionForMutating;
- (id)compositeDescription;
- (void)refresh;
- (void)refreshWithClassName:(id)arg1;
- (void)restoreEditingAndSelection;
- (void)setInspectedClassName:(id)arg1;
- (id)inspectedClassName;
- (void)setColumnIDToEditAfterRefresh:(id)arg1;
- (id)columnIDToEditAfterRefresh;
- (void)setRelationNameToSelectAfterRefresh:(id)arg1;
- (id)relationNameToSelectAfterRefresh;
- (void)setPreviousClassName:(id)arg1;
- (id)previousClassName;
- (void)setPreviousSelection:(id)arg1;
- (id)previousSelection;
- (void)refreshTableViewButtons;
- (id)defaultType;
- (long long)indexOfRelationWithName:(id)arg1;
- (id)selectedUserRelations;
- (id)selectedRelationshipNames;
- (id)selectedRelationships;
- (id)sourceForRelationItem:(id)arg1;
- (id)typeForRelation:(id)arg1;
- (id)nameForRelation:(id)arg1;
- (BOOL)isUserRelationItem:(id)arg1;
- (BOOL)isHeaderItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

