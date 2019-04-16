//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProvisioningRepairDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningTeamSelectionDataSource-Protocol.h>

@class NSOrderedSet;
@protocol IDEProvisioningBasicSigningIdentity;

@protocol IDEProvisioningSigningCertificateSelectionDataSource <IDEProvisioningTeamSelectionDataSource, IDEProvisioningRepairDataSource>
@property(readonly) BOOL wantsTeamSelectionRegardlessOfSigningStyle;
@property(readonly) long long signingStyle;
@property(retain, nonatomic) id <IDEProvisioningBasicSigningIdentity> signingIdentity;
@property(readonly, nonatomic) NSOrderedSet *signingIdentities;
@property(readonly) BOOL isSigningIdentityChangeable;
- (void)enableDevelopmentSigning;
@end
