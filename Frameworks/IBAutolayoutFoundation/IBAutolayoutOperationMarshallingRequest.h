//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBObjectBasedMarshallingRequest.h>

@class IBAutolayoutArbitrationUnit, IBAutolayoutArbitrationUnitSparseRepresentation;

@interface IBAutolayoutOperationMarshallingRequest : IBObjectBasedMarshallingRequest
{
    IBAutolayoutArbitrationUnitSparseRepresentation *_sparseRepresentation;
    IBAutolayoutArbitrationUnit *_arbitrationUnit;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 arbitrationUnit:(id)arg2;
@property(readonly, nonatomic) IBAutolayoutArbitrationUnit *arbitrationUnit; // @synthesize arbitrationUnit=_arbitrationUnit;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 arbitrationUnit:(id)arg3;

@end

