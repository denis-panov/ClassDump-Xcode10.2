//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelFoundation/XDPMProperty.h>

@interface XDPMFetchedProperty : XDPMProperty
{
}

- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (id)possibleDestinationEntities;
- (id)possibleValuesForSharedKeyOne;
- (void)setSharedKeyOne:(id)arg1;
- (id)sharedKeyOne;
- (BOOL)isEditableForTransientFlag;
- (BOOL)isEditableForOptionalFlag;
- (void)setIsOptional:(BOOL)arg1;
- (BOOL)isOptional;
- (void)setIsTransient:(BOOL)arg1;
- (BOOL)isTransient;
- (void)setFetchRequest:(id)arg1;
- (id)fetchRequest;
- (void)setName:(id)arg1;
- (id)propertyKind;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

