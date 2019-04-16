//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEFileReference.h>

#import <DevToolsCore/IDELocalizationFileReference-Protocol.h>
#import <DevToolsCore/Xcode3ContainerItemWrapping-Protocol.h>

@class DVTFileDataType, NSString, PBXFileReference, PBXReference, Xcode3FileTypeItem, Xcode3SourceTreeItem;

@interface Xcode3FileReference : IDEFileReference <IDELocalizationFileReference, Xcode3ContainerItemWrapping>
{
    PBXFileReference *_fileReference;
}

+ (id)keyPathsForValuesAffectingAssignedFileDataType;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingPath;
+ (id)supportedCustomResolutionStrategies;
+ (id)supportedResolutionStrategies;
@property(readonly) PBXFileReference *fileReference; // @synthesize fileReference=_fileReference;
- (void).cxx_destruct;
- (id)ideInspectedAssetTagPlaceholder;
- (id)knownAssetTags;
- (void)setAssetTags:(id)arg1;
- (id)assetTags;
- (BOOL)canHaveAssetTags;
- (id)_associatedResourceBuildFiles;
- (id)_associatedBuildFilesInPhasesOfClass:(Class)arg1;
- (id)referenceForAssetTags;
- (void)_setContainerItemEdited;
@property(readonly, copy) NSString *description;
- (BOOL)canStructureEditName;
- (BOOL)_isBuildProductReference;
- (void)fileReferenceWasConfigured;
- (void)setLanguage:(id)arg1;
- (void)setWrapsLines:(BOOL)arg1;
- (void)setIndentWidth:(long long)arg1;
- (void)setTabWidth:(long long)arg1;
- (void)setUsesTabs:(BOOL)arg1;
- (void)setTextEncoding:(unsigned long long)arg1;
- (void)setLineEndings:(unsigned long long)arg1;
- (id)_propertyForKey:(id)arg1 searchParent:(BOOL)arg2;
@property(readonly) DVTFileDataType *fileConversionDataType;
@property(retain) Xcode3FileTypeItem *fileTypeItem;
@property(retain) Xcode3SourceTreeItem *sourceTreeItem;
- (void)setAssignedFileDataType:(id)arg1;
- (id)assignedFileDataType;
@property(readonly) PBXReference *reference;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (void)setName:(id)arg1;
- (id)name;
- (id)resolutionContextForStrategies:(id)arg1;
- (id)path;
- (void)_resolvedFilePathWasInvalidated;
- (void)_resolvedFilePathWasRecalculated;
- (id)resolvedFilePath;
- (id)ideModelObjectTypeIdentifier;
- (void)primitiveInvalidate;
- (void)_configureReferenceResolutionStrategySpecificObservations;
- (void)_setupSourceTreeRelativeObservations;
- (void)_clearSourceTreeRelativeObservations;
- (void)_sourceTreeValuesDidChange:(id)arg1;
- (void)_setupCurrentSDKRelativeObservations;
- (void)_clearCurrentSDKRelativeObservations;
- (void)_setupBuildProductsRelativeObservations;
- (void)_clearBuildProductsRelativeObservations;
- (void)_clearBuildSettingsObservations;
- (void)_setupBuildSettingsObservations;
- (void)_buildSettingsDictionaryDidChange:(id)arg1;
- (void)_primitiveChangeInternalReferencePath:(id)arg1 sourceTree:(id)arg2;
- (void)primitiveChangePath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)initWithPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)initWithPBXFileReference:(id)arg1;
- (id)init;
- (id)_initWithPBXFileReference:(id)arg1 resolutionStrategies:(id)arg2;
- (void)_refreshPath;
- (void)dvt_encodeWithXMLArchiver:(id)arg1;
- (void)addToTargetDefaultResourcesBuildPhase:(id)arg1;
- (void)wrapInVariantGroupForLocalization:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

