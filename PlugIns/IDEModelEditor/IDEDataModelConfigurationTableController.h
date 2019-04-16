//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import <IDEModelEditor/IDECapsuleViewController-Protocol.h>
#import <IDEModelEditor/IDECapsuleViewDelegate-Protocol.h>
#import <IDEModelEditor/NSTableViewDelegate-Protocol.h>

@class DVTNotificationToken, IDEDataModelConfigurationEditor, NSArrayController, NSColor, NSImage, NSIndexSet, NSMapTable, NSString, XDTableView;

@interface IDEDataModelConfigurationTableController : IDEDMEditorController <NSTableViewDelegate, IDECapsuleViewController, IDECapsuleViewDelegate>
{
    NSArrayController *entitiesArrayController;
    NSArrayController *configurationsArrayController;
    XDTableView *tableView;
    NSMapTable *_tableColumnsByIdentifier;
    NSIndexSet *_selectedInnerEntityIndexes;
    DVTNotificationToken *_findObservationToken;
    IDEDataModelConfigurationEditor *_parentEditor;
}

+ (id)keyPathsForValuesAffectingSelectedConfigurationIndexes;
+ (id)keyPathsForValuesAffectingSelectedConfigurations;
+ (id)keyPathsForValuesAffectingSelectedInnerEntities;
+ (id)keyPathsForValuesAffectingSelection;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCanRemoveItems;
@property(retain) IDEDataModelConfigurationEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
@property(copy) NSIndexSet *selectedInnerEntityIndexes; // @synthesize selectedInnerEntityIndexes=_selectedInnerEntityIndexes;
- (void).cxx_destruct;
- (void)numberOfEntitiesShownChanged;
- (void)_resize;
- (void)selectModelObjects:(id)arg1;
- (void)setSelectedConfigurationIndexes:(id)arg1;
- (id)selectedConfigurationIndexes;
- (id)selectedConfigurations;
- (id)selectedInnerEntities;
- (id)selection;
- (void)tableView:(id)arg1 didRemoveTableColumn:(id)arg2;
- (void)_enterMappedColumn:(id)arg1 tableView:(id)arg2;
- (id)defaultTableColumnIdentifiersForTableView:(id)arg1;
- (id)allowedTableColumnIdentifiersForTableView:(id)arg1;
- (id)tableView:(id)arg1 columnForTableColumnIdentifier:(id)arg2;
- (id)tableView:(id)arg1 menuTitleForTableColumnIdentifier:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)removeItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setTableViewState:(id)arg1;
- (id)tableViewState;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_setUpCellsAndColumns;
- (void)takeFocus;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
@property(readonly) BOOL canRename;
- (BOOL)canDelete;
@property BOOL canAddItems;
@property BOOL canRemoveItems;
- (id)nibBundle;
- (void)delete:(id)arg1;
- (id)identifier;
- (id)nibName;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

