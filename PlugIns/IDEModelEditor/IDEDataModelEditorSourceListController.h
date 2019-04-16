//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/IDEDMEditorSourceListController.h>

#import <IDEModelEditor/IDEDataModelEditorController-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEDMSourceListSection, IDEDataModelEditor, IDENavigatorStatusCell, NSString;

@interface IDEDataModelEditorSourceListController : IDEDMEditorSourceListController <IDEDataModelEditorController>
{
    IDENavigatorStatusCell *_sourceListStatusBadgeCell;
    DVTNotificationToken *_findObservationToken;
    DVTObservingToken *_entitiesHierarchyObservationToken;
    DVTObservingToken *_entityObservationToken;
    DVTObservingToken *_fetchRequestObservationToken;
    DVTObservingToken *_configurationObservationToken;
    IDEDMSourceListSection *_entitiesSection;
    IDEDMSourceListSection *_fetchRequestsSection;
    IDEDMSourceListSection *_configurationsSection;
    IDEDMSourceListSection *_entitiesHierarchySection;
}

+ (id)keyPathsForValuesAffectingShownSourceListSectionIdentifiers;
+ (id)keyPathsForValuesAffectingTreeControllerChildrenKeyPath;
+ (id)keyPathsForValuesAffectingSelectedHierarchyMode;
+ (id)keyPathsForValuesAffectingModel;
- (void).cxx_destruct;
- (double)outlineView:(id)arg1 indentationAdjustmentForRow:(unsigned long long)arg2;
- (BOOL)deleteTopLevelObjects:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (id)shownSourceListSectionIdentifiers;
- (id)treeControllerChildrenKeyPath;
- (void)selectModelObjects:(id)arg1;
@property(readonly) unsigned long long selectedHierarchyMode;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)setupSourceListAndCells;
- (void)setupContextualMenu;
- (id)identifier;
- (void)setupSourceListSections;
- (id)createSourceListSections;
- (id)model;
- (id)parentEditor;
- (id)nibName;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) IDEDataModelEditor *rootEditor;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

