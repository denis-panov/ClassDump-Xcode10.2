//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTLocale, NSImage, NSString, Xcode3VariantFileReference, Xcode3VariantGroup;

@interface Xcode3LegacyLocalizationUpgrade : NSObject
{
    Xcode3VariantFileReference *_legacyRef;
    Xcode3VariantFileReference *_modernRef;
    BOOL _choiceOfDestinationAvailable;
    Xcode3VariantGroup *_variantGroup;
    DVTLocale *_legacyLocale;
    DVTLocale *_modernLocale;
    NSString *_displayProjectPath;
    long long _legacyUpgradeDestination;
    long long _modernUpgradeDestination;
}

+ (id)keyPathsForValuesAffectingInvalidityReason;
@property(readonly, getter=isChoiceOfDestinationAvailable) BOOL choiceOfDestinationAvailable; // @synthesize choiceOfDestinationAvailable=_choiceOfDestinationAvailable;
@property long long modernUpgradeDestination; // @synthesize modernUpgradeDestination=_modernUpgradeDestination;
@property long long legacyUpgradeDestination; // @synthesize legacyUpgradeDestination=_legacyUpgradeDestination;
@property(readonly, copy) NSString *displayProjectPath; // @synthesize displayProjectPath=_displayProjectPath;
@property(readonly) DVTLocale *modernLocale; // @synthesize modernLocale=_modernLocale;
@property(readonly) DVTLocale *legacyLocale; // @synthesize legacyLocale=_legacyLocale;
@property(readonly) Xcode3VariantGroup *variantGroup; // @synthesize variantGroup=_variantGroup;
- (void).cxx_destruct;
@property(readonly, copy) NSString *invalidityReason;
- (id)_fullSizeImage;
@property(readonly, copy) NSImage *image;
@property(readonly, copy) NSString *displayName;
- (id)description;
- (id)initWithVariantGroup:(id)arg1 displayProjectPath:(id)arg2 legacyLocale:(id)arg3 modernLocale:(id)arg4;

@end

