//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPortalPlatform, DVTPortalProfilePurpose, NSArray, NSString;

@interface IDEDistributionMethod : NSObject
{
}

- (BOOL)_validateArchs:(id)arg1 logAspect:(id)arg2 error:(id *)arg3;
- (BOOL)areDistributionItemsEligible:(id)arg1 destination:(long long)arg2 logAspect:(id)arg3 error:(id *)arg4;
- (id)distributionFinishedButtonTitleForDestination:(long long)arg1;
- (id)exportDescription;
- (id)uploadDescription;
@property(readonly) NSArray *distributionOptionIdentifiers;
@property(readonly) BOOL hasPostUploadProcessing;
@property(readonly) BOOL supportsCustomToolchains;
@property(readonly) BOOL supportsFreeProvisioning;
- (id)packagingStepIdentifierForDestination:(long long)arg1;
@property(readonly) NSString *exportStepName;
@property(readonly) DVTPortalProfilePurpose *provisioningProfilePurpose;
@property(readonly) DVTPortalPlatform *provisioningProfilePlatform;
@property(readonly) long long wantsProvisioningProfiles;
@property(readonly) NSString *installerCertificateKind;
@property(readonly) NSString *certificateKind;
- (id)orderedDistributionStepViewControllerClassNamesForDestination:(long long)arg1;
- (id)orderedDistributionStepModelClassNamesForDestination:(long long)arg1;
- (id)orderedDistributionStepClassNamesForDestination:(long long)arg1;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *shortTitle;
@property(readonly) NSString *title;
@property(readonly) NSString *commandLineName;
- (id)commandLineNameForTask:(long long)arg1 destination:(long long)arg2;
@property(readonly) BOOL supportsManifestDistribution;
@property(readonly, getter=isAppStoreBound) BOOL appStoreBound;
@property(readonly) NSArray *supportedDestinations;
@property(readonly) long long supportedTask;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
@property(readonly) double sortOrder;

@end
