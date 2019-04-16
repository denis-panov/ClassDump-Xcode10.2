//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTLogAspect, DVTObservingToken, DVTPerformanceMetric, DVTSemaphore, DVTStackBacktrace, IDEProvisioningCompoundProfileStore, IDEProvisioningProfileDownloaderContext, NSArray, NSDictionary, NSError, NSOperationQueue, NSSet, NSString;
@protocol DVTInvalidation, IDEProvisioningProfileDownloaderDelegate;

@interface IDEProvisioningProfileDownloader : NSObject <DVTInvalidation>
{
    BOOL _installingProfile;
    NSArray *_accountNamesFailed;
    NSArray *_teams;
    IDEProvisioningProfileDownloaderContext *_context;
    DVTLogAspect *_logAspect;
    id <IDEProvisioningProfileDownloaderDelegate> _delegate;
    id <DVTInvalidation> _accountsObserver;
    DVTObservingToken *_teamsObserver;
    id <DVTInvalidation> _profilesObserver;
    DVTDelayedInvocation *_delayedRefreshLocalProfilesInvocation;
    NSOperationQueue *_previewProfileQueue;
    NSOperationQueue *_refreshQueue;
    NSOperationQueue *_profilesForTeamQueue;
    DVTSemaphore *_waitForAreTeamsLoadedSemaphore;
    DVTSemaphore *_waitForAreProfilesLoadedSemaphore;
    DVTPerformanceMetric *_performanceMetric;
    NSOperationQueue *_refreshSerialQueue;
    NSOperationQueue *_installProfileSerialQueue;
    DVTDelayedInvocation *_delayedRefreshPortalProfilesInvocation;
    NSArray *_accountErrors;
    NSArray *_portalProfiles;
    NSSet *_provisioningProfiles;
    NSDictionary *_teamToError;
    IDEProvisioningCompoundProfileStore *_compoundProfileStore;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property(retain, nonatomic) IDEProvisioningCompoundProfileStore *compoundProfileStore; // @synthesize compoundProfileStore=_compoundProfileStore;
@property(retain, nonatomic) NSDictionary *teamToError; // @synthesize teamToError=_teamToError;
@property(retain, nonatomic) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain, nonatomic) NSArray *portalProfiles; // @synthesize portalProfiles=_portalProfiles;
@property(retain, nonatomic) NSArray *accountErrors; // @synthesize accountErrors=_accountErrors;
@property(retain, nonatomic) DVTDelayedInvocation *delayedRefreshPortalProfilesInvocation; // @synthesize delayedRefreshPortalProfilesInvocation=_delayedRefreshPortalProfilesInvocation;
@property(retain, nonatomic) NSOperationQueue *installProfileSerialQueue; // @synthesize installProfileSerialQueue=_installProfileSerialQueue;
@property(retain, nonatomic) NSOperationQueue *refreshSerialQueue; // @synthesize refreshSerialQueue=_refreshSerialQueue;
@property(retain, nonatomic) DVTPerformanceMetric *performanceMetric; // @synthesize performanceMetric=_performanceMetric;
@property(retain, nonatomic) DVTSemaphore *waitForAreProfilesLoadedSemaphore; // @synthesize waitForAreProfilesLoadedSemaphore=_waitForAreProfilesLoadedSemaphore;
@property(retain, nonatomic) DVTSemaphore *waitForAreTeamsLoadedSemaphore; // @synthesize waitForAreTeamsLoadedSemaphore=_waitForAreTeamsLoadedSemaphore;
@property(retain, nonatomic) NSOperationQueue *profilesForTeamQueue; // @synthesize profilesForTeamQueue=_profilesForTeamQueue;
@property(retain, nonatomic) NSOperationQueue *refreshQueue; // @synthesize refreshQueue=_refreshQueue;
@property(retain, nonatomic) NSOperationQueue *previewProfileQueue; // @synthesize previewProfileQueue=_previewProfileQueue;
@property(retain, nonatomic) DVTDelayedInvocation *delayedRefreshLocalProfilesInvocation; // @synthesize delayedRefreshLocalProfilesInvocation=_delayedRefreshLocalProfilesInvocation;
@property(retain, nonatomic) id <DVTInvalidation> profilesObserver; // @synthesize profilesObserver=_profilesObserver;
@property(retain, nonatomic) DVTObservingToken *teamsObserver; // @synthesize teamsObserver=_teamsObserver;
@property(retain, nonatomic) id <DVTInvalidation> accountsObserver; // @synthesize accountsObserver=_accountsObserver;
@property(retain, nonatomic) id <IDEProvisioningProfileDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) IDEProvisioningProfileDownloaderContext *context; // @synthesize context=_context;
@property(nonatomic, getter=isInstallingProfile) BOOL installingProfile; // @synthesize installingProfile=_installingProfile;
@property(retain, nonatomic) NSArray *teams; // @synthesize teams=_teams;
@property(retain, nonatomic) NSArray *accountNamesFailed; // @synthesize accountNamesFailed=_accountNamesFailed;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSError *noResultsError;
- (id)noProfilesError;
- (id)noTeamsError;
- (id)allAccountsFailedError;
- (id)noAccountsError;
- (id)noConnectionError;
- (void)cancelInstall:(id)arg1;
- (void)installProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)waitForInMemoryDownloadOfProfile:(id)arg1;
- (void)updatePreviewProfile:(id)arg1;
- (id)retryInMemoryProfileForPortalProfile:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)profilesForTeam:(id)arg1 error:(id *)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshLocalProfiles:(BOOL)arg1 portalProfiles:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDownloaderWithTeamResults:(id)arg1;
- (id)fetchProvisioningProfiles;
- (id)fetchPortalProfiles;
- (id)fetchErrorsForAccountsWithAccountNamesFailed:(id *)arg1;
- (id)sessionErrorsForAccounts:(id)arg1 accountNamesFailed:(id *)arg2;
- (void)waitForAreProfilesLoaded;
- (void)waitForAreTeamsLoaded;
- (id)manuallyQualifiedProfilesForTeam:(id)arg1 error:(id *)arg2;
- (id)portalProfilesForTeam:(id)arg1 error:(id *)arg2;
- (id)manuallyQualifiedProfiles:(id)arg1 team:(id)arg2;
- (void)setupObservations;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

