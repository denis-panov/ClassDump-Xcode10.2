//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningBasicProfile-Protocol.h>

@class DVTProvisioningProfile, IDEProfileSpecifier, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisioningBasicProfile : NSObject <IDEProvisioningBasicProfile>
{
    IDEProfileSpecifier *_specifier;
    DVTProvisioningProfile *_provisioningProfile;
}

+ (id)locateBasicProfileInProfiles:(id)arg1 matchingSpecifier:(id)arg2 bundleID:(id)arg3 platform:(id)arg4 provisioningStyle:(long long)arg5;
+ (id)basicMissingProfileWithSpecifier:(id)arg1;
+ (id)basicProfileWithDVTProvisioningProfile:(id)arg1 profileSpecifier:(id)arg2;
+ (id)basicProfileWithDVTProvisioningProfile:(id)arg1;
@property(readonly) DVTProvisioningProfile *provisioningProfile; // @synthesize provisioningProfile=_provisioningProfile;
@property(readonly) IDEProfileSpecifier *specifier; // @synthesize specifier=_specifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSString *automaticIdentitySelector;
@property(readonly) id <IDEProvisioningBasicTeam> team;
@property(readonly) BOOL existsOnDisk;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;

@end

