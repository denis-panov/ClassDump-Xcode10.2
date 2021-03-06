//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTProvisioningProfile.h>

@class DVTPortalCertificateType, IDEAppIDFeatures, NSSet;
@protocol IDEProvisioningBasicTeam;

@interface DVTProvisioningProfile (IDEAdditions)
@property(readonly, nonatomic) DVTPortalCertificateType *certificateType;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly, nonatomic) IDEAppIDFeatures *features;
- (BOOL)isAutomaticProvisioningProfile;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> basicTeam;
@property(readonly, nonatomic) NSSet *profileTypes;
@end

