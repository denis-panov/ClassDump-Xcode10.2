//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlAuthenticationFailureHandler-Protocol.h>
#import <DVTSourceControl/DVTSourceControlIdentifiable-Protocol.h>
#import <DVTSourceControl/DVTSourceControlSerializable-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>

@class DVTSourceControlBranchAndTagLocations, DVTSourceControlRemoteRepository, DVTSourceControlRevisionLocation, NSDictionary, NSMapTable, NSOperationQueue, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface DVTSourceControlWorkspaceBlueprint : NSObject <DVTSourceControlIdentifiable, DVTSourceControlAuthenticationFailureHandler, DVTSourceControlSerializable, NSCopying>
{
    NSObject<OS_dispatch_queue> *_blueprintChangeQueue;
    NSOperationQueue *_blueprintOperationQueue;
    BOOL _needsToUseSecondaryIdentifiers;
    BOOL _favorite;
    NSString *__id;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
    NSString *_relativePathToProject;
    NSOrderedSet *_remoteRepositories;
    NSOrderedSet *_additionalValidationRemoteRepositories;
    NSString *_name;
    NSMapTable *_workingCopyStates;
    NSMapTable *_workingCopyPaths;
    NSMapTable *_workingCopyRepositoryLocations;
    NSMapTable *_locations;
    NSDictionary *_authenticationStrategies;
}

