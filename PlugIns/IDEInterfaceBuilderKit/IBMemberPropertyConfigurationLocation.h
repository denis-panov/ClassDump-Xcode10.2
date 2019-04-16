//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBMemberConfiguration, NSString;

@interface IBMemberPropertyConfigurationLocation : NSObject
{
    NSObject *_member;
    NSString *_property;
    IBMemberConfiguration *_configuration;
}

+ (id)locationWithMember:(id)arg1 property:(id)arg2 configuration:(id)arg3;
@property(readonly) IBMemberConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSString *property; // @synthesize property=_property;
@property(readonly) NSObject *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (id)description;
- (void)setEvaluatedValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)effectiveValue;
- (id)explicitValue;
- (id)configurationPropertyStorage;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMemberPropertyConfigurationLocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMember:(id)arg1 property:(id)arg2 configuration:(id)arg3;

@end

