//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DTXChannel, NSSet, Protocol;

@interface DTXProxyChannel : NSObject
{
    Protocol *_remoteInterface;
    Protocol *_exportedInterface;
    DTXChannel *_channel;
    NSSet *_additionalAllowedClassesForProtocolMethods;
    // Error parsing type: AB, name: _hasProcessedMessage
}

@property(retain, nonatomic) NSSet *additionalAllowedClassesForProtocolMethods; // @synthesize additionalAllowedClassesForProtocolMethods=_additionalAllowedClassesForProtocolMethods;
@property(retain, nonatomic) DTXChannel *channel; // @synthesize channel=_channel;
@property(retain) Protocol *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
- (void).cxx_destruct;
- (void)_sendInvocationMessage:(id)arg1;
- (void)setExportedObject:(id)arg1 queue:(id)arg2;
- (id)_validateDispatch:(id)arg1;
- (id)_allowedClassesForReturnValues;
- (id)_allowedClassesForArgumentsOfRemoteInterfaceSelector:(SEL)arg1 methodSignature:(id)arg2;
- (void)cancel;
@property(readonly) id remoteObjectProxy;
- (id)initWithChannel:(id)arg1 remoteProtocol:(id)arg2 localProtocol:(id)arg3;

@end

