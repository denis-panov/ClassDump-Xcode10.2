//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTSourceControl/NSObject-Protocol.h>

@class DVTSourceControlAuthor, DVTSourceControlBranch, DVTSourceControlPathLocation, DVTSourceControlRemoteRepository, DVTSourceControlRepository, DVTSourceControlRevision, DVTSourceControlRevisionLocation, DVTSourceControlStash, DVTSourceControlTag, DVTSourceControlWorkingCopy, NSArray, NSDictionary, NSString, NSURL;

@protocol DVTSourceControlPlugInProtocol <NSObject>
- (void)exportStashInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 stash:(DVTSourceControlStash *)arg2 completionBlock:(void (^)(NSURL *, NSError *))arg3;
- (void)applyStashInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 stash:(DVTSourceControlStash *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)deleteStashInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 stash:(DVTSourceControlStash *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)stashChangesOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 includingUnversioned:(BOOL)arg2 message:(NSString *)arg3 completionBlock:(void (^)(DVTSourceControlStash *, NSError *))arg4;
- (void)createLocalRepositoryFromRepository:(DVTSourceControlRemoteRepository *)arg1 localAddress:(NSURL *)arg2 mirrored:(BOOL)arg3 progressIdentifier:(NSString *)arg4 completionBlock:(void (^)(DVTSourceControlRepository *, NSError *))arg5;
- (void)createWorkingCopyFromRepository:(DVTSourceControlRemoteRepository *)arg1 location:(DVTSourceControlRevisionLocation *)arg2 useRevision:(BOOL)arg3 localAddress:(NSURL *)arg4 existingAddress:(NSURL *)arg5 progressIdentifier:(NSString *)arg6 completionBlock:(void (^)(DVTSourceControlWorkingCopy *, NSError *))arg7;
- (void)validateAuthenticationOfRemoteRepository:(DVTSourceControlRemoteRepository *)arg1 location:(DVTSourceControlRevisionLocation *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)uploadCommitsToRemoteRepository:(DVTSourceControlRemoteRepository *)arg1 fromLocalRepository:(DVTSourceControlRepository *)arg2 remoteBranch:(DVTSourceControlBranch *)arg3 pushTags:(BOOL)arg4 progressIdentifier:(NSString *)arg5 completionBlock:(void (^)(NSError *))arg6;
- (void)downloadUpdatesFromRemoteRepository:(DVTSourceControlRemoteRepository *)arg1 toRepository:(DVTSourceControlRepository *)arg2 removeDeletedLocations:(BOOL)arg3 progressIdentifier:(NSString *)arg4 completionBlock:(void (^)(NSString *, NSError *))arg5;
- (void)repositoryURLRootForRepository:(DVTSourceControlRemoteRepository *)arg1 completionBlock:(void (^)(NSURL *, DVTSourceControlPathLocation *, NSError *))arg2;
- (void)createRepositoryAtFileURL:(NSURL *)arg1 completionBlock:(void (^)(DVTSourceControlRepository *, NSError *))arg2;
- (void)removeRemoteRepositoryNamed:(NSString *)arg1 fromRepository:(DVTSourceControlRepository *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)addRemoteRepository:(DVTSourceControlRemoteRepository *)arg1 withName:(NSString *)arg2 toRepository:(DVTSourceControlRepository *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)remoteNameIsValid:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)remoteBranchFromRepository:(DVTSourceControlRepository *)arg1 forBranch:(DVTSourceControlBranch *)arg2 completionBlock:(void (^)(DVTSourceControlBranch *, NSError *))arg3;
- (void)listRemoteRepositoriesForRepository:(DVTSourceControlRepository *)arg1 completionBlock:(void (^)(DVTSourceControlRemoteRepository *, NSDictionary *, NSError *))arg2;
- (void)diffRepository:(DVTSourceControlRepository *)arg1 fromLocation:(DVTSourceControlRevisionLocation *)arg2 againstLocation:(DVTSourceControlRevisionLocation *)arg3 completionBlock:(void (^)(NSArray *, NSError *))arg4;
- (void)listTagsOfRemoteRepository:(DVTSourceControlRemoteRepository *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)removeTag:(DVTSourceControlTag *)arg1 fromRepository:(DVTSourceControlRepository *)arg2 andRemoteRepository:(DVTSourceControlRemoteRepository *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)addTag:(DVTSourceControlTag *)arg1 toRepository:(DVTSourceControlRepository *)arg2 completionBlock:(void (^)(DVTSourceControlTag *, NSError *))arg3;
- (void)removeBranch:(DVTSourceControlBranch *)arg1 fromRepository:(DVTSourceControlRepository *)arg2 andRemoteRepository:(DVTSourceControlRemoteRepository *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)addBranch:(DVTSourceControlBranch *)arg1 from:(DVTSourceControlRevisionLocation *)arg2 toRepository:(DVTSourceControlRepository *)arg3 completionBlock:(void (^)(DVTSourceControlBranch *, NSError *))arg4;
- (void)parentBranchesOfBranch:(DVTSourceControlBranch *)arg1 inRepository:(DVTSourceControlRepository *)arg2 completionBlock:(void (^)(DVTSourceControlBranch *, NSArray *, NSError *))arg3;
- (void)listRemoteBranchesOfRepository:(DVTSourceControlRepository *)arg1 completionBlock:(void (^)(NSArray *, NSDictionary *, NSError *))arg2;
- (void)listBranchesOfRepository:(DVTSourceControlRepository *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)listSubpathsOfRepository:(DVTSourceControlRepository *)arg1 atPath:(DVTSourceControlPathLocation *)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)revisionOfLocation:(DVTSourceControlRevisionLocation *)arg1 inRepository:(DVTSourceControlRepository *)arg2 completionBlock:(void (^)(DVTSourceControlRevision *, NSError *))arg3;
- (void)headRevisionOfRepository:(DVTSourceControlRepository *)arg1 completionBlock:(void (^)(DVTSourceControlRevision *, NSError *))arg2;
- (void)identifierOfRepositoryForWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(NSString *, NSError *))arg2;
- (void)baseRevisionOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(DVTSourceControlRevision *, NSError *))arg2;
- (void)switchLocation:(DVTSourceControlRevisionLocation *)arg1 ofWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(DVTSourceControlRevisionLocation *, NSError *))arg3;
- (void)currentLocationOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(DVTSourceControlRevisionLocation *, NSError *))arg2;
- (void)historyOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 location:(DVTSourceControlRevisionLocation *)arg2 progressIdentifier:(NSString *)arg3 completionBlock:(void (^)(NSArray *, NSError *))arg4;
- (void)historyOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 fromRevision:(DVTSourceControlRevision *)arg2 toRevision:(DVTSourceControlRevision *)arg3 inclusionType:(unsigned long long)arg4 maximumLogItems:(long long)arg5 searchString:(NSString *)arg6 searchType:(unsigned long long)arg7 includeFilePaths:(BOOL)arg8 showMergeCommits:(BOOL)arg9 progressIdentifier:(NSString *)arg10 completionBlock:(void (^)(NSArray *, NSError *))arg11;
- (void)forceUpdateWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 location:(DVTSourceControlRevisionLocation *)arg2 fromRepository:(DVTSourceControlRemoteRepository *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)updateWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 branch:(DVTSourceControlBranch *)arg2 fromRepository:(DVTSourceControlRemoteRepository *)arg3 updateStrategy:(unsigned long long)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)rebaseWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 ontoBranch:(DVTSourceControlBranch *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)mergeBranch:(DVTSourceControlBranch *)arg1 intoWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)exportConflictVersionsOfFile:(NSString *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSURL *, NSURL *, NSURL *, NSError *))arg3;
- (void)currentConflictRevisionsForWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(DVTSourceControlRevision *, DVTSourceControlRevision *, DVTSourceControlRevision *, NSError *))arg2;
- (void)abortConflictOperationInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)continueOrFinishConflictOperationInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (void)stateOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)commitDetails:(DVTSourceControlWorkingCopy *)arg1 revision:(DVTSourceControlRevision *)arg2 completionBlock:(void (^)(DVTSourceControlVisualLogItem *, NSError *))arg3;
- (void)commitDetails:(DVTSourceControlWorkingCopy *)arg1 revisions:(NSArray *)arg2 progressIdentifier:(NSString *)arg3 completionBlock:(void (^)(NSArray *, NSError *))arg4;
- (void)historyOfFileWithNameStatus:(NSString *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 fromRevisionLocation:(DVTSourceControlRevisionLocation *)arg3 showMergeCommits:(BOOL)arg4 follow:(BOOL)arg5 maxLogItems:(long long)arg6 completionBlock:(void (^)(NSArray *, NSError *))arg7;
- (void)historyOfFile:(NSString *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 searchString:(NSString *)arg3 searchType:(unsigned long long)arg4 showMergeCommits:(BOOL)arg5 progressIdentifier:(NSString *)arg6 completionBlock:(void (^)(NSArray *, NSError *))arg7;
- (void)commitDetailsWithParents:(DVTSourceControlWorkingCopy *)arg1 forRevision:(DVTSourceControlRevision *)arg2 path:(NSString *)arg3 completionBlock:(void (^)(DVTSourceControlLogItem *, NSArray *, NSArray *, NSError *))arg4;
- (void)blameFile:(NSString *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 fromRevisionLocation:(DVTSourceControlRevisionLocation *)arg3 ignoreWhitespace:(BOOL)arg4 completionBlock:(void (^)(NSArray *, NSError *))arg5;
- (void)loadCompleteTag:(DVTSourceControlWorkingCopy *)arg1 tag:(DVTSourceControlTag *)arg2 completionBlock:(void (^)(DVTSourceControlTag *, NSError *))arg3;
- (void)loadCompleteStash:(DVTSourceControlWorkingCopy *)arg1 stash:(DVTSourceControlStash *)arg2 completionBlock:(void (^)(DVTSourceControlStash *, NSError *))arg3;
- (void)allCurrentLocations:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(NSArray *, NSArray *, NSDictionary *, NSDictionary *, NSArray *, DVTSourceControlRevisionLocation *, unsigned long long, NSError *))arg2;
- (void)revertCommit:(DVTSourceControlWorkingCopy *)arg1 revision:(DVTSourceControlRevision *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)cherryPick:(DVTSourceControlWorkingCopy *)arg1 revision:(DVTSourceControlRevision *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)exportFile:(NSString *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 fromRevisionLocation:(DVTSourceControlRevisionLocation *)arg3 completionBlock:(void (^)(NSURL *, NSError *))arg4;
- (void)branchesReachableFrom:(DVTSourceControlRevision *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)unmodifiedContentsOfFile:(NSString *)arg1 includingUpstream:(BOOL)arg2 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg3 completionBlock:(void (^)(NSString *, NSString *, NSString *, NSError *))arg4;
- (void)commitFiles:(NSArray *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 message:(NSString *)arg3 completionBlock:(void (^)(DVTSourceControlRevision *, NSError *))arg4;
- (void)markAsResolvedFiles:(NSArray *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)discardAllChangesInWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)discardChangesInFiles:(NSArray *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)createDirectory:(NSString *)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(NSDictionary *)arg3 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg4 completionBlock:(void (^)(NSError *))arg5;
- (void)moveFiles:(NSArray *)arg1 toFilePaths:(NSArray *)arg2 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)copyFiles:(NSArray *)arg1 toFilePaths:(NSArray *)arg2 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg3 completionBlock:(void (^)(NSError *))arg4;
- (void)removeFiles:(NSArray *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)addFiles:(NSArray *)arg1 inWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)filesAndStatusOfWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 withRemoteStatus:(BOOL)arg2 completionBlock:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)scanForRepositoryInFolderPath:(NSString *)arg1 completionBlock:(void (^)(DVTSourceControlRepository *))arg2;
- (void)scanForWorkingCopiesInPotentialWorkingCopies:(NSArray *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)scanForWorkingCopiesInFolderPaths:(NSArray *)arg1 traversingUp:(BOOL)arg2 completionBlock:(void (^)(NSArray *))arg3;
- (void)setRebaseState:(unsigned long long)arg1 forWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)rebaseStateForWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(unsigned long long, NSError *))arg2;
- (void)setIgnoredFiles:(NSArray *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)ignoredFilesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)setAuthor:(DVTSourceControlAuthor *)arg1 forWorkingCopy:(DVTSourceControlWorkingCopy *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)authorForWorkingCopy:(DVTSourceControlWorkingCopy *)arg1 completionBlock:(void (^)(DVTSourceControlAuthor *, NSError *))arg2;
- (void)keychainNameFromURL:(NSURL *)arg1 completionBlock:(void (^)(NSString *, unsigned long long, NSString *, NSError *))arg2;
- (void)sourceControlSystemWithCompletionBlock:(void (^)(DVTSourceControlSystem *))arg1;
- (void)receivedLogItems;
- (void)operationsFinished;
@end

