//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelFoundation/CDMProperty.h>

#import <IDEModelFoundation/IDEInspectorMatching-Protocol.h>

@class CDMFetchRequest, NSString;

@interface CDMFetchedProperty : CDMProperty <IDEInspectorMatching>
{
    CDMFetchRequest *_fetchRequest;
}

- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
- (id)xmlElementFetchRequest;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)cascadeChangesToLegacyFetchedProperty:(id)arg1 givenModernToLegacyEntityMapping:(id)arg2;
- (id)initWithLegacyFetchedProperty:(id)arg1 andEntityMapping:(id)arg2 belongingToEntity:(id)arg3 inModel:(id)arg4;
- (id)initForEntity:(id)arg1 inModel:(id)arg2;
- (id)initInModel:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) CDMFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

