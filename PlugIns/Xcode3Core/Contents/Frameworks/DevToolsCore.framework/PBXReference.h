//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXContainerItem.h>

@class IDEContainerItem, NSMutableDictionary, NSString, PBXContainer, PBXGroup, PBXTarget, XCSCMInfo;
@protocol DVTMacroExpansion;

@interface PBXReference : PBXContainerItem
{
    NSString *_name;
    NSString<DVTMacroExpansion> *_path;
    NSString *_sourceTree;
    NSMutableDictionary *_properties;
    PBXGroup *_group;
    BOOL _hasGroup;
    PBXContainer *_container;
    PBXTarget *_producingTarget;
    IDEContainerItem *_wrappingContainerItem;
    NSString *_absolutePath;
    NSString *_absoluteDirectory;
    NSString *_resolvedAbsolutePath;
    NSString *_unexpandedFullPath;
    XCSCMInfo *_scmInfo;
    NSString *_sourceTreeNotificationName;
    NSString *_oldResolvedAbsolutePath;
}

+ (id)archivableAttributes;
+ (id)archiveNameForKey:(id)arg1;
+ (BOOL)relativePathForAbsolutePath:(id)arg1 group:(id)arg2 relativePath:(id *)arg3 sourceTree:(id *)arg4;
+ (Class)_referenceClassInList:(id)arg1 representingFileAtPath:(id)arg2 ofType:(id)arg3;
- (void).cxx_destruct;
- (void)pruneReferencesBySendingBooleanSelector:(SEL)arg1 toObject:(id)arg2 withContext:(void *)arg3;
- (long long)compareType:(id)arg1;
- (long long)compareName:(id)arg1;
- (unsigned long long)assignFileEncoding:(unsigned long long)arg1 onlyIfUnspecified:(BOOL)arg2;
- (BOOL)hasUnspecifiedFileEncodings;
- (BOOL)enumerateReferencesForBuildingUsingBlock:(CDUnknownBlockType)arg1;
- (id)referencesForBuilding;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)innerDescription;
- (void)_setSourceTree:(id)arg1;
- (void)_setReferenceType:(int)arg1;
- (int)_referenceType;
- (BOOL)shouldArchiveReferenceType;
- (void)_setPath:(id)arg1;
- (BOOL)shouldArchiveName;
- (BOOL)shouldArchivePath;
- (id)gidCommentForArchive;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)readFromPListUnarchiver:(id)arg1;
- (id)_path;
- (id)_sourceTree;
- (BOOL)_unarchivingShouldTranslateToUnitTestFrameworkReference;
- (BOOL)_archivingShouldTranslateFromUnitTestFrameworkReference;
- (BOOL)isCurrentVersion;
- (BOOL)isVersion;
- (BOOL)isVersionGroup;
- (id)regionVariantName;
- (BOOL)isRegionVariant;
- (BOOL)isVariant;
- (BOOL)isVariantGroup;
- (id)destinationGroupForFilenames:(id)arg1;
- (id)destinationGroupForInsertion;
- (BOOL)isAncestorOfItem:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isLeaf;
- (id)children;
- (BOOL)shouldArchiveIncludeInIndex;
- (void)setIncludeInIndex:(long long)arg1;
- (BOOL)canSetIncludeInIndex;
- (BOOL)includeInIndex;
- (BOOL)shouldArchiveWrapsLines;
- (void)setWrapsLines:(long long)arg1;
- (BOOL)wrapsLines;
- (BOOL)shouldArchiveUsesTabs;
- (void)setUsesTabs:(long long)arg1;
- (BOOL)usesTabs;
- (BOOL)shouldArchiveIndentWidth;
- (void)setIndentWidth:(long long)arg1;
- (long long)indentWidth;
- (BOOL)shouldArchiveTabWidth;
- (void)setTabWidth:(long long)arg1;
- (long long)tabWidth;
- (BOOL)shouldArchiveFileEncoding;
- (void)setFileEncoding:(unsigned long long)arg1;
- (unsigned long long)fileEncoding;
- (BOOL)shouldArchiveLineEnding;
- (void)setLineEnding:(int)arg1;
- (int)lineEnding;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (BOOL)overridesPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 searchParent:(BOOL)arg2;
- (BOOL)userCanSetExplicitFileType;
- (id)fileTextEncodingName;
- (id)fileProperties;
- (id)fileType;
- (void)invalidateAbsolutePathCache;
- (BOOL)changeSourceTree:(id)arg1;
- (void)setSourceTree:(id)arg1;
- (BOOL)moveToNewPath:(id)arg1;
- (BOOL)copyToNewPath:(id)arg1;
- (BOOL)setPathReturningSuccess:(id)arg1;
- (void)setPath:(id)arg1 andSourceTree:(id)arg2;
- (void)setPath:(id)arg1;
- (void)_pathForSourceTreeDidChange:(id)arg1;
- (BOOL)fileExists;
- (id)absolutePathForDisplay;
- (id)developerDirRelativePath;
- (id)buildProductRelativePath;
- (id)groupRelativePath;
- (id)projectRelativePath;
- (id)absoluteDirectory;
- (id)resolvedAbsolutePath;
- (id)absolutePath;
- (id)absolutePathForBuildParameters:(id)arg1;
- (id)path;
- (BOOL)_hasPath;
- (id)sourceTree;
- (id)_evaluatedPathForSourceTree:(id)arg1 appendPathWhenExpanded:(BOOL)arg2;
- (id)_evaluatedPathForSourceTree:(id)arg1 appendPathWhenExpanded:(BOOL)arg2 forBuildParameters:(id)arg3;
- (BOOL)ensureHasDefaultReference;
- (id)defaultReference;
- (id)groupTreeDisplayName;
- (BOOL)canSetName;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (BOOL)_doFileSystemCopyTo:(id)arg1 deleteOriginal:(BOOL)arg2;
- (BOOL)_doFileSystemCopyFrom:(id)arg1 to:(id)arg2 deleteOriginal:(BOOL)arg3;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)allowsEditing;
- (id)absoluteExpandedPathForString:(id)arg1 forBuildParameters:(id)arg2;
- (id)expandedValueForString:(id)arg1 forBuildParameters:(id)arg2;
- (void)fileDidMoveFromPath:(id)arg1;
- (id)presumedBuildConfigurationName;
- (BOOL)isProductReference;
- (void)enumerateMembershipTargetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)includingTargets;
- (id)producingTarget;
- (void)setProducingTarget:(id)arg1;
- (BOOL)deleteFromProject;
- (void)removeFromGroup;
- (void)setGroup:(id)arg1;
- (id)group;
- (void)setWrappingContainerItem:(id)arg1;
- (id)wrappingContainerItem;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)dealloc;
- (id)initWithName:(id)arg1 path:(id)arg2 referenceType:(int)arg3;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 path:(id)arg2;
- (id)initWithName:(id)arg1 path:(id)arg2 sourceTree:(id)arg3 fileType:(id)arg4 extraFileProperties:(id)arg5;
- (id)initWithName:(id)arg1 path:(id)arg2 sourceTree:(id)arg3;
- (id)_observedObjectForNotification:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)flattenItemsIntoArray:(id)arg1;
- (id)unexpandedFullPath;
- (void)flattenItemsIntoHeaderFileEnumeratorArray:(id)arg1;
- (void)flattenItemsIntoRezSearchPathFileEnumeratorArray:(id)arg1;

@end

