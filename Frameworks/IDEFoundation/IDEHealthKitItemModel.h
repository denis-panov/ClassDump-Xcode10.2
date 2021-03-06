//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSSet;
@protocol IDEFlightChecking;

@interface IDEHealthKitItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    id <IDEFlightChecking> _entitlementsFlightCheck;
    NSSet *_healthKitCapabilities;
}

+ (id)keyPathsForValuesAffectingHealthRecords;
+ (id)keyPathsForValuesAffectingSupportsHealthRecords;
@property(retain, nonatomic) NSSet *healthKitCapabilities; // @synthesize healthKitCapabilities=_healthKitCapabilities;
- (void).cxx_destruct;
@property(nonatomic) BOOL healthRecords; // @dynamic healthRecords;
- (void)_setHealthRecords:(BOOL)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL supportsHealthRecords;
- (void)removeEnabledHealthKitCapability:(id)arg1;
- (void)addEnabledHealthKitCapability:(id)arg1;
- (BOOL)isEnabledHealthKitCapability:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)linkedFrameworksFlightCheck;
- (id)entitlementsFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

