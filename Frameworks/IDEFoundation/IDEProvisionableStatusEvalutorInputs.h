//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEProvisionableSnapshot, NSSet;
@protocol IDEProvisioningErrorProvider;

@interface IDEProvisionableStatusEvalutorInputs : NSObject
{
    IDEProvisionableSnapshot *_provisionableSnapshot;
    NSSet *_provisioningProfiles;
    NSSet *_signingCertificates;
    NSSet *_deviceSnapshots;
    long long _automaticLocationStyle;
    id <IDEProvisioningErrorProvider> _errorProvider;
}

+ (id)_processedDeviceSnapshots:(id)arg1 usingProvisionableSnapshot:(id)arg2;
+ (id)evaluatorInputsWithProvisionableSnapshot:(id)arg1 provisioningProfiles:(id)arg2 signingCertificates:(id)arg3 deviceSnapshots:(id)arg4 automaticLocationStyle:(long long)arg5 errorProvider:(id)arg6;
@property(readonly, nonatomic) id <IDEProvisioningErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(readonly, nonatomic) long long automaticLocationStyle; // @synthesize automaticLocationStyle=_automaticLocationStyle;
@property(readonly, nonatomic) NSSet *deviceSnapshots; // @synthesize deviceSnapshots=_deviceSnapshots;
@property(readonly, nonatomic) NSSet *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
@property(readonly, nonatomic) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain, nonatomic) IDEProvisionableSnapshot *provisionableSnapshot; // @synthesize provisionableSnapshot=_provisionableSnapshot;
- (void).cxx_destruct;
- (id)description;

@end

