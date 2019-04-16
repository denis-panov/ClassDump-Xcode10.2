//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSArray;
@protocol IDEFlightChecking;

@interface Xcode3HardenedRuntimeItemModel : IDEProjectItemModel
{
    NSArray *_hardenedRuntimeAllowances;
    id <IDEFlightChecking> _entitlementsFlightCheck;
    id <IDEFlightChecking> _buildSettingsFlightCheck;
    id <IDEFlightChecking> _signingIdentityFlightCheck;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
@property(readonly) id <IDEFlightChecking> signingIdentityFlightCheck; // @synthesize signingIdentityFlightCheck=_signingIdentityFlightCheck;
@property(readonly) id <IDEFlightChecking> buildSettingsFlightCheck; // @synthesize buildSettingsFlightCheck=_buildSettingsFlightCheck;
@property(readonly) id <IDEFlightChecking> entitlementsFlightCheck; // @synthesize entitlementsFlightCheck=_entitlementsFlightCheck;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) NSArray *hardenedRuntimeAllowances; // @synthesize hardenedRuntimeAllowances=_hardenedRuntimeAllowances;

@end
