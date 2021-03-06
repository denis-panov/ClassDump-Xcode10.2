//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSDate, NSString;

@interface XCSCertificate : XCSObject
{
}

- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *commonName; // @dynamic commonName;
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(retain, nonatomic) NSDate *expires; // @dynamic expires;
@property(readonly, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(readonly, nonatomic) NSString *sha1Hash; // @dynamic sha1Hash;

@end