+ (BOOL)validateDictionary:(id)arg1;
@property(getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
@property(retain) NSDictionary *authenticationStrategies; // @synthesize authenticationStrategies=_authenticationStrategies;
@property(retain) NSMapTable *locations; // @synthesize locations=_locations;
@property(retain) NSMapTable *workingCopyRepositoryLocations; // @synthesize workingCopyRepositoryLocations=_workingCopyRepositoryLocations;
@property(retain) NSMapTable *workingCopyPaths; // @synthesize workingCopyPaths=_workingCopyPaths;
@property(retain) NSMapTable *workingCopyStates; // @synthesize workingCopyStates=_workingCopyStates;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSOrderedSet *additionalValidationRemoteRepositories; // @synthesize additionalValidationRemoteRepositories=_additionalValidationRemoteRepositories;
@property(copy) NSOrderedSet *remoteRepositories; // @synthesize remoteRepositories=_remoteRepositories;
@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(retain) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (void).cxx_destruct;
- (void)handleAuthenticationFailure:(id)arg1 forRepository:(id)arg2 withForce:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unregisterAsAuthenticationFailureHandler;
- (void)registerAsAuthenticationFailureHandler;
@property(readonly, copy) NSString *description;
- (void)removeAdditionalValidationRemoteRepository:(id)arg1;
- (void)addAdditionalValidationRemoteRepository:(id)arg1;
- (void)addAdditionalValidationRemoteRepositories:(id)arg1;
- (void)removeAuthenticationStrategy:(id)arg1 forDomain:(id)arg2;
- (void)addAuthenticationStrategy:(id)arg1 forDomain:(id)arg2;
- (void)removeRepositoriesWithWorkingCopyPathsAboveRootFolder;
- (id)repositoriesWithWorkingCopyPathsAboveRootFolder;
- (id)blueprintForRemoteRepository:(id)arg1;
- (void)setWorkingCopyState:(unsigned long long)arg1 forRepository:(id)arg2;
- (void)setWorkingCopyNumberState:(id)arg1 forRepository:(id)arg2;
- (void)setLocation:(id)arg1 forRepository:(id)arg2;
- (void)removeRemoteRepository:(id)arg1;
- (void)addRemoteRepository:(id)arg1 inBlueprint:(id)arg2;
- (void)addRemoteRepository:(id)arg1 workingCopyPath:(id)arg2 location:(id)arg3 branchAndTagLocations:(id)arg4 workingCopyState:(unsigned long long)arg5 revision:(id)arg6;
- (void)replaceRemoteRepository:(id)arg1 withRepository:(id)arg2;
@property(readonly) DVTSourceControlBranchAndTagLocations *branchAndTagLocations;
@property(readonly) DVTSourceControlRevisionLocation *location;
@property(readonly) DVTSourceControlRemoteRepository *repository;
@property(readonly) BOOL representsSingleRepository;
- (id)fingerprintForRepository:(id)arg1;
- (id)strategyForRepository:(id)arg1;
- (id)revisionForRemoteRepository:(id)arg1;
- (unsigned long long)workingCopyStateForRemoteRepository:(id)arg1;
- (id)workingCopyNumberStateForRemoteRepository:(id)arg1;
- (id)workingCopyPathForRemoteRepository:(id)arg1;
- (id)branchAndTagLocationsForRemoteRepository:(id)arg1;
- (id)locationForRemoteRepository:(id)arg1;
- (id)displayNameForRemoteRepository:(id)arg1;
- (id)initWithSingleRemoteRepository:(id)arg1;
@property(readonly) BOOL containsOnlyValidSystems;
- (id)_dictionaryRepresentationWithOptions:(unsigned long long)arg1 mutableDictionaryClass:(Class)arg2;
- (id)dictionaryRepresentationWithOptions:(unsigned long long)arg1;
- (id)derivedRepositoryIdentifier;
- (id)saveBlueprintInFolder:(id)arg1 options:(unsigned long long)arg2;
- (id)jsonDataRepresentationWithOptions:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)_authenticationFromDictionary:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)initWithBlueprintFile:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)initWithJSONData:(id)arg1 sshKeyDirectory:(id)arg2;
- (id)_dataFromString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPrimaryRemoteRepository:(id)arg1 relativePathToProject:(id)arg2 remoteRepositories:(id)arg3 workingCopyStates:(id)arg4 workingCopyPaths:(id)arg5 workingCopyRepositoryLocations:(id)arg6 locations:(id)arg7 additionalValidationRepositories:(id)arg8 name:(id)arg9 favorite:(BOOL)arg10;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithoutAuthentication;
- (id)remoteRepositoriesMissingFromBlueprint:(id)arg1;
- (id)remoteRepositoriesMissingFromWorkspace:(id)arg1;
- (void)getMissingCredentialsFromBlueprint:(id)arg1;
- (void)_mergeWithBlueprint:(id)arg1 preferOtherBlueprint:(BOOL)arg2;
- (void)updateWithBlueprint:(id)arg1;
- (void)mergeWithBlueprint:(id)arg1;
- (id)_repositoryLikeRepository:(id)arg1 inBlueprint:(id)arg2 includingAdditionals:(BOOL)arg3;
- (id)_repositoryLikeRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)remoteRepositoryLikeRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)_anyRepositoryLikeRemoteRepository:(id)arg1;
- (id)_repositoryLikeRemoteRepository:(id)arg1;
- (id)_additionalRepositoryLikeRemoteRepository:(id)arg1;
- (id)_repositoryLikeRemoteRepository:(id)arg1 inSet:(id)arg2;
- (id)remoteRepositoryLikeRepository:(id)arg1;
- (id)remoteRepositoryForSerializedIdentifier:(id)arg1;
- (id)serializedIdentifierForRepository:(id)arg1;
- (void)_updateNeedsToUseSecondaryIdentifiers;
- (void)_updateNeedsToUseSecondaryIdentifiersWithRepository:(id)arg1;
- (id)repositoryForOrigin:(id)arg1;
- (id)_sortedRepositoriesFromSet:(id)arg1;
- (BOOL)isFuzzyEqualToBlueprint:(id)arg1;
- (BOOL)hasSameRepositoriesAsBlueprint:(id)arg1;
- (id)init;
- (id)checkForUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)validateAuthenticationAndListBranchesSkippingRepositoryIdentifiers:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)validateAuthenticationAndListBranchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)validateAuthenticationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)listBranchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)updateRepositoryURLRootsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)workspaceForWorkingCopiesCreatedAtURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)createWorkingCopiesAtURL:(id)arg1 useRevisions:(BOOL)arg2 reusingWorkingCopiesFromBlueprints:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)createWorkingCopiesAtURL:(id)arg1 useRevisions:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly) NSMapTable *revisions;
- (id)_sortedRemoteRepositoriesWithExpandedPaths:(id)arg1;
- (id)_expandedWorkingCopyPathsFromURL:(id)arg1;
- (id)_expandedFileURLForBaseURL:(id)arg1 repository:(id)arg2;
@property(readonly) NSString *projectPath;
- (BOOL)_isValid;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
