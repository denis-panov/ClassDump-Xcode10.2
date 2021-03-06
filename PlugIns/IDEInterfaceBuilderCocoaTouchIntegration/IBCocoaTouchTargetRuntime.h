//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBTargetRuntime.h>

@class IBCocoaTouchIdiom, IBColorList, IBUIFontDataSource, IBUIScreenMetrics, IBUISimulatedMetricChain, IBUISimulatedOrientationMetrics, IBUISimulatedStatusBarMetrics, NSArray, NSDictionary, NSMutableDictionary;
@protocol DVTCancellable;

@interface IBCocoaTouchTargetRuntime : IBTargetRuntime
{
    IBCocoaTouchIdiom *_idiom;
    NSDictionary *_systemNamesToGenericColorsMap;
    IBColorList *_colorList;
    NSArray *_availableFonts;
    NSDictionary *_textStyles;
    NSDictionary *_fontDescriptorTextStyles;
    NSMutableDictionary *_fontsByFontName;
    NSDictionary *_systemFontSizes;
    NSDictionary *_systemFontInfo;
    NSDictionary *_boldSystemFontInfo;
    NSDictionary *_italicSystemFontInfo;
    IBUIFontDataSource *_fontDataSource;
    NSMutableDictionary *_filenamesByFontName;
    id <DVTCancellable> _fontsObservationToken;
}

+ (id)targetRuntimeWithSystemColor:(id)arg1 preferringIdiom:(id)arg2;
+ (id)targetRuntimeForIdiom:(id)arg1 andOSVersion:(id)arg2;
+ (id)targetRuntimeForIdiom:(id)arg1 andUserInterfaceEra:(long long)arg2;
- (void).cxx_destruct;
- (id)processingRequestForIncrementallyUpdatingAttribute:(id)arg1 ofObject:(id)arg2 withObjectID:(id)arg3 marshallingContext:(id)arg4;
- (Class)sceneUpdateRequestProcessorClass;
- (Class)imageRequestProcessorClass;
- (id)toolDescriptionForAutolayoutOperationsWithRole:(long long)arg1 deviceTypeDescription:(id)arg2;
- (id)toolDescriptionForSceneUpdatesWithRole:(long long)arg1 deviceTypeDescription:(id)arg2;
- (id)defaultToolDescriptionWithRole:(long long)arg1 deviceTypeDescription:(id)arg2;
- (id)toolProxyManager;
- (id)alternateTargetRuntimeForEra:(long long)arg1;
- (id)alternateTargetRuntimeForSevenAndLater;
- (id)nextPreviewableTargetRuntime;
- (void)installColorListIfNeeded;
- (id)textStyleForArchiveName:(id)arg1;
- (id)archiveNameForTextStyle:(id)arg1;
- (id)fontDataSource;
- (BOOL)isTextStyleDeprecated:(id)arg1;
- (BOOL)isValidFontName:(id)arg1;
- (double)fontPointSizeForTextStyle:(id)arg1;
- (double)fontPointSizeForSize:(long long)arg1;
- (id)filenameForFontName:(id)arg1;
- (void)registerFilename:(id)arg1 forFontName:(id)arg2;
- (unsigned long long)fontTraitsForFontName:(id)arg1;
- (unsigned long long)fontTraitsForType:(long long)arg1 andTextStyle:(id)arg2;
- (id)fontFamilyForFontName:(id)arg1;
- (id)fontFamilyNameForType:(long long)arg1 andTextStyle:(id)arg2;
- (long long)systemFontTypeForTextStyle:(id)arg1;
- (id)fontNameForType:(long long)arg1 andTextStyle:(id)arg2;
- (id)fontNameForFamily:(id)arg1 andTraits:(unsigned long long)arg2;
- (id)ib_textStyles;
- (void)ensureFontDescriptorTextStylesAreUpdated;
@property(readonly) NSDictionary *availableFontDescriptorTextStyles;
- (void)invalidateAvailableFonts;
@property(readonly) NSArray *availableFonts;
- (id)accessFontDataWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) IBColorList *colorList;
- (BOOL)shouldIncludeColorInColorList:(id)arg1;
- (id)tableCellBlueTextColor;
- (id)defaultTintColor;
- (id)lightTextColor;
- (id)darkTextColor;
- (id)scrollViewTexturedBackgroundColor;
- (id)tableCellGroupedBackgroundColor;
- (id)groupTableViewBackgroundColor;
- (id)genericColorForSystemColor:(id)arg1;
- (id)systemColorForGenericColor:(id)arg1;
- (id)keyPathForGenericColor:(id)arg1;
- (id)systemColorForKeyPath:(id)arg1;
- (BOOL)isSystemPatternColor:(id)arg1;
- (BOOL)isSystemColor:(id)arg1;
- (id)keyPathForSystemColor:(id)arg1;
- (id)systemNamesToGenericColorsMap;
- (id)regeneratePerScaleSystemNamesToGenericColorsMap;
- (id)regenerateSystemNamesToGenericColorsMapForScale:(double)arg1;
- (id)readPerScaleExistingSystemNamesToGenericColorsMap;
- (CDUnknownBlockType)defaultClassValueDiagnosticsBlock;
- (id)metricChainForDeviceConfiguration:(id)arg1;
@property(readonly) IBUISimulatedMetricChain *defaultMetricChain;
@property(readonly) IBUISimulatedStatusBarMetrics *defaultLibraryStatusBarMetrics;
@property(readonly) IBUISimulatedStatusBarMetrics *defaultStatusBarMetrics;
@property(readonly) IBUISimulatedOrientationMetrics *defaultOrientationMetrics;
@property(readonly) IBUIScreenMetrics *defaultScreenMetrics;
- (id)icon;
- (id)displayNameForUserInterfaceStyle;
@property(readonly, nonatomic) long long userInterfaceEra;
- (id)cocoaTouchOSVersion;
- (id)idiom;
- (id)archiveVariantIdentifier;
- (id)archiveIdentifier;
- (id)identifier;
- (id)platform;
- (void)dealloc;
- (id)targetRuntimeWithIdiom:(id)arg1;
- (id)initWithIdiom:(id)arg1 andOSVersion:(id)arg2;

@end

