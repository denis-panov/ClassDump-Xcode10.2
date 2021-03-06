//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTPortal/NSCopying-Protocol.h>

@class NSSet, NSString;

@interface DVTPortalProfileFeature : NSObject <NSCopying>
{
    BOOL _isAvailableWithFreeProvisioning;
    BOOL _isAvailableWithEnterprise;
    BOOL _isAvailableWithUniversity;
    BOOL _isAvailableWithDirectDistribution;
    BOOL _requiresPortalInteraction;
    NSString *_identifier;
    NSSet *_supportedPlatforms;
    NSString *_userDescription;
    NSString *_portalKey;
    NSSet *_allowedValues;
    NSString *_defaultValue;
    NSSet *_profileFeatureEntitlements;
    long long _valueType;
}

+ (long long)_valueTypeFromValueTypeName:(id)arg1;
+ (id)profileFeatureFromExtension:(id)arg1;
+ (id)profileFeaturesWithPortalKey:(id)arg1;
+ (id)profileFeatureWithIdentifier:(id)arg1;
+ (id)profileFeatures;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) NSSet *profileFeatureEntitlements; // @synthesize profileFeatureEntitlements=_profileFeatureEntitlements;
@property(readonly, nonatomic) BOOL requiresPortalInteraction; // @synthesize requiresPortalInteraction=_requiresPortalInteraction;
@property(readonly, nonatomic) BOOL isAvailableWithDirectDistribution; // @synthesize isAvailableWithDirectDistribution=_isAvailableWithDirectDistribution;
@property(readonly, nonatomic) BOOL isAvailableWithUniversity; // @synthesize isAvailableWithUniversity=_isAvailableWithUniversity;
@property(readonly, nonatomic) BOOL isAvailableWithEnterprise; // @synthesize isAvailableWithEnterprise=_isAvailableWithEnterprise;
@property(readonly, nonatomic) BOOL isAvailableWithFreeProvisioning; // @synthesize isAvailableWithFreeProvisioning=_isAvailableWithFreeProvisioning;
@property(readonly, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSSet *allowedValues; // @synthesize allowedValues=_allowedValues;
@property(readonly, nonatomic) NSString *portalKey; // @synthesize portalKey=_portalKey;
@property(readonly, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(readonly, nonatomic) NSSet *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEnabledInProfile:(id)arg1 appIDValue:(id *)arg2;
- (BOOL)isValidFeatureValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSSet *entitlements;
- (id)initWithIdentifier:(id)arg1 portalKey:(id)arg2 supportedPlatforms:(id)arg3 valueType:(long long)arg4 userDescription:(id)arg5 isAvailableWithFreeProvisioning:(BOOL)arg6 isAvailableWithEnterprise:(BOOL)arg7 isAvailableWithUniversity:(BOOL)arg8 isAvailableWithDirectDistribution:(BOOL)arg9 allowedValues:(id)arg10 defaultValue:(id)arg11 entitlements:(id)arg12 requiresPortalInteraction:(BOOL)arg13;

@end

