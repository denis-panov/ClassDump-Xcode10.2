//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderCore/IDEIntentBuilderIntentParameterType-Protocol.h>
#import <IDEIntentBuilderCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IDEIntentBuilderIntentParameterType : NSObject <NSCopying, IDEIntentBuilderIntentParameterType>
{
    NSMutableDictionary *_typeNameForSourceLanguageDictionary;
    NSMutableDictionary *_collectionTypeNameForSourceLanguageDictionary;
    NSMutableDictionary *_propertyAttributesForSourceLanguageDictionary;
    NSMutableDictionary *_collectionPropertyAttributesForSourceLanguageDictionary;
    NSMutableDictionary *_importStatementForSourceLanguageDictionary;
    NSMutableDictionary *_optionalForSourceLanguageDictionary;
    NSMutableDictionary *_collectionOptionalForSourceLanguageDictionary;
    BOOL _isDefault;
    BOOL _isHidden;
    BOOL _supportsMultipleValues;
    NSString *_name;
}

+ (id)parameterTypeWithName:(id)arg1;
+ (id)supportedTypes;
+ (id)separatorType;
+ (id)defaultType;
@property(nonatomic, setter=_setSupportsMultipleValues:) BOOL supportsMultipleValues; // @synthesize supportsMultipleValues=_supportsMultipleValues;
@property(nonatomic, setter=_setHidden:) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic, setter=_setDefault:) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithName:(id)arg1;
- (BOOL)isCollectionOptionalForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (BOOL)isOptionalForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (id)importStatementForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (id)collectionPropertyAttributesForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (id)propertyAttributesForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (id)collectionTypeNameForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (id)typeNameForSourceLanguage:(unsigned long long)arg1 intentGroupItem:(id)arg2;
- (void)_setCollectionOptional:(BOOL)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setOptional:(BOOL)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setImportStatement:(id)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setCollectionPropertyAttributes:(id)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setPropertyAttributes:(id)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setCollectionTypeName:(id)arg1 forSourceLanguage:(unsigned long long)arg2;
- (void)_setTypeName:(id)arg1 forSourceLanguage:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

