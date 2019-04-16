//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface DTXPCRegistration : NSObject
{
    NSString *_serviceIdentifier;
    CDUnknownBlockType _oneshotHandler;
    id _client;
    id _pkHandle;
    NSObject<OS_xpc_object> *_xpcObject;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcObject; // @synthesize xpcObject=_xpcObject;
@property(retain, nonatomic) id pkHandle; // @synthesize pkHandle=_pkHandle;
@property(retain, nonatomic) id client; // @synthesize client=_client;
@property(copy, nonatomic) CDUnknownBlockType oneshotHandler; // @synthesize oneshotHandler=_oneshotHandler;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;

@end

