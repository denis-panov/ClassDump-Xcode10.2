//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <InterfaceBuilderKit/NSCoding-Protocol.h>
#import <InterfaceBuilderKit/NSCopying-Protocol.h>
#import <InterfaceBuilderKit/NSMutableCopying-Protocol.h>

@class IBClassDescriptionSource, NSMutableDictionary, NSString;

@interface IBPartialClassDescription : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString *className;
    NSString *superclassName;
    NSMutableDictionary *actionInfosByName;
    NSMutableDictionary *toOneOutletInfosByName;
    NSMutableDictionary *toManyOutletInfosByName;
    IBClassDescriptionSource *sourceIdentifier;
    long long userVisibilityLevel;
}

+ (id)descriptionWithClassName:(id)arg1;
+ (id)userDescriptionWithClassName:(id)arg1;
- (id)relationshipInfoForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)typeForToManyOutlet:(id)arg1;
- (id)typeForToOneOutlet:(id)arg1;
- (id)typeForAction:(id)arg1;
- (id)toManyOutletNames;
- (id)toOneOutletNames;
- (id)actionNames;
- (BOOL)describesToManyOutlet:(id)arg1;
- (BOOL)describesToOneOutlet:(id)arg1;
- (BOOL)describesAction:(id)arg1;
- (long long)numberOfRelationsOfRelationshipType:(long long)arg1;
- (id)relationshipInfosOfRelationshipType:(long long)arg1;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (BOOL)describesNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2;
- (id)dictionaryForRelationInformationOfType:(long long)arg1;
- (long long)userVisibilityLevel;
- (id)projectRelativeInterfaceFile;
- (id)description;
- (BOOL)isCategory;
- (id)sourceIdentifier;
- (id)className;
- (id)superclassName;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStaticDescription:(id)arg1 andSourceIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 andSourceIdentifier:(id)arg2;
- (id)initWithName:(id)arg1 superclass:(id)arg2 actions:(id)arg3 toOneOutlets:(id)arg4 toManyOutlets:(id)arg5 userVisibilityLevel:(long long)arg6 andSourceIdentifier:(id)arg7;
- (id)partialClassDescriptionBySettingSourceIdentifier:(id)arg1;

@end

