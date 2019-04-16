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

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, DVTStackBacktrace, IDEProvisioningContext, IDEProvisioningMechanic, IDEProvisioningTeamManager, NSString;
@protocol IDEProvisioningErrorProvider;

@interface IDEProvisioningManagerContext : NSObject <DVTInvalidation>
{
    IDEProvisioningContext *_provisioningContext;
    IDEProvisioningMechanic *_mechanic;
}

+ (void)initialize;
@property(retain, nonatomic) IDEProvisioningMechanic *mechanic; // @synthesize mechanic=_mechanic;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDEProvisioningErrorProvider> errorProvider;
@property(readonly, nonatomic) long long automaticLocationStyle;
@property(readonly, nonatomic) long long repairMode;
@property(readonly, nonatomic) long long evaluationMode;
@property(readonly, nonatomic) DVTProvisioningProfileManager *profileManager;
@property(readonly, nonatomic) DVTSigningCertificateManager *certificateManager;
@property(readonly, nonatomic) IDEProvisioningTeamManager *teamManager;
- (id)newProvisionableManagerForProvisionable:(id)arg1 provisioningManager:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithProvisioningContext:(id)arg1 mechanic:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
