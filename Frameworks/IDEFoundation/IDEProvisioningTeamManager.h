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

@class DVTDelayedInvocation, DVTDeveloperAccountManager, DVTDispatchLock, DVTLogAspect, DVTProvisioningProfileManager, DVTSigningCertificateManager, DVTStackBacktrace, IDEProvisioningTeamAccountPairManager, NSOrderedSet, NSSet, NSString;
@protocol DVTInvalidation, IDEProvisioningBasicTeam;

@interface IDEProvisioningTeamManager : NSObject <DVTInvalidation>
{
    BOOL _areTeamsLoaded;
    BOOL _busy;
    DVTLogAspect *_logAspect;
    NSOrderedSet *_disambiguatedTeams;
    NSOrderedSet *_disambiguatedTeamsIncludingLocallyDerived;
    DVTDeveloperAccountManager *_accountManager;
    DVTProvisioningProfileManager *_profileManager;
    DVTSigningCertificateManager *_certificateManager;
    IDEProvisioningTeamAccountPairManager *_teamAccountPairManager;
    NSString *_teamCacheKey;
    DVTDispatchLock *_teamsLock;
    DVTDelayedInvocation *_delayedUpdateInvocation;
    DVTDelayedInvocation *_delayedLocalUpdateInvocation;
    NSSet *_developerAccountCredentialObservers;
    id <DVTInvalidation> _accountsToken;
    id <DVTInvalidation> _profilesToken;
    id <DVTInvalidation> _certificatesToken;
}

+ (BOOL)supportsInvalidationPrevention;
+ (id)keyPathsForValuesAffectingTeamsIncludingLocallyDerivedTeams;
+ (id)keyPathsForValuesAffectingTeams;
+ (id)defaultTeamManager;
+ (void)initialize;
@property(retain) id <DVTInvalidation> certificatesToken; // @synthesize certificatesToken=_certificatesToken;
@property(retain) id <DVTInvalidation> profilesToken; // @synthesize profilesToken=_profilesToken;
@property(retain) id <DVTInvalidation> accountsToken; // @synthesize accountsToken=_accountsToken;
@property(retain) NSSet *developerAccountCredentialObservers; // @synthesize developerAccountCredentialObservers=_developerAccountCredentialObservers;
@property(retain) DVTDelayedInvocation *delayedLocalUpdateInvocation; // @synthesize delayedLocalUpdateInvocation=_delayedLocalUpdateInvocation;
@property(retain) DVTDelayedInvocation *delayedUpdateInvocation; // @synthesize delayedUpdateInvocation=_delayedUpdateInvocation;
@property(retain) DVTDispatchLock *teamsLock; // @synthesize teamsLock=_teamsLock;
@property(retain) NSString *teamCacheKey; // @synthesize teamCacheKey=_teamCacheKey;
@property(retain) IDEProvisioningTeamAccountPairManager *teamAccountPairManager; // @synthesize teamAccountPairManager=_teamAccountPairManager;
@property(retain) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(retain) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(getter=isBusy) BOOL busy; // @synthesize busy=_busy;
@property BOOL areTeamsLoaded; // @synthesize areTeamsLoaded=_areTeamsLoaded;
@property(retain, nonatomic) NSOrderedSet *disambiguatedTeamsIncludingLocallyDerived; // @synthesize disambiguatedTeamsIncludingLocallyDerived=_disambiguatedTeamsIncludingLocallyDerived;
@property(retain, nonatomic) NSOrderedSet *disambiguatedTeams; // @synthesize disambiguatedTeams=_disambiguatedTeams;
- (void).cxx_destruct;
- (id)developerAccountForTeam:(id)arg1 error:(id *)arg2;
- (id)teamWithID:(id)arg1;
- (void)_purgeErstwhileUsernamesFromCache:(id)arg1;
- (void)_cacheTeams:(id)arg1 forUsername:(id)arg2;
- (id)_cachedTeamsByUsername;
- (id)_teamsForAccount:(id)arg1 error:(id *)arg2;
- (void)_updateLocallyDerivedTeams;
- (void)_updateTeamsImpl:(CDUnknownBlockType)arg1 completionCallback:(CDUnknownBlockType)arg2;
- (void)_updateTeamsWithCacheLoadedCallback:(CDUnknownBlockType)arg1 completionCallback:(CDUnknownBlockType)arg2;
- (void)_setUpObservations;
- (void)_commonInitWithFullFunctionality:(BOOL)arg1;
@property(readonly, nonatomic) NSOrderedSet *teamsIncludingLocallyDerivedTeams;
@property(readonly, nonatomic) NSOrderedSet *teams;
- (void)forceReloadTeams;
- (void)_forceReloadInternalWithCacheLoadedCallback:(CDUnknownBlockType)arg1;
@property(retain) id <IDEProvisioningBasicTeam> lastSelectedTeam;
- (void)primitiveInvalidate;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (id)init;
- (id)initWithDeveloperAccountManager:(id)arg1 provisioningProfileManager:(id)arg2 signingCertificateManager:(id)arg3 teamAccountPairManager:(id)arg4 teamCacheUserDefaultsKey:(id)arg5 wantsFullFunctionality:(BOOL)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

