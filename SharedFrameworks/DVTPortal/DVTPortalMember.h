//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTPortalMembershipPermissions, NSArray, NSError, NSNumber, NSString;

@interface DVTPortalMember : NSObject
{
    NSString *_memberID;
    NSError *_memberIDError;
    NSNumber *_isRegisteredAppleDeveloper;
    NSError *_isRegisteredAppleDeveloperError;
    DVTDispatchLock *_memberLock;
    NSString *_firstName;
    NSString *_lastName;
    NSNumber *_personID;
    DVTPortalMembershipPermissions *_permissions;
    NSString *_teamMemberID;
    NSString *_emailAddress;
    NSArray *_roles;
}

@property(copy, nonatomic) NSArray *roles; // @synthesize roles=_roles;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *teamMemberID; // @synthesize teamMemberID=_teamMemberID;
@property(retain, nonatomic) DVTPortalMembershipPermissions *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSNumber *personID; // @synthesize personID=_personID;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)isRegisteredAppleDeveloperWithSession:(id)arg1 error:(id *)arg2;
- (id)developerIDWithSession:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *roleDescription;
- (id)description;
- (id)init;

@end

