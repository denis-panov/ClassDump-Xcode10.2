//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString, NSTableColumn, Xcode3BuildSettingsEditor;

@interface Xcode3BuildPropertyColumnContext : NSObject <DVTInvalidation>
{
    Xcode3BuildSettingsEditor *_editor;
    NSTableColumn *_tableColumn;
    BOOL _editable;
    BOOL _alwaysDisplayDefinitions;
    BOOL _subjectToRowOperations;
    BOOL _showOnlyDefiningValue;
    BOOL _resolved;
    BOOL _neverBold;
}

+ (void)initialize;
@property BOOL neverBold; // @synthesize neverBold=_neverBold;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property BOOL showOnlyDefiningValue; // @synthesize showOnlyDefiningValue=_showOnlyDefiningValue;
@property BOOL subjectToRowOperations; // @synthesize subjectToRowOperations=_subjectToRowOperations;
@property BOOL alwaysDisplayDefinitions; // @synthesize alwaysDisplayDefinitions=_alwaysDisplayDefinitions;
@property BOOL editable; // @synthesize editable=_editable;
@property(retain) NSTableColumn *tableColumn; // @synthesize tableColumn=_tableColumn;
@property(retain) Xcode3BuildSettingsEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (id)allPropertyNamesInAllDictionaries;
- (id)userDefinedNames;
- (id)customTitleForName:(id)arg1;
- (void)configureColumnTitleAndImage;
- (BOOL)dictionariesAtConfigurationFileLevel;
- (BOOL)hasDefinitionForBasicModeForRowContext:(id)arg1;
- (BOOL)hasDefiningValueForRowContext:(id)arg1;
- (id)_macroEditingContextForConfiguration:(id)arg1;
- (id)_macroEditingContextForRowContext:(id)arg1;
- (void)enumerateRowsOfSummaryRowContext:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)conditionFlavorsForRowContext:(id)arg1;
- (id)platformSpecificArchitecturesForConfiguration:(id)arg1;
- (id)platformSpecificArchitecturesForRowContext:(id)arg1;
- (id)conditionSetsForRowContext:(id)arg1;
- (BOOL)_hasSubsettingsForConditionSetsForRowContext:(id)arg1;
- (void)setStringValue:(id)arg1 forRowContext:(id)arg2;
- (void)removePropertyForRowContext:(id)arg1;
- (id)expandedValueForString:(id)arg1 forRowContext:(id)arg2 overridingConditionSet:(id)arg3;
- (id)expandedValueForString:(id)arg1 forRowContext:(id)arg2;
- (id)expandedPropertyValueForRowContext:(id)arg1;
- (id)propertyDefinitionValueForRowContext:(id)arg1;
- (BOOL)allowsPropertyConditionFlavor:(id)arg1 forRowContext:(id)arg2;
- (BOOL)hasAssignmentForRowContext:(id)arg1;
- (BOOL)hasChildPropertiesForRowContext:(id)arg1;
- (void)dealloc;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

