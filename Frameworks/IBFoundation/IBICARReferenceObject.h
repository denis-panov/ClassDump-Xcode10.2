//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class IBICManifestArchivist, NSArray, NSData, NSNumber, NSString;

@interface IBICARReferenceObject : IBICAbstractCatalogItem
{
    IBICManifestArchivist *_manifestArchivist;
    NSNumber *_version;
    NSArray *_referenceOriginRotation;
    NSArray *_referenceOriginTranslation;
    NSArray *_referenceOriginScale;
    NSString *_trackingDataReference;
    NSString *_imageReference;
    NSData *_pointCloudData;
    NSData *_previewImageData;
}

+ (BOOL)displayNameIsItemName;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)typeNameForIssues;
+ (id)defaultName;
+ (id)catalogItemFileExtension;
+ (Class)requiredParentClass;
+ (id)importPriority;
+ (BOOL)fileNameIsIdentifier;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) NSData *pointCloudData; // @synthesize pointCloudData=_pointCloudData;
@property(copy, nonatomic) NSString *imageReference; // @synthesize imageReference=_imageReference;
@property(copy, nonatomic) NSString *trackingDataReference; // @synthesize trackingDataReference=_trackingDataReference;
@property(copy, nonatomic) NSArray *referenceOriginScale; // @synthesize referenceOriginScale=_referenceOriginScale;
@property(copy, nonatomic) NSArray *referenceOriginTranslation; // @synthesize referenceOriginTranslation=_referenceOriginTranslation;
@property(copy, nonatomic) NSArray *referenceOriginRotation; // @synthesize referenceOriginRotation=_referenceOriginRotation;
@property(copy, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
-     // Error parsing type: {?=[4]}16@0:8, name: referenceOriginMatrix
- (id)pointCloudURL;
- (id)effectiveModificationDateForCARCompiler;
- (BOOL)isMinimallyFitForCompiling;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)manifestContent;
- (id)manifestFileName;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)initializeManifestArchivist;
- (id)defaultUnqualifiedRuntimeName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

