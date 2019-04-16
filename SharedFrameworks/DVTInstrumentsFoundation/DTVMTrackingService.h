//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTVMTrackingServiceAuthorizedAPI-Protocol.h>

@class NSString, XRVMState;

@interface DTVMTrackingService : DTXService <DTVMTrackingServiceAuthorizedAPI>
{
    int _targetPid;
    unsigned int _targetTask;
    XRVMState *_currentState;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)stopTracking;
- (void)startTracking;
- (id)requestVMSnapshot;
- (void)setTargetPid:(id)arg1 referenceDate:(id)arg2;
- (id)configureLaunchEnvironment:(id)arg1;
- (void)messageReceived:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

