//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEContainerItem.h>

#import <IDEFoundation/IDEStructureEditing-Protocol.h>

@class DVTExtension, DVTFileDataType, DVTFilePath, DVTObservingToken, IDEContainer, NSString;
@protocol NSObject;

@interface IDEFileReference : IDEContainerItem <IDEStructureEditing>
{
    DVTFilePath *_watchedFilePath;
    DVTFilePath *_oldWatchedFilePath;
    DVTFilePath *_resolvedFilePath;
    DVTFileDataType *_presumedFileDataType;
    DVTFileDataType *_lastKnownFileDataType;
    DVTFileDataType *_lastDiscoveredFileDataType;
    DVTFileDataType *_discoveredFileDataType;
    DVTExtension *_referencedContainerExtension;
    IDEContainer *_referencedContainer;
    DVTObservingToken *_referencedContainerIsValidObservingToken;
    DVTObservingToken *_workspaceIsValidObservingToken;
    BOOL _workaroundForProblem8727051;
    BOOL _stopResolvingReferencedContainers;
    unsigned long long _sourceControlLocalStatus;
    unsigned long long _sourceControlServerStatus;
    unsigned long long _conflictStateForUpdateOrMerge;
    unsigned long long _aggregateSourceControlLocalStatus;
    unsigned long long _aggregateSourceControlServerStatus;
    unsigned long long _aggregateSourceControlConflictStatus;
    BOOL _sourceControlLocalStatusNeedsUpdate;
    BOOL _sourceControlServerStatusNeedsUpdate;
    BOOL _sourceControlConflictStatusNeedsUpdate;
    BOOL _waitingForChangeNotificationsToResume;
    id <NSObject> _modelObjectGraphDidCoalesceNotificationToken;
    DVTFileDataType *_assignedFileDataType;
}

+ (BOOL)automaticallyNotifiesObserversOfAggregateSourceControlConflictStatus;
+ (BOOL)automaticallyNotifiesObserversOfAggregateSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfAggregateSourceControlLocalStatus;
+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
+ (id)keyPathsForValuesAffectingIssueLog;
+ (id)keyPathsForValuesAffectingExpectedFilePath;
+ (id)keyPathsForValuesAffectingName;
+ (id)fileReferenceAssociatesForPath:(id)arg1 forAllPathsToSameFile:(BOOL)arg2;
+ (id)fileReferenceAssociatesForPath:(id)arg1 forAllPathsToSameFile:(BOOL)arg2 workspace:(id)arg3;
+ (id)_fileReferenceAssociatesForPath:(id)arg1 forAllPathsToSameFile:(BOOL)arg2 workspace:(id)arg3;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingIdeModelObjectTypeIdentifier;
@property(copy, nonatomic) DVTFileDataType *assignedFileDataType; // @synthesize assignedFileDataType=_assignedFileDataType;
- (void).cxx_destruct;
- (BOOL)structureEditName:(id)arg1 inContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (id)_structureEditNameForSuggestedName:(id)arg1;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (id)structureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2 createGroupsForFolders:(BOOL)arg3;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)structureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (BOOL)allowRemovingContainerGroup;
- (void)fileReferenceWasConfigured;
- (void)_takeConfigurationFromFileReference:(id)arg1;
- (void)debugPrintInnerStructure;
- (void)_updateSourceControlStatusIfNeeded;
- (void)_updateAggregateSourceControlConflictStatus;
- (void)_updateAggregateSourceControlServerStatus;
- (void)_updateAggregateSourceControlLocalStatus;
- (void)_setAggregateSourceControlConflictStatus:(unsigned long long)arg1;
- (void)_setAggregateSourceControlServerStatus:(unsigned long long)arg1;
- (void)_setAggregateSourceControlLocalStatus:(unsigned long long)arg1;
- (void)_updateConflictStateForUpdateOrMerge;
@property unsigned long long conflictStateForUpdateOrMerge;
- (void)_updateSourceControlServerStatus;
@property unsigned long long sourceControlServerStatus;
- (void)_updateSourceControlLocalStatus;
- (void)_updateSourceControlStatus;
- (void)_enqueueScmStatusUpdate;
@property unsigned long long sourceControlLocalStatus;
- (unsigned long long)aggregateSourceControlConflictStatus;
- (unsigned long long)aggregateSourceControlServerStatus;
- (unsigned long long)aggregateSourceControlLocalStatus;
- (id)issueLog;
- (BOOL)isReferencedContainerLoaded;
- (void)_invalidateReferencedContainer;
- (void)_addObserversForReferencedContainer;
- (id)_referencedContainer;
- (void)_resolvedFilePathWasRecalculated;
- (void)_referencedContainerWasRecalculated;
@property(readonly) IDEContainer *referencedContainer;
- (void)_recalculateReferencedContainer;
- (BOOL)_workaroundForProblem8727051;
@property(readonly) DVTExtension *referencedContainerExtension;
- (id)_resolveReferencedContainerExtension;
- (BOOL)_isBuildProductReference;
- (void)_invalidateFileDataType;
@property(readonly) DVTFileDataType *discoveredFileDataType;
@property(readonly) DVTFileDataType *lastKnownFileDataType;
@property(readonly) DVTFileDataType *presumedFileDataType;
- (void)_assignedFileDataTypeDidChange;
@property(readonly) DVTFilePath *expectedFilePath;
- (BOOL)_resolvedFilePathIsValid;
- (void)_resolvedFilePathDidChange:(id)arg1;
@property(readonly) BOOL _filePathExists;
- (void)_invalidateResolvedFilePathUsingPath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)_invalidateResolvedFilePath;
- (void)_resolvedFilePathWasInvalidated;
- (id)_absolutePath;
- (id)_resolvedFilePathIfAvailable;
@property(readonly) DVTFilePath *resolvedFilePath;
@property(readonly, copy, nonatomic) NSString *name;
- (void)_invalidateStartingWith:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (void)_invalidateStartingWith:(id)arg1;
- (void)changePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)_setContainer:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (void)openQuickly_enumerateCandidateFilePathsNotingVisitedContainers:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (id)ideFindScope_groupForGroupPath:(id)arg1;
- (id)ideFindScope_componentForGroupPath;
- (id)ideFindScope_predicateRoot;
- (void)ideFindScope_accumulateFilePaths:(id)arg1 andVisitedContainers:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
- (void)ide_populateSnapshotGroups:(id)arg1 filePaths:(id)arg2 visitedContainers:(id)arg3;
- (void)setAssignedFileDataTypeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;

@end
