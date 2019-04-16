//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTLocale, NSArray, Xcode3VariantGroup;

@interface Xcode3ProjectLocalizationVariantGroup : NSObject
{
    BOOL _localize;
    Xcode3VariantGroup *_variantGroup;
    DVTFileDataType *_localizableFileType;
    DVTLocale *_fromLocale;
}

@property(retain) DVTLocale *fromLocale; // @synthesize fromLocale=_fromLocale;
@property BOOL localize; // @synthesize localize=_localize;
@property(retain) DVTFileDataType *localizableFileType; // @synthesize localizableFileType=_localizableFileType;
@property(readonly) Xcode3VariantGroup *variantGroup; // @synthesize variantGroup=_variantGroup;
- (void).cxx_destruct;
@property(readonly) NSArray *availableFileTypes;
- (id)initWithVariantGroup:(id)arg1 fromLocale:(id)arg2;

@end

