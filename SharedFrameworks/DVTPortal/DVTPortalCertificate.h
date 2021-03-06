//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPortalCertificateType, DVTPortalTeam, DVTSigningCertificate, NSDate, NSString;

@interface DVTPortalCertificate : NSObject
{
    NSString *_name;
    DVTPortalTeam *_team;
    DVTSigningCertificate *_signingCertificate;
    DVTPortalCertificateType *_portalCertificateType;
    NSDate *_expirationDate;
    NSString *_serialNumber;
    NSString *_machineName;
    NSString *_machineID;
    NSString *_creatorName;
    NSString *_creatorEmail;
    NSString *_portalID;
    NSString *_status;
    NSString *_creatorFirstName;
    NSString *_creatorLastName;
}

+ (id)errorForCreatePermissionsFailureWithName:(id)arg1;
+ (id)errorForRevocationPermissionsFailureWithName:(id)arg1;
+ (id)errorForNoMatchingCertificate;
+ (id)teamDevelopmentCertificateWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
+ (id)certificatesForSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
@property(copy, nonatomic) NSString *creatorLastName; // @synthesize creatorLastName=_creatorLastName;
@property(copy, nonatomic) NSString *creatorFirstName; // @synthesize creatorFirstName=_creatorFirstName;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly, nonatomic) NSString *creatorEmail; // @synthesize creatorEmail=_creatorEmail;
@property(copy, nonatomic) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) DVTPortalCertificateType *portalCertificateType; // @synthesize portalCertificateType=_portalCertificateType;
@property(retain, nonatomic) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
- (id)description;
- (BOOL)revokeWithSession:(id)arg1 bypassPermissionsCheck:(BOOL)arg2 error:(id *)arg3;
- (BOOL)revokeWithSession:(id)arg1 error:(id *)arg2;

@end

