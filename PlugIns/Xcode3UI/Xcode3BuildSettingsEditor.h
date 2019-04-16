//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/DVTDelayedMenuButtonDelegate-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>
#import <Xcode3UI/NSTableViewDelegate-Protocol.h>
#import <Xcode3UI/XCEDataNodeAdapterP-Protocol.h>
#import <Xcode3UI/XCEDataRootAdapterP-Protocol.h>
#import <Xcode3UI/Xcode3SourceListItemEditor-Protocol.h>

@class DVTBorderedView, DVTGradientImagePopUpButton, DVTMacroDefinitionConditionSet, DVTPerformanceMetric, DVTSearchField, DVTSourceExpression, NSArray, NSButton, NSMenu, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOutlineView, NSScrollView, NSString, PBXProject, XCPropertyDefinition, Xcode3BuildPropertyEditor, Xcode3BuildPropertyOutlineView, Xcode3ConfigurableDataSource, Xcode3ProjectEditor;

@interface Xcode3BuildSettingsEditor : IDEViewController <Xcode3SourceListItemEditor, NSTableViewDataSource, NSTableViewDelegate, XCEDataRootAdapterP, XCEDataNodeAdapterP, DVTDelayedMenuButtonDelegate>
{
    Xcode3ProjectEditor *_projectEditor;
    NSMutableArray *_configurationFileList;
    NSMutableDictionary *_adapterForUIType;
    BOOL _needsCompleteUpdate;
    BOOL _firstUpdateAfterViewDidInstall;
    NSString *_preselectedName;
    XCPropertyDefinition *_preselectedDefinition;
    NSString *_preselectedConfiguration;
    DVTMacroDefinitionConditionSet *_preselectedConditionSet;
    NSString *_preselectedEditColumnId;
    long long _disableUserTrigger;
    NSArray *_inspectedBlueprints;
    PBXProject *_cachedProject;
    NSArray *_cachedTargets;
    NSArray *_cachedBuildConfigurationNames;
    NSArray *_cachedBuildPropertySpecifications;
    NSMutableDictionary *_platformSpecificArchitecturesPerConfiguration;
    NSMutableDictionary *_platformSpecificArchitecturesIntersectionPerConfiguration;
    NSArray *_cachedBuildPropertyDefinitionNames;
    NSArray *_cachedUserDefinedNames;
    int _editorMode;
    int _displayMode;
    int _nameDisplayMode;
    int _valueDisplayMode;
    NSString *_searchString;
    int _searchScope;
    NSMutableSet *_propertyDefinitionNamesNeedingExpand;
    DVTSourceExpression *_selectedExpression;
    NSString *_buildPropertyInfoString;
    NSString *_buildPropertyName;
    NSString *_buildPropertyLocalizedName;
    Xcode3ConfigurableDataSource *_outlineViewDataSource;
    NSButton *_editorModeButton_basic;
    NSButton *_editorModeButton_customized;
    NSButton *_editorModeButton_all;
    NSButton *_displayModeButton_combined;
    NSButton *_displayModeButton_separated;
    DVTGradientImagePopUpButton *_addButton;
    DVTSearchField *_searchField;
    DVTBorderedView *_navigationBarBorderView;
    Xcode3BuildPropertyOutlineView *_buildPropertiesOutlineView;
    NSMutableDictionary *_columnContextForTableColumnIdentifier;
    NSMutableArray *_columnContexts;
    Xcode3BuildPropertyEditor *_propertyEditor;
    NSMenu *_addBuildPropertyMenu;
    NSMenu *_toggleBuildPropertyDisplayModeMenu;
    DVTBorderedView *_borderedView;
    DVTSourceExpression *_mouseOverExpression;
    DVTPerformanceMetric *_metric;
    NSString *_buildPropertyTypeLocalizedName;
    NSScrollView *_buildSettingsScrollView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (BOOL)canInspectBlueprint:(id)arg1;
+ (id)localizedSourceListItemEditorName;
+ (id)keyPathsForValuesAffectingBuildPropertyValueDisplayModeToggleButtonTitle;
+ (id)keyPathsForValuesAffectingBuildPropertyNameDisplayModeToggleButtonTitle;
+ (id)keyPathsForValuesAffectingBuildPropertyValueColumnTitle;
+ (id)keyPathsForValuesAffectingBuildPropertyNameColumnTitle;
+ (id)keyPathsForValuesAffectingUserDefinedNames;
+ (id)keyPathsForValuesAffectingPropertyDefinitionNames;
+ (id)keyPathsForValuesAffectingBuildPropertySpecifications;
+ (id)keyPathsForValuesAffectingBuildConfigurationNames;
+ (id)keyPathsForValuesAffectingBuildConfigurations;
+ (id)keyPathsForValuesAffectingTargets;
+ (id)keyPathsForValuesAffectingProject;
+ (int)_defaultSearchScope;
+ (void)_setDefaultSearchScope:(int)arg1;
+ (int)_defaultBuildPropertyValueDisplayMode;
+ (void)_setDefaultBuildPropertyValueDisplayMode:(int)arg1;
+ (int)_defaultBuildPropertyNameDisplayMode;
+ (void)_setDefaultBuildPropertyNameDisplayMode:(int)arg1;
+ (int)_defaultBuildSettingsEditorDisplayMode;
+ (void)_setDefaultBuildSettingsEditorDisplayMode:(int)arg1;
+ (int)_defaultBuildSettingsEditorMode;
+ (void)_setDefaultBuildSettingsEditorMode:(int)arg1;
+ (void)initialize;
@property(retain) NSScrollView *buildSettingsScrollView; // @synthesize buildSettingsScrollView=_buildSettingsScrollView;
@property(nonatomic) BOOL needsCompleteUpdate; // @synthesize needsCompleteUpdate=_needsCompleteUpdate;
@property(readonly) NSOutlineView *buildPropertiesOutlineView; // @synthesize buildPropertiesOutlineView=_buildPropertiesOutlineView;
@property(nonatomic) int searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(nonatomic) int buildPropertyValueDisplayMode; // @synthesize buildPropertyValueDisplayMode=_valueDisplayMode;
@property(nonatomic) int buildPropertyNameDisplayMode; // @synthesize buildPropertyNameDisplayMode=_nameDisplayMode;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) int editorMode; // @synthesize editorMode=_editorMode;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_cachedTargets;
@property(retain) PBXProject *project; // @synthesize project=_cachedProject;
@property(copy, nonatomic) NSArray *inspectedBlueprints; // @synthesize inspectedBlueprints=_inspectedBlueprints;
@property(retain) Xcode3BuildPropertyEditor *propertyEditor; // @synthesize propertyEditor=_propertyEditor;
@property(copy) NSString *buildPropertyInfoString; // @synthesize buildPropertyInfoString=_buildPropertyInfoString;
@property(copy) NSString *buildPropertyLocalizedName; // @synthesize buildPropertyLocalizedName=_buildPropertyLocalizedName;
@property(copy) NSString *buildPropertyName; // @synthesize buildPropertyName=_buildPropertyName;
@property(copy) NSString *buildPropertyTypeLocalizedName; // @synthesize buildPropertyTypeLocalizedName=_buildPropertyTypeLocalizedName;
@property(retain, nonatomic) DVTSourceExpression *mouseOverExpression; // @synthesize mouseOverExpression=_mouseOverExpression;
@property(retain, nonatomic) DVTSourceExpression *selectedExpression; // @synthesize selectedExpression=_selectedExpression;
@property(retain) Xcode3ProjectEditor *projectEditor; // @synthesize projectEditor=_projectEditor;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_buildPropertiesOutlineViewSelectionDidChange:(id)arg1;
- (void)showQuickHelpForCurrentBuildSetting:(id)arg1;
@property(readonly) struct CGRect currentSelectionFrame;
- (void)updateSelectedExpression;
- (id)_commonCompilerSpecForInspectedBlueprints;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (BOOL)_modifyBuildPropertiesUsingPasteboard:(id)arg1;
- (BOOL)_parseThreePartString:(id)arg1 firstPart:(id)arg2 secondPart:(id)arg3 remainder:(id *)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)addSetting:(id)arg1 configuration:(id)arg2 conditionString:(id)arg3 value:(id)arg4 usingDictionary:(id)arg5;
- (BOOL)outlineView:(id)arg1 shouldMouseHoverForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)projectCanClose:(id)arg1;
- (BOOL)viewCanBeRemoved;
- (void)userTriggeredRebuild;
- (void)selectAnyPreselection;
- (void)preselectRowContext:(id)arg1 columnContext:(id)arg2;
- (void)preselectBuildSettingNamed:(id)arg1 withDefinition:(id)arg2 conditionSet:(id)arg3 editColumnId:(id)arg4;
- (struct NSObject *)adapterForUIType:(id)arg1;
- (BOOL)dataSource:(id)arg1 control:(id)arg2 didFailToFormatString:(id)arg3 errorDescription:(id)arg4;
- (BOOL)shouldExpandPropertyNamed:(id)arg1;
- (void)expandPropertyNamed:(id)arg1;
- (BOOL)propertyNameIsValidForNewSetting:(id)arg1;
- (void)_configurationNamesChangedInProject:(id)arg1;
- (void)dataSource:(id)arg1 outlineView:(id)arg2 sortDescriptorsDidChange:(id)arg3;
- (void)_alertWithErrorString:(id)arg1;
- (id)_targetForAction:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)Xcode3Support_unfoldAll:(id)arg1;
- (void)Xcode3Support_foldAll:(id)arg1;
- (void)Xcode3Support_fold:(id)arg1;
- (BOOL)_tryToUnfoldAll:(BOOL)arg1;
- (BOOL)_tryToFoldAll:(BOOL)arg1;
- (BOOL)_tryToFold:(BOOL)arg1;
- (void)removeBuildProperty:(id)arg1;
- (void)delete:(id)arg1;
- (void)editBuildProperty:(id)arg1;
- (void)addUserDefinedBuildProperty:(id)arg1;
- (void)addConditionalBuildProperty:(id)arg1;
- (void)addBuildProperty:(id)arg1;
- (void)cancelPendingEdits;
- (BOOL)confirmPendingEdits;
- (void)savePendingEdits:(id)arg1;
- (void)referenceWillBeRemovedFromProject:(id)arg1;
- (void)referenceWasAddedToProject:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)updateContentInset;
- (void)_verticallyCenterView:(id)arg1;
- (void)loadView;
- (void)_removeBuildPropertyStatusButtonAction:(id)arg1;
- (void)_addBuildPropertyStatusButtonAction:(id)arg1;
- (void)updateBuildPropertyAttributesFromDataNode:(id)arg1;
- (id)selectedConfigurationFile;
- (void)setSelectedConfigurationFile:(id)arg1;
- (id)configurationFileList;
- (void)_rebuildConfigurationFileList;
- (void)macroEditingContextChange:(id)arg1 inColumnContext:(id)arg2;
- (void)_setNeedsCompleteUpdate:(id)arg1;
- (void)_windowWillUpdate:(id)arg1;
- (void)updateForViewWillDraw;
- (void)_processCompleteUpdateIfNeeded;
- (void)rebuildOutlineUsingCache:(BOOL)arg1;
- (void)_restoreIntermediateState:(id)arg1;
- (id)_storeIntermediateState;
- (void)_invalidateColumnContexts;
- (void)addTableColumnFor:(id)arg1 withColumnContext:(id)arg2 identifierAddition:(id)arg3;
- (id)commonPlatformSpecificArchitecturesForConfiguration:(id)arg1;
- (id)platformSpecificArchitecturesForConfiguration:(id)arg1;
- (void)_computePlatformSpecificArchitectures;
- (void)_preselectAndScroll;
- (id)rootsFromBlueprintUsingCache:(BOOL)arg1;
- (id)_domainTitleForPropertyDomain:(id)arg1;
- (id)_categoryNameForCategory:(id)arg1 inDomain:(id)arg2;
- (BOOL)_comparePropertyDefinitionInTermsOfEditorRelatedProperties:(id)arg1 toPropertyDefinition:(id)arg2;
- (void)sortRoots:(id)arg1;
- (void)find:(id)arg1;
- (void)_searchFieldMenuItemAction:(id)arg1;
- (id)_searchFieldPlaceholderStringForSearchScope:(int)arg1;
- (void)toggleBuildPropertyValueDisplayMode:(id)arg1;
- (void)toggleBuildPropertyNameDisplayMode:(id)arg1;
@property(readonly) NSString *buildPropertyValueColumnTitle;
@property(readonly) NSString *buildPropertyNameColumnTitle;
- (id)_buildPropertyValueColumnTitleForDisplayMode:(int)arg1;
- (id)_buildPropertyNameColumnTitleForDisplayMode:(int)arg1;
@property(readonly, copy) NSString *buildPropertyValueDisplayModeToggleButtonTitle;
@property(readonly, copy) NSString *buildPropertyNameDisplayModeToggleButtonTitle;
- (void)_displayModeButtonAction:(id)arg1;
- (void)_editorModeButtonAction:(id)arg1;
- (void)_updateDisplayModeButtons;
- (void)_updateEditorModeButtons;
@property(copy) NSArray *userDefinedNames;
@property(copy) NSArray *buildPropertyDefinitionNames;
- (id)rowContextsPerConditionSetsForRowContext:(id)arg1;
- (id)rowContextsPerConfigurationForRowContext:(id)arg1;
- (id)firstEditableColumnContext;
@property(readonly) NSArray *columnContexts;
- (id)columnContextForColumn:(id)arg1;
@property(copy) NSArray *buildPropertySpecifications;
@property(copy) NSArray *buildConfigurationNames;
@property(readonly) NSArray *buildConfigurations;
- (id)_buildConfigurationListForInspectedBlueprint:(id)arg1;
- (void)currentInspectedItemsChanged;
- (void)primitiveInvalidate;
- (void)selectLocations:(id)arg1;
- (id)currentSelectedLocations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id inspectedBlueprint;
@property(readonly) Class superclass;

@end

