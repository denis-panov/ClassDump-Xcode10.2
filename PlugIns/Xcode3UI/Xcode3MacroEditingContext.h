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

@class DVTStackBacktrace, NSMutableArray, NSSet, NSString;

@interface Xcode3MacroEditingContext : NSObject <DVTInvalidation>
{
    NSMutableArray *_observerReferences;
    NSSet *propertyInfoContexts;
}

+ (void)initialize;
+ (id)conditionParametersForPropertyNamed:(id)arg1 inPropertyDomain:(id)arg2;
+ (id)propertyDefinitionForMacroName:(id)arg1 inPropertyDomain:(id)arg2;
+ (id)propertyDefinitionsInPropertyDomain:(id)arg1;
+ (id)_macroDefinitionTableForPropertyInfoContext:(id)arg1 atInspectionLevel:(int)arg2;
+ (id)newWithPropertyInfoContext:(id)arg1;
+ (id)newWithPropertyInfoContexts:(id)arg1;
+ (id)multipleValuesPlaceholder;
@property(copy) NSSet *propertyInfoContexts; // @synthesize propertyInfoContexts;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *description;
- (id)propertyDefinitionsForMacroName:(id)arg1;
- (id)allPropertyDefinitionsAcrossAllDomains;
- (id)propertyDomains;
- (BOOL)hasNonEmptyTablesAtInspectionLevel:(int)arg1;
- (id)platformSpecificArchitectures;
- (id)allMacroNamesInTableAtInspectionLevel:(int)arg1;
- (id)allMacroNamesInAllTables;
- (id)conditionSetsForMacroName:(id)arg1;
- (void)removeMacroName:(id)arg1 conditionSet:(id)arg2;
- (void)setValue:(id)arg1 forMacroName:(id)arg2 conditionSet:(id)arg3;
- (id)evaluatedStringValueForString:(id)arg1 withConditionSet:(id)arg2;
- (id)evaluatedStringValueForMacroNamed:(id)arg1 withConditionSet:(id)arg2;
- (id)valueForMacroNamed:(id)arg1 conditionSet:(id)arg2 atInspectionLevel:(int)arg3;
- (id)valueForMacroNamed:(id)arg1 conditionSet:(id)arg2;
@property(readonly) NSString *configurationName;
- (id)copyWithOnlyDefaultsLevelSettings;
- (id)initWithPropertyInfoContexts:(id)arg1;
- (void)_startObserving;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

