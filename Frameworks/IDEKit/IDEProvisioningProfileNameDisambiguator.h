//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface IDEProvisioningProfileNameDisambiguator : NSObject
{
    NSCountedSet *_profileNamesCountedSet;
    NSCountedSet *_profileNamesWithTeamsCountedSet;
}

+ (id)teamIDWithProfile:(id)arg1;
@property(retain, nonatomic) NSCountedSet *profileNamesWithTeamsCountedSet; // @synthesize profileNamesWithTeamsCountedSet=_profileNamesWithTeamsCountedSet;
@property(retain, nonatomic) NSCountedSet *profileNamesCountedSet; // @synthesize profileNamesCountedSet=_profileNamesCountedSet;
- (void).cxx_destruct;
- (id)nameForProfile:(id)arg1;
- (id)initWithProfileNamesCountedSetWithProfiles:(id)arg1 ineligibleProfiles:(id)arg2;

@end

