//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class IBICManifestArchivist, NSMutableArray;

@interface IBICARResourceGroup : IBICAbstractCatalogItem
{
    IBICManifestArchivist *_manifestArchivist;
    long long _progress;
    struct CV3DOQContext *_cv3DOQHandle;
    BOOL _needsValidation;
    BOOL _validationInProgress;
    BOOL _cancelled;
    NSMutableArray *_validationIssues;
}

+ (id)validationDispatchQueue;
+ (BOOL)canHostItemsOfClass:(Class)arg1;
+ (id)importPriority;
+ (BOOL)fileNameIsIdentifier;
+ (id)displayNameForChildren;
+ (Class)requiredChildrenClass;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)catalogItemFileExtension;
+ (id)defaultEmptyInstanceWithName:(id)arg1;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (void)log:(id)arg1;
+ (void)log:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)createDefaultInstancesForUnitTesting;
+ (id)createInstanceNamed:(id)arg1;
- (void).cxx_destruct;
- (void)invalidateIssues;
- (void)populateIssues:(id)arg1 context:(id)arg2;
- (void)_computeIssuesForChildren:(id)arg1 inContext:(id)arg2;
- (void)_populateIssues:(id)arg1 forChildren:(id)arg2 qualities:(id)arg3 populatingChildrenUpdated:(id)arg4;
- (BOOL)_populateIssues:(id)arg1 forARImageSet:(id)arg2 withQuality:(CDStruct_af3bceb4 *)arg3 andSiblings:(id)arg4;
- (void)_populateDuplicateChildIssues:(id)arg1 forChild:(id)arg2 withQuality:(CDStruct_af3bceb4 *)arg3 andSiblings:(id)arg4;
- (BOOL)isEqualForUnitTests:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (Class)manifestArchivist:(id)arg1 childClassForChildEntry:(id)arg2 results:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (id)initializeManifestArchivist;
- (void)setItemName:(id)arg1;
- (void)removeChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(id)arg2;
- (long long)activityProgress;
- (id)activityName;
- (long long)displayPositionForProposedChild:(id)arg1 temporarilyValidatingFileName:(BOOL)arg2;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (id)manifestContent;
- (id)manifestFileName;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (CDStruct_550fdc95)taggingSupport;
- (long long)childOrdering;
- (id)effectiveModificationDateForCARCompiler;
- (id)displayName;
- (id)defaultUnqualifiedRuntimeName;
- (id)init;
- (void)sharedInit;
- (void)log:(id)arg1;
- (void)createSampleImagesWithBaseName:(id)arg1 size:(struct CGSize)arg2 count:(long long)arg3 usingRenderer:(CDUnknownBlockType)arg4;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

