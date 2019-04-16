//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICColorSpace, IBICContrastAppearance, IBICGraphicsFeatureSet, IBICHeightClass, IBICIdiom, IBICLanguageDirection, IBICLuminosityAppearance, IBICMemoryClass, IBICScale, IBICScreenWidth, IBICSubtype, IBICVibrancyAppearance, IBICWidthClass;

@interface IBICImageSetRepSlot : IBICImageSlot
{
    IBICIdiom *_idiom;
    IBICSubtype *_subtype;
    IBICScale *_scale;
    IBICScreenWidth *_screenWidth;
    IBICWidthClass *_widthClass;
    IBICHeightClass *_heightClass;
    IBICMemoryClass *_memory;
    IBICGraphicsFeatureSet *_graphicsFeatureSet;
    IBICColorSpace *_colorSpace;
    IBICLanguageDirection *_languageDirection;
    IBICLuminosityAppearance *_luminosityAppearance;
    IBICContrastAppearance *_contrastAppearance;
    IBICVibrancyAppearance *_vibrancyAppearance;
}

+ (id)slotWithIdiom:(id)arg1 subtype:(id)arg2 scale:(id)arg3;
+ (id)slotWithIdiom:(id)arg1 scale:(id)arg2;
+ (id)slotWithIdiom:(id)arg1 scale:(id)arg2 screenWidth:(id)arg3;
+ (id)slotWithIdiom:(id)arg1 subtype:(id)arg2 scale:(id)arg3 widthClass:(id)arg4 heightClass:(id)arg5;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)orderedComponentClasses;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)slotFilterWithIdiomFilter:(id)arg1 subtypeFilter:(id)arg2 scaleFilter:(id)arg3 screenWidthFilter:(id)arg4 widthClass:(id)arg5 heightClassFilter:(id)arg6 memoryFilter:(id)arg7 graphicsFeatureSetFilter:(id)arg8 colorSpaceFilter:(id)arg9 languageDirectionFilter:(id)arg10 lightnessFilter:(id)arg11 contrastFilter:(id)arg12 vibrancyFilter:(id)arg13;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 subtypes:(id)arg3 scales:(id)arg4 screenWidths:(id)arg5 widthClasses:(id)arg6 heightClasses:(id)arg7 memoryClasses:(id)arg8 graphicsFeatureSets:(id)arg9 colorSpaces:(id)arg10 languageDirections:(id)arg11 luminositySlots:(id)arg12 contrastSlots:(id)arg13 vibrancySlots:(id)arg14;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(BOOL)arg1 idioms:(id)arg2 subtypes:(id)arg3 scales:(id)arg4 screenWidths:(id)arg5 widthClasses:(id)arg6 heightClasses:(id)arg7 memoryClasses:(id)arg8 graphicsFeatureSets:(id)arg9 colorSpaces:(id)arg10 languageDirections:(id)arg11 luminositySlots:(id)arg12 contrastSlots:(id)arg13 vibrancySlots:(id)arg14;
@property(readonly) IBICVibrancyAppearance *vibrancyAppearance; // @synthesize vibrancyAppearance=_vibrancyAppearance;
@property(readonly) IBICContrastAppearance *contrastAppearance; // @synthesize contrastAppearance=_contrastAppearance;
@property(readonly) IBICLuminosityAppearance *luminosityAppearance; // @synthesize luminosityAppearance=_luminosityAppearance;
@property(readonly) IBICLanguageDirection *languageDirection; // @synthesize languageDirection=_languageDirection;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICGraphicsFeatureSet *graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(readonly) IBICMemoryClass *memory; // @synthesize memory=_memory;
@property(readonly) IBICHeightClass *heightClass; // @synthesize heightClass=_heightClass;
@property(readonly) IBICWidthClass *widthClass; // @synthesize widthClass=_widthClass;
@property(readonly) IBICScreenWidth *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (BOOL)hasUnspecifiedAppearance;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (BOOL)anyExplicitValuesForSlotComponentClass:(Class)arg1 amongCounterparts:(id)arg2;
- (void)captureComponents;

@end
