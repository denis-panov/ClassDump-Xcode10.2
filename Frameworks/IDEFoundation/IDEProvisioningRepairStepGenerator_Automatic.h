//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProvisioningRepairStepGenerator.h>

@interface IDEProvisioningRepairStepGenerator_Automatic : IDEProvisioningRepairStepGenerator
{
}

- (id)_createProfileStepWithCharacteristics:(id)arg1;
- (BOOL)_areDevicesRegisteredWithSession:(id)arg1 context:(id)arg2 devices:(id)arg3 missingDevices:(id *)arg4 error:(id *)arg5;
- (id)_registerDeviceRepairStepWithDevice:(id)arg1 team:(id)arg2;
- (BOOL)_evaluateDevicesWithSession:(id)arg1 context:(id)arg2 repairable:(id)arg3 steps:(id)arg4 userAction:(id *)arg5 error:(id *)arg6;
- (id)_errorForDistributionCertsAlreadyExist:(id)arg1 context:(id)arg2;
- (BOOL)_evaluateCertificatesWithSession:(id)arg1 context:(id)arg2 repairable:(id)arg3 steps:(id)arg4 userAction:(id *)arg5 error:(id *)arg6;
- (id)_createCertificateRepairStepWithCertificateType:(id)arg1;
- (BOOL)_isUnderLimitForCertificateType:(id)arg1 certificates:(id)arg2 context:(id)arg3;
- (BOOL)_newestLocalCertIsOnPortal:(id)arg1 type:(id)arg2 context:(id)arg3;
- (id)stepsWithSession:(id)arg1 context:(id)arg2 userAction:(id *)arg3 error:(id *)arg4;

@end

