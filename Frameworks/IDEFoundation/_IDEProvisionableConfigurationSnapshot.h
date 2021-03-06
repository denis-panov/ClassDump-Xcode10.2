//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTPlatform, DVTPortalProfilePurpose, IDEAppIDFeatures, IDEProvisionableEntitlements, IDEProvisioningEntitlementsExpansion, NSString;
@protocol IDEProvisioningBasicTeam;

@interface _IDEProvisionableConfigurationSnapshot : NSObject
{
    BOOL _allowSigningWithoutTeamSelection;
    BOOL _signingRequiresTeam;
    NSString *_name;
    long long _provisioningStyle;
    id <IDEProvisioningBasicTeam> _team;
    long long _profileSupport;
    DVTPlatform *_platform;
    NSString *_bundleIdentifier;
    NSString *_profileSpecifier;
    NSString *_certificateIdentifier;
    DVTFilePath *_entitlementsFilePath;
    IDEProvisionableEntitlements *_baseEntitlements;
    IDEProvisioningEntitlementsExpansion *_entitlementsExpansion;
    unsigned long long _entitlementsDestination;
    IDEAppIDFeatures *_appIDFeatures;
    DVTPortalProfilePurpose *_provisioningPurpose;
}

+ (id)snapshotWithConfigurationName:(id)arg1 provisioningStyle:(long long)arg2 team:(id)arg3 profileSupport:(long long)arg4 platform:(id)arg5 bundleIdentifier:(id)arg6 profileSpecifier:(id)arg7 certificateIdentifier:(id)arg8 entitlementsFilePath:(id)arg9 baseEntitlements:(id)arg10 entitlementsExpansion:(id)arg11 entitlementsDestination:(unsigned long long)arg12 allowSigningWithoutTeamSelection:(BOOL)arg13 signingRequiresTeam:(BOOL)arg14 appIDFeatures:(id)arg15 provisioningPurpose:(id)arg16;
@property(readonly, nonatomic) DVTPortalProfilePurpose *provisioningPurpose; // @synthesize provisioningPurpose=_provisioningPurpose;
@property(readonly, nonatomic) IDEAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
@property(readonly, nonatomic) BOOL signingRequiresTeam; // @synthesize signingRequiresTeam=_signingRequiresTeam;
@property(readonly, nonatomic) BOOL allowSigningWithoutTeamSelection; // @synthesize allowSigningWithoutTeamSelection=_allowSigningWithoutTeamSelection;
@property(readonly, nonatomic) unsigned long long entitlementsDestination; // @synthesize entitlementsDestination=_entitlementsDestination;
@property(readonly, nonatomic) IDEProvisioningEntitlementsExpansion *entitlementsExpansion; // @synthesize entitlementsExpansion=_entitlementsExpansion;
@property(readonly, nonatomic) IDEProvisionableEntitlements *baseEntitlements; // @synthesize baseEntitlements=_baseEntitlements;
@property(readonly, nonatomic) DVTFilePath *entitlementsFilePath; // @synthesize entitlementsFilePath=_entitlementsFilePath;
@property(readonly, nonatomic) NSString *certificateIdentifier; // @synthesize certificateIdentifier=_certificateIdentifier;
@property(readonly, nonatomic) NSString *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) long long profileSupport; // @synthesize profileSupport=_profileSupport;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

