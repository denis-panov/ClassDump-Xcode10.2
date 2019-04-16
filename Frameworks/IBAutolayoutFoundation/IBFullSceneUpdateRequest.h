//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBObjectBasedMarshallingRequest.h>

#import <IBAutolayoutFoundation/IBSceneUpdateRequest-Protocol.h>

@class IBSceneUpdateProcessingRequestGroup, NSObject, NSString;

@interface IBFullSceneUpdateRequest : IBObjectBasedMarshallingRequest <IBSceneUpdateRequest>
{
    IBSceneUpdateProcessingRequestGroup *_processingRequestGroup;
    NSString *_incrementalUpdateSessionID;
    NSString *_documentSceneIdentifier;
    NSObject *_rootObject;
}

+ (id)requestWithMarshallableObjectPackage:(id)arg1 rootObject:(id)arg2 documentSceneIdentifier:(id)arg3;
@property(readonly, nonatomic) NSObject *rootObject; // @synthesize rootObject=_rootObject;
@property(readonly, copy, nonatomic) NSString *documentSceneIdentifier; // @synthesize documentSceneIdentifier=_documentSceneIdentifier;
@property(copy, nonatomic) NSString *incrementalUpdateSessionID; // @synthesize incrementalUpdateSessionID=_incrementalUpdateSessionID;
@property(readonly, nonatomic) IBSceneUpdateProcessingRequestGroup *processingRequestGroup; // @synthesize processingRequestGroup=_processingRequestGroup;
- (void).cxx_destruct;
- (void)visitWithFullRequestBlock:(CDUnknownBlockType)arg1 incrementalRequestBlock:(CDUnknownBlockType)arg2;
- (void)configureWithConfigurer:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2 rootObject:(id)arg3 documentSceneIdentifier:(id)arg4;
- (id)initWithIdentifier:(id)arg1 marshallableObjectPackage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

