//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTKeychain, DVTPortalTeam, DVTServicesSession, NSArray, NSError, NSFileHandle, NSString;

@interface IDEPortalTool : NSObject
{
    NSString *_name;
    NSArray *_arguments;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSString *_inputUser;
    NSString *_inputTeamID;
    NSString *_inputUDID;
    NSString *_inputPlatformIdentifier;
    NSString *_inputBundleIdentifier;
    NSString *_inputProfileTypeIdentifier;
    NSString *_inputCertificateTypeIdentifier;
    NSString *_inputKeychainPassword;
    NSString *_inputKeychainPath;
    NSString *_inputProfilePath;
    NSArray *_inputManualStyleProfileUDIDs;
    NSString *_inputManualStyleProfileName;
    NSArray *_inputFeatureIdentifiers;
    NSArray *_inputFeatureValues;
    NSArray *_inputContainerIdentifiers;
    NSString *_inputMachineName;
    NSString *_inputMachineID;
    NSString *_inputSerialNumber;
    long long _command;
    DVTServicesSession *_session;
    DVTPortalTeam *_team;
    DVTKeychain *_keychain;
    NSError *_keychainError;
}

@property(retain, nonatomic) NSError *keychainError; // @synthesize keychainError=_keychainError;
@property(retain, nonatomic) DVTKeychain *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(retain, nonatomic) DVTServicesSession *session; // @synthesize session=_session;
@property(nonatomic) long long command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *inputSerialNumber; // @synthesize inputSerialNumber=_inputSerialNumber;
@property(retain, nonatomic) NSString *inputMachineID; // @synthesize inputMachineID=_inputMachineID;
@property(retain, nonatomic) NSString *inputMachineName; // @synthesize inputMachineName=_inputMachineName;
@property(retain, nonatomic) NSArray *inputContainerIdentifiers; // @synthesize inputContainerIdentifiers=_inputContainerIdentifiers;
@property(retain, nonatomic) NSArray *inputFeatureValues; // @synthesize inputFeatureValues=_inputFeatureValues;
@property(retain, nonatomic) NSArray *inputFeatureIdentifiers; // @synthesize inputFeatureIdentifiers=_inputFeatureIdentifiers;
@property(retain, nonatomic) NSString *inputManualStyleProfileName; // @synthesize inputManualStyleProfileName=_inputManualStyleProfileName;
@property(retain, nonatomic) NSArray *inputManualStyleProfileUDIDs; // @synthesize inputManualStyleProfileUDIDs=_inputManualStyleProfileUDIDs;
@property(retain, nonatomic) NSString *inputProfilePath; // @synthesize inputProfilePath=_inputProfilePath;
@property(retain, nonatomic) NSString *inputKeychainPath; // @synthesize inputKeychainPath=_inputKeychainPath;
@property(retain, nonatomic) NSString *inputKeychainPassword; // @synthesize inputKeychainPassword=_inputKeychainPassword;
@property(retain, nonatomic) NSString *inputCertificateTypeIdentifier; // @synthesize inputCertificateTypeIdentifier=_inputCertificateTypeIdentifier;
@property(retain, nonatomic) NSString *inputProfileTypeIdentifier; // @synthesize inputProfileTypeIdentifier=_inputProfileTypeIdentifier;
@property(retain, nonatomic) NSString *inputBundleIdentifier; // @synthesize inputBundleIdentifier=_inputBundleIdentifier;
@property(retain, nonatomic) NSString *inputPlatformIdentifier; // @synthesize inputPlatformIdentifier=_inputPlatformIdentifier;
@property(retain, nonatomic) NSString *inputUDID; // @synthesize inputUDID=_inputUDID;
@property(retain, nonatomic) NSString *inputTeamID; // @synthesize inputTeamID=_inputTeamID;
@property(retain, nonatomic) NSString *inputUser; // @synthesize inputUser=_inputUser;
@property(copy, nonatomic) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(copy, nonatomic) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(copy, nonatomic) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)_commandFromString:(id)arg1 error:(id *)arg2;
- (BOOL)_parseArgumentsWithError:(id *)arg1;
- (id)_pathRequiredError;
- (id)_platformRequiredError;
- (BOOL)_ensureRequiredArgumentsWithError:(id *)arg1;
- (BOOL)revokeIdentityWithError:(id *)arg1;
- (BOOL)downloadIdentityWithError:(id *)arg1;
- (BOOL)downloadProfileWithError:(id *)arg1;
- (BOOL)addDeviceWithError:(id *)arg1;
- (BOOL)purgeDeveloperAccountWithError:(id *)arg1;
- (id)_containerTypesToValues:(id *)arg1;
- (id)_featuresToValues:(id *)arg1;
- (id)_portalDevicesForManualStyleProfile:(id *)arg1;
- (id)_certificateTypeWithError:(id *)arg1;
- (id)_programWithError:(id *)arg1;
- (id)_platformWithError:(id *)arg1;
- (id)_profileTypeWithError:(id *)arg1;
- (id)_sessionWithError:(id *)arg1;
- (id)_teamWithError:(id *)arg1;
- (id)_developerAccountWithError:(id *)arg1;
- (id)_signingCertificateManagerWithError:(id *)arg1;
- (id)_provisioningProfileManager;
- (id)_credentialsManagerWithError:(id *)arg1;
- (BOOL)_wantsAllApplicationsToAccessKeychainItems;
- (id)_keychainWithError:(id *)arg1;
- (BOOL)runWithError:(id *)arg1;
- (id)init;

@end

