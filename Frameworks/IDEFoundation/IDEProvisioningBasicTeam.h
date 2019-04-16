//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningBasicTeam-Protocol.h>

@class NSString;

@interface IDEProvisioningBasicTeam : NSObject <IDEProvisioningBasicTeam>
{
    BOOL _freeProvisioningTeam;
    NSString *_teamID;
    NSString *_teamName;
}

+ (id)basicTeamWithID:(id)arg1 name:(id)arg2;
@property(nonatomic, getter=isFreeProvisioningTeam) BOOL freeProvisioningTeam; // @synthesize freeProvisioningTeam=_freeProvisioningTeam;
@property(readonly, nonatomic) NSString *teamName; // @synthesize teamName=_teamName;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTeamID:(id)arg1 teamName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
