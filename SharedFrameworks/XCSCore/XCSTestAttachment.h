//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSDate, NSDictionary, NSString, XCSIntegrationAsset;

@interface XCSTestAttachment : XCSObject
{
    BOOL _hasPayload;
    NSString *_uniformTypeIdentifier;
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_userInfo;
    long long _lifetime;
    long long _inActivityIdentifier;
    NSString *_fileName;
    NSString *_filePath;
    XCSIntegrationAsset *_asset;
}

+ (id)attachmentWithName:(id)arg1 fromAttachments:(id)arg2;
@property(retain, nonatomic) XCSIntegrationAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) BOOL hasPayload; // @synthesize hasPayload=_hasPayload;
@property(readonly) long long inActivityIdentifier; // @synthesize inActivityIdentifier=_inActivityIdentifier;
@property(readonly) long long lifetime; // @synthesize lifetime=_lifetime;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)_validateWithErrors:(id *)arg1;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithUTI:(id)arg1 name:(id)arg2 timestamp:(id)arg3 userInfo:(id)arg4 lifetime:(long long)arg5 inActivityIdentifier:(long long)arg6 hasPayload:(BOOL)arg7 fileName:(id)arg8 filePath:(id)arg9;

@end

