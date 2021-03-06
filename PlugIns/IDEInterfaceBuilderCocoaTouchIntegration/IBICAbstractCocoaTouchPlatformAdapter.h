//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBICAbstractPlatformAdapter.h>

@class IBICCocoaTouchPNGCrushTool;

@interface IBICAbstractCocoaTouchPlatformAdapter : IBICAbstractPlatformAdapter
{
    IBICCocoaTouchPNGCrushTool *_pngCrusher;
}

+ (void)registerImageHelpers;
+ (CDUnknownBlockType)imageProducer;
+ (id)catalogToolForPlatformWithIdentifier:(id)arg1 andAdditionalLaunchEnvironmentVariables:(id)arg2 launchError:(id *)arg3;
- (void).cxx_destruct;
- (id)requiredFrameworksForGeneratedSource;
- (id)colorTypeForGeneratedSource;
- (id)imageTypeForGeneratedSource;
- (id)selectIconSetRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (BOOL)copyAssetRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)rasterizeVectorImageRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (BOOL)rasterizePDFImage:(id)arg1 toPath:(id)arg2 scale:(double)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)writePNGImageData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)firstVersionSupportingOnDemandResources;
- (BOOL)canHostPDFContentOutsideOfCARFiles;
- (void)compileCARItems:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)simulatorPlatformIdentifier;
- (id)compileLaunchImageFromSelection:(id)arg1 options:(id)arg2;
- (void)appendLaunchImagesEntryForRep:(id)arg1 toResultsIfNeeded:(id)arg2;
- (void)appendLaunchImagesEntryForSlot:(id)arg1 withLaunchImageName:(id)arg2 toResultsIfNeeded:(id)arg3;
- (BOOL)slotShouldHaveUILaunchImagesInfoPlistEntry:(id)arg1;
- (id)launchImagesInfoPlistEntryForSlot:(id)arg1 withLaunchImageName:(id)arg2;
- (struct CGSize)infoPlistPointSizeForLaunchScreenSlot:(id)arg1;
- (id)compileBundleIconFromSelection:(id)arg1 options:(id)arg2;
- (id)selectCatalogAppIconsFromCollection:(id)arg1 ignoringItems:(id)arg2 forLocation:(long long)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5;
- (BOOL)isValidOutputLocation:(long long)arg1 forBundleIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (void)processMissingStickersIconsUsingBaseImageName:(id)arg1 baseImages:(id)arg2 options:(id)arg3 populatingResults:(id)arg4;
- (id)processSystemPNGOutputImages:(id)arg1 forClasses:(id)arg2 withImageName:(id)arg3 fromSelection:(id)arg4 options:(id)arg5 populatingResults:(id)arg6 andReturningEmptyPlaceholder:(id *)arg7;
- (void)addErrorForEmptyPlaceholderFromSelection:(id)arg1 forSlottedAssetOfPossibleClasses:(id)arg2 name:(id)arg3 results:(id)arg4 andReturningEmptyPlaceholder:(id *)arg5;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (id)targetPlatformForArguments:(id)arg1;
- (id)platform;
- (id)minimumDeploymentTargetSupportingIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingModels;
- (id)minimumDeploymentTargetSupportingNamedColors;
- (id)minimumDeploymentTargetSupportingTexturesInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIcons;
- (id)minimumDeploymentTargetSupportingDataInCARFiles;
- (id)minimumDeploymentTargetSupportingSpriteAtlasesInCARFiles;
- (id)absoluteMinimumDeploymentTarget;
- (id)minimumDeploymentTargetSupportingHEIFFiles;
- (id)minimumDeploymentTargetSupportingPDFInCARFiles;
- (id)minimumDeploymentTargetSupportingJPGInCARFiles;
- (id)minimumDeploymentTargetSupportingCARFiles;
- (BOOL)usesPNGCrush;
- (id)initWithPlatformIdentifier:(id)arg1 extension:(id)arg2;

@end

