//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDictionary, XCSConfigurationChanges, XCSPlatformChanges;

@interface XCSIntegrationChanges : XCSObject
{
    XCSConfigurationChanges *_configuration;
}

@property(retain, nonatomic) XCSConfigurationChanges *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
@property(readonly) NSArray *descriptions;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithXcode:(id)arg1 platforms:(struct NSDictionary *)arg2 configuration:(id)arg3 validationErrors:(id *)arg4;

// Remaining properties
@property(retain, nonatomic) NSDictionary *platforms; // @dynamic platforms;
@property(retain, nonatomic) XCSPlatformChanges *xcode; // @dynamic xcode;

@end

