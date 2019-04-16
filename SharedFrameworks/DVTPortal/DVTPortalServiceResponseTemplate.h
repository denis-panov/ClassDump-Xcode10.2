//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPortalCode, DVTServicesType, NSString;

@interface DVTPortalServiceResponseTemplate : NSObject
{
    BOOL _deserializesMultiple;
    NSString *_portalKey;
    DVTPortalCode *_code;
    DVTServicesType *_deserializedType;
}

@property(readonly, nonatomic) BOOL deserializesMultiple; // @synthesize deserializesMultiple=_deserializesMultiple;
@property(readonly, nonatomic) DVTServicesType *deserializedType; // @synthesize deserializedType=_deserializedType;
@property(readonly, nonatomic) DVTPortalCode *code; // @synthesize code=_code;
@property(readonly, nonatomic) NSString *portalKey; // @synthesize portalKey=_portalKey;
- (void).cxx_destruct;
- (id)resultFromPayload:(id)arg1 resultCode:(long long)arg2 error:(id *)arg3;
- (BOOL)matchesPayload:(id)arg1 resultCode:(long long)arg2;
- (BOOL)_isValueYieldingResponse;
- (id)description;
- (id)initWithExtensionParameter:(id)arg1;

@end

