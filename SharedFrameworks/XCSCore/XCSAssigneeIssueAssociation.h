//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSObject.h>

#import <XCSCore/XCSIssueAssociationType-Protocol.h>

@class NSString;

@interface XCSAssigneeIssueAssociation : XCSObject <XCSIssueAssociationType>
{
}

+ (id)assigneeIssueAssociationWithUsername:(id)arg1 validationErrors:(id *)arg2;
+ (id)associationKey;
- (BOOL)_validateUsername:(id)arg1 fullName:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithUsername:(id)arg1 fullName:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *fullName; // @dynamic fullName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *username; // @dynamic username;

@end

