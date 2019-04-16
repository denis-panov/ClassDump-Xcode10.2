//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProvisioningBasicTeam.h>

@class NSString;

@interface IDEProvisioningDisambiguatableBasicTeam : IDEProvisioningBasicTeam
{
    NSString *_teamType;
    NSString *_username;
    NSString *_disambiguatedName;
}

@property(retain, nonatomic) NSString *disambiguatedName; // @synthesize disambiguatedName=_disambiguatedName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *teamType; // @synthesize teamType=_teamType;
- (void).cxx_destruct;
- (id)teamName;
@property(readonly, nonatomic) NSString *originalName;
- (id)initWithTeamID:(id)arg1 teamName:(id)arg2;
- (id)description;

@end

