//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class DVTPortalCertificateType, NSArray;

@interface IDEProvisioningChooseAndRevokeCertificateUserAction : IDEProvisioningUserAction
{
    NSArray *_certificates;
    DVTPortalCertificateType *_type;
}

+ (id)chooseAndRevokeCertificateUserActionWithCertificates:(id)arg1 type:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) DVTPortalCertificateType *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (id)executionMessage;
- (id)userActionName;
- (id)userActionMessage;
- (id)userActionTitle;
- (void)userDidAuthorizeForCertificate:(id)arg1;
- (BOOL)preflightWithError:(id *)arg1;
- (id)initWithCertificates:(id)arg1 type:(id)arg2 context:(id)arg3;

@end

