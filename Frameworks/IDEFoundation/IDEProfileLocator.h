//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPlatform, DVTPortalProfileType, IDEProfileSpecifier, NSSet, NSString;
@protocol IDEProvisioningBasicTeam, IDEProvisioningErrorProvider;

@interface IDEProfileLocator : NSObject
{
    id <IDEProvisioningBasicTeam> _team;
    NSSet *_profiles;
    NSString *_bundleID;
    long long _style;
    DVTPlatform *_platform;
    id <IDEProvisioningErrorProvider> _errorProvider;
    IDEProfileSpecifier *_profileSpecifier;
    NSSet *_signingCertificates;
    long long _automaticLocationStyle;
    DVTPortalProfileType *_profileType;
}

@property(retain, nonatomic) DVTPortalProfileType *profileType; // @synthesize profileType=_profileType;
@property(nonatomic) long long automaticLocationStyle; // @synthesize automaticLocationStyle=_automaticLocationStyle;
@property(retain, nonatomic) NSSet *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
@property(retain, nonatomic) IDEProfileSpecifier *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(readonly, nonatomic) id <IDEProvisioningErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSSet *profiles; // @synthesize profiles=_profiles;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)_errorForManualWithAllowsAutomaticSelectionOfAllProfiles;
- (id)_errorForXcodeManagedNoMatchingProfiles;
- (id)_errorForManualWithNoMatchingProfile:(id)arg1;
- (id)_errorForManualWithNoProfileSpecifier:(id)arg1;
- (id)_errorForXcodeManagedWithManualSpecifier;
- (id)_errorForNoTeam;
- (id)_profileMatchingName:(id)arg1 teamID:(id)arg2;
- (id)_profileMatchingSpecifier:(id)arg1;
- (id)_manualProvisioningProfileWithError:(id *)arg1;
- (id)_qualifiedProfilesForXcodeManaged;
- (id)_xcodeManagedProvisioningProfileWithError:(id *)arg1;
- (id)_logAspect;
- (id)profilesForManualProvisioning;
- (id)profileWithError:(id *)arg1;
- (id)initWithProfiles:(id)arg1 team:(id)arg2 bundleID:(id)arg3 style:(long long)arg4 platform:(id)arg5 errorProvider:(id)arg6;
- (id)initWithProfiles:(id)arg1 team:(id)arg2 bundleID:(id)arg3 style:(long long)arg4 platform:(id)arg5;

@end

