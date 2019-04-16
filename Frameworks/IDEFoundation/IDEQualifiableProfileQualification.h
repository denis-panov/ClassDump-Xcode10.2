//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPlatform, NSString;
@protocol DVTQualifiableProfile, IDEProvisioningBasicTeam;

@interface IDEQualifiableProfileQualification : NSObject
{
    BOOL _allowTeamProfiles;
    BOOL _verboseErrors;
    id <DVTQualifiableProfile> _profile;
    id <IDEProvisioningBasicTeam> _team;
    NSString *_bundleID;
    DVTPlatform *_platform;
}

@property(retain, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) id <DVTQualifiableProfile> profile; // @synthesize profile=_profile;
@property(nonatomic) BOOL verboseErrors; // @synthesize verboseErrors=_verboseErrors;
@property(nonatomic) BOOL allowTeamProfiles; // @synthesize allowTeamProfiles=_allowTeamProfiles;
- (void).cxx_destruct;
- (id)activeQualifier;
- (id)notExpiredQualifier;
- (id)manuallyManagedQualifier;
- (id)platformQualifier;
- (id)teamIDQualifier;
- (id)bundleIDQualifier;
- (BOOL)qualifyWithQualifiers:(id)arg1;
- (BOOL)qualifyForManuallyManagedActiveNotExpired;
- (BOOL)qualifyForManuallyManaged;
- (id)manualQualifiers;
- (id)manualQualifiersIncludingExpiredAndInactiveQualifiers:(BOOL)arg1;
- (id)initWithProfile:(id)arg1 team:(id)arg2 bundleID:(id)arg3 platform:(id)arg4;

@end
