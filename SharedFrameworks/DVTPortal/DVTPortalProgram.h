//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPlatform, NSSet, NSString;

@interface DVTPortalProgram : NSObject
{
    NSString *_identifier;
    NSString *_portalIdentifier;
    NSSet *_platforms;
    DVTPlatform *_primaryPlatform;
    NSString *_userDescription;
}

+ (id)portalProgramWithIdentifier:(id)arg1;
+ (id)portalProgramWithPortalIdentifier:(id)arg1;
+ (id)_extensionPointIdentifierToPortalProgramMap;
+ (id)_portalIdentifierToPortalProgramMap;
+ (id)_platformsFromExtension:(id)arg1 primaryPlatform:(id *)arg2;
+ (id)portalPrograms;
@property(readonly, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly, nonatomic) DVTPlatform *primaryPlatform; // @synthesize primaryPlatform=_primaryPlatform;
@property(readonly, nonatomic) NSSet *platforms; // @synthesize platforms=_platforms;
@property(readonly, nonatomic) NSString *portalIdentifier; // @synthesize portalIdentifier=_portalIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

