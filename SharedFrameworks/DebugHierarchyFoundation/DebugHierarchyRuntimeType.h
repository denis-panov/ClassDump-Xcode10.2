//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;

@interface DebugHierarchyRuntimeType : NSObject
{
    NSString *_name;
    NSString *_moduleName;
    DebugHierarchyRuntimeType *_parentType;
    NSSet *_subtypes;
    NSMutableDictionary *_instanceProperties;
    NSString *_childGroupingID;
    NSArray *_additionalGroupingIDs;
}

+ (id)typeWithName:(id)arg1;
+ (id)typeWithDictionaryRepresentation:(id)arg1;
@property(retain) NSArray *additionalGroupingIDs; // @synthesize additionalGroupingIDs=_additionalGroupingIDs;
@property(retain) NSString *childGroupingID; // @synthesize childGroupingID=_childGroupingID;
@property(retain) NSSet *subtypes; // @synthesize subtypes=_subtypes;
@property __weak DebugHierarchyRuntimeType *parentType; // @synthesize parentType=_parentType;
@property(retain) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly) long long sourceLanguage;
- (void)addInstanceProperty:(id)arg1;
@property(readonly) NSMutableDictionary *instanceProperties; // @synthesize instanceProperties=_instanceProperties;
- (id)closestTypeVendingAChildGroupingID;
- (id)namesOfInheritanceChain;
- (id)propertyWithName:(id)arg1;
- (BOOL)isKindOfTypeWithName:(id)arg1;
- (void)addSubtype:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

