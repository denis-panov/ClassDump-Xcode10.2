//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBICCatalogItemInspector.h>

@interface IBICAssetWithSlottedChildrenInspector : IBICCatalogItemInspector
{
}

+ (void)installKVODependencyForSuggestionSet:(id)arg1;
+ (void)installGetterForSuggestionSet:(id)arg1;
+ (void)installSetterForSuggestionSet:(id)arg1;
+ (id)propertyNameForPresentingValueForSuggestionSet:(id)arg1;
+ (void)installKVODependencyForSuggestionSetGroup:(id)arg1;
+ (void)installGetterForSuggestionSetGroup:(id)arg1;
+ (void)installSetterForSuggestionSetGroup:(id)arg1;
+ (id)propertyNameForPresentingValueForSuggestionSetGroup:(id)arg1;
+ (Class)catalogItemSlotClass;
+ (Class)catalogSetClass;
- (void)generateCompressionOptionWithBuilder:(id)arg1;
- (id)sliceElement;
- (void)addPostItemNameContent:(id)arg1;
- (void)addPostSuggestionSetContent:(id)arg1;
- (void)generateSuggestionSetGroups:(id)arg1 builder:(id)arg2;
- (void)generateSuggestionSetGroupSections:(id)arg1 builder:(id)arg2;
- (void)generateSuggestionGroup:(id)arg1 builder:(id)arg2;

@end

