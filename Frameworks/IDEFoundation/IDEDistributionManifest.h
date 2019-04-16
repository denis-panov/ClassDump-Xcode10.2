//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEDistributionManifest : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_appURL;
    NSString *_displayImageURL;
    NSString *_fullSizeImageURL;
    NSString *_assetPackManifestURL;
}

+ (id)variantDescriptorsForDistributionCoalescedThinningVariant:(id)arg1 includeDescriptorsForLegacyPlatforms:(BOOL)arg2;
+ (id)minimumDeploymentTargetDistributionCoalescedThinningVariantToDeviceIdentifierSet:(id)arg1;
@property(copy) NSString *assetPackManifestURL; // @synthesize assetPackManifestURL=_assetPackManifestURL;
@property(copy) NSString *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(copy) NSString *displayImageURL; // @synthesize displayImageURL=_displayImageURL;
@property(copy) NSString *appURL; // @synthesize appURL=_appURL;
@property(copy) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentationForDistributionCoalescedThinningVariants:(id)arg1 error:(id *)arg2;
- (BOOL)isValidManifest;
- (BOOL)validateAssetPackManifestURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateFullSizeImageURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDisplayImageURL:(id *)arg1 error:(id *)arg2;
- (BOOL)validateAppURL:(id *)arg1 error:(id *)arg2;
- (BOOL)_validateURL:(id)arg1 propertyName:(id)arg2 error:(id *)arg3;

@end
