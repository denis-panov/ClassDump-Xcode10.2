//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebugHierarchyFoundation/DebugHierarchyAbstractRequestAction.h>

#import <DebugHierarchyFoundation/DebugHierarchyRequestObjectAction-Protocol.h>

@class NSArray, NSString;

@interface DebugHierarchyPropertyAction : DebugHierarchyAbstractRequestAction <DebugHierarchyRequestObjectAction>
{
    NSArray *_objectIdentifiers;
    BOOL _objectIdentifiersAreExclusive;
    NSArray *_propertyNames;
    BOOL _propertyNamesAreExclusive;
    NSArray *_types;
    BOOL _typesAreExclusive;
    NSArray *_exactTypes;
    BOOL _exactTypesAreExclusive;
    long long _visibility;
    long long _options;
    long long _optionsComparisonStyle;
}

@property long long optionsComparisonStyle; // @synthesize optionsComparisonStyle=_optionsComparisonStyle;
@property long long options; // @synthesize options=_options;
@property long long visibility; // @synthesize visibility=_visibility;
@property BOOL exactTypesAreExclusive; // @synthesize exactTypesAreExclusive=_exactTypesAreExclusive;
@property(retain) NSArray *exactTypes; // @synthesize exactTypes=_exactTypes;
@property BOOL typesAreExclusive; // @synthesize typesAreExclusive=_typesAreExclusive;
@property(retain) NSArray *types; // @synthesize types=_types;
@property BOOL propertyNamesAreExclusive; // @synthesize propertyNamesAreExclusive=_propertyNamesAreExclusive;
@property(retain) NSArray *propertyNames; // @synthesize propertyNames=_propertyNames;
@property BOOL objectIdentifiersAreExclusive; // @synthesize objectIdentifiersAreExclusive=_objectIdentifiersAreExclusive;
@property(retain) NSArray *objectIdentifiers; // @synthesize objectIdentifiers=_objectIdentifiers;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)_fetchValuesForPropertiesWithNames:(id)arg1 onObject:(id)arg2 inContext:(id)arg3;
- (BOOL)_isTargetingProperty:(id)arg1;
- (BOOL)isTargetingObject:(id)arg1;
- (BOOL)targetsObjectIdentifiers:(id *)arg1;
- (void)performInContext:(id)arg1 withObject:(id)arg2;
- (id)keysToArchiveViaKVC;
- (void)setOptions:(long long)arg1 comparisonStyle:(long long)arg2;
- (void)setPropertyNames:(id)arg1 exlusive:(BOOL)arg2;
- (void)setExactTypes:(id)arg1 exlusive:(BOOL)arg2;
- (void)setTypes:(id)arg1 exlusive:(BOOL)arg2;
- (void)setObjectIdentifiers:(id)arg1 exlusive:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

