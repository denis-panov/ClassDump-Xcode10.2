//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTDelayedInvocation, DVTDispatchLock, DVTSearchPath, DVTToolchain, NSDictionary, NSSet;
@protocol DVTUserDefaults;

@interface DVTToolchainRegistry : NSObject
{
    DVTSearchPath *_searchPath;
    NSSet *_appleApprovedPaths;
    id <DVTUserDefaults> _userDefaults;
    DVTDispatchLock *_lock;
    NSSet *_toolchains;
    NSDictionary *_invalidToolchains;
    NSDictionary *_identsToToolchains;
    NSDictionary *_aliasesToToolchains;
    DVTDelayedInvocation *_scanSearchPathsInvocation;
}

+ (BOOL)verifySignatureRevocationStatusForPath:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingAvailableOverrideToolchains;
+ (id)keyPathsForValuesAffectingAvailableBuildSystemToolchains;
+ (id)keyPathsForValuesAffectingActiveDefaultToolchain;
+ (id)keyPathsForValuesAffectingDefaultToolchainOverride;
+ (id)keyPathsForValuesAffectingDefaultToolchain;
+ (BOOL)registerToolchain:(id)arg1 identsToToolchains:(id)arg2 aliasesToToolchains:(id)arg3 appleApprovedPaths:(id)arg4 error:(id *)arg5;
+ (id)defaultRegistry;
- (void).cxx_destruct;
- (id)swiftDemangleToolchainForToolchains:(id)arg1;
- (id)llvmProfdataToolchainForToolchains:(id)arg1;
- (id)lldbToolchainForToolchains:(id)arg1;
- (BOOL)isBuiltInToolchain:(id)arg1;
- (BOOL)verifyToolchain:(id)arg1 error:(id *)arg2;
@property(readonly) NSSet *availableOverrideToolchains;
@property(readonly) NSSet *availableBuildSystemToolchains;
- (id)defaultToolchainOverrideForBuildSettings:(id)arg1;
- (id)toolchainsForToolchainsBuildSettingValue:(id)arg1;
@property(readonly) DVTToolchain *activeDefaultToolchain;
@property(retain) DVTToolchain *defaultToolchainOverride;
- (void)scanSearchPaths;
@property(readonly) DVTToolchain *defaultToolchain;
- (id)_toolchainForIdentifier:(id)arg1;
- (id)toolchainForIdentifier:(id)arg1;
@property(readonly) NSDictionary *invalidToolchains;
@property(readonly) NSSet *toolchains;
- (void)dealloc;
- (id)init;
- (id)initWithSearchPath:(id)arg1 appleApprovedPaths:(id)arg2 userDefaults:(id)arg3;

@end

