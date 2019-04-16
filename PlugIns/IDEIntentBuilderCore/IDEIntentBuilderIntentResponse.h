//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntentGroupItem.h>

#import <IDEIntentBuilderCore/IDEIntentBuilderDictionaryConvertible-Protocol.h>

@class IDEIntentBuilderIntent, NSArray, NSString;

@interface IDEIntentBuilderIntentResponse : IDEIntentBuilderIntentGroupItem <IDEIntentBuilderDictionaryConvertible>
{
    IDEIntentBuilderIntent *_intent;
    NSArray *_codes;
}

+ (id)defaultParameterName;
@property(copy, nonatomic, setter=_setCodes:) NSArray *codes; // @synthesize codes=_codes;
@property(nonatomic, setter=_setIntent:) __weak IDEIntentBuilderIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)_registerUndoBlockForFoundItem:(CDUnknownBlockType)arg1;
- (id)_defaultCodes;
- (id)keyPrefix;
- (void)primitiveInvalidate;
- (id)init;
- (id)codeWithName:(id)arg1;
- (id)codeWithIdentifier:(id)arg1;
- (id)group;
- (void)removeCode:(id)arg1;
- (void)addCode:(id)arg1;
- (id)_codegen_redefineCodeInitializerForSwift:(id)arg1;
- (id)_codegen_customInitializerParametersForSourceLanguage:(unsigned long long)arg1 code:(id)arg2;
- (id)_codegen_customInitializerForSourceLanguage:(unsigned long long)arg1 code:(id)arg2;
- (id)codegen_propertyImplementationsForSourceLanguage:(unsigned long long)arg1 readonly:(BOOL)arg2;
- (id)codegen_customInitializerImplementationsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_customInitializerDeclarationsForSourceLanguage:(unsigned long long)arg1;
- (id)codegen_customCodesForSourceLanguage:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
