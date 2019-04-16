//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICSlottedAsset.h>

@class NSUnitLength;

@interface IBICARImageSet : IBICSlottedAsset
{
    double _width;
    NSUnitLength *_unit;
    CDStruct_af3bceb4 *_cv3DQuality;
}

+ (Class)requiredParentClass;
+ (BOOL)encodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)importPriority;
+ (id)contentReferenceTypeName;
+ (id)typeNameForIssues;
+ (id)classNameComponents;
+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingSize;
+ (id)keyPathsForValuesAffectingDetectabilityEstimation;
+ (id)imagesFromPaths:(id)arg1;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)defaultName;
+ (id)createInstanceNamed:(id)arg1 baseSize:(struct CGSize)arg2 usingRenderer:(CDUnknownBlockType)arg3;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
@property(nonatomic) CDStruct_af3bceb4 *cv3DQuality; // @synthesize cv3DQuality=_cv3DQuality;
@property(retain, nonatomic) NSUnitLength *unit; // @synthesize unit=_unit;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)enclosingResourceGroup;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (CDStruct_550fdc95)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (BOOL)setHeight:(double)arg1 andUnit:(id)arg2;
- (BOOL)setHeight:(double)arg1 inUnit:(id)arg2;
- (id)heightInUnit:(id)arg1;
- (BOOL)setHeight:(double)arg1;
- (id)height;
- (id)widthMeasurement;
- (void)setWidth:(double)arg1 andUnit:(id)arg2;
- (void)setWidth:(double)arg1 inUnit:(id)arg2;
- (double)widthInUnit:(id)arg1;
- (void)_setUnit:(id)arg1 andConvertCurrentWidth:(BOOL)arg2;
- (BOOL)shouldPerformCV3DValidation;
- (id)aspectRatio;
- (id)size;
@property(readonly, nonatomic) double detectabilityEstimation;
- (void)setAssetData:(id)arg1;
- (void)dealloc;
- (id)initializeManifestArchivist;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end

