//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSChangedString;

@interface XCSPlatformChanges : XCSObject
{
}

@property(readonly) NSString *upgradeString;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithVersion:(id)arg1 buildNumber:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) XCSChangedString *buildNumber; // @dynamic buildNumber;
@property(retain, nonatomic) XCSChangedString *version; // @dynamic version;

@end

