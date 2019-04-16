//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBScopedSingleton-Protocol.h>

@class NSString;

@interface IBOSVersion : NSObject <IBScopedSingleton>
{
}

+ (id)allHybridNIBPackageRuntimeFileNames;
+ (id)oldestVersion;
+ (id)currentVersion;
+ (id)versionsFromOldestToNewestStartingFrom:(id)arg1;
+ (id)versionsFromOldestToNewest;
+ (id)versionsFromNewestToOldest;
+ (id)osVersionForSystemTarget:(long long)arg1;
+ (Class)instanceScopingClass;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (long long)compareFirstApplicableSystemTarget:(id)arg1;
- (BOOL)isAtLeast:(long long)arg1;
- (BOOL)matchesSystemTarget:(long long)arg1;
- (id)firstInapplicableSystemTarget;
- (id)firstApplicableSystemTarget;
- (id)compiledStoryboardInfoPlistFileName;
- (id)hybridNIBPackageRuntimeFileName;
- (id)explicitArchiveIdentifier;
- (id)archiveIdentifier;
- (id)targetRuntimeIdentifierSuffix;
- (id)identifier;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

