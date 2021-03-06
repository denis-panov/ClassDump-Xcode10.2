//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTNetworkingServiceAuthorizedAPI-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTNetworkingService : DTXService <DTNetworkingServiceAuthorizedAPI>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __NStatManager *_netstatMan;
    struct DTNStatSourceMap _sources;
    unsigned long long _seenInterfaces;
    unsigned long long _hiddenInterfaces;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    long long _interval;
    int _filteredToPid;
    BOOL _isAppleInternal;
    BOOL _isDisconnected;
}

+ (id)serviceName;
+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)replayLastRecordedSession;
- (void)setTargetPID:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)messageReceived:(id)arg1;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

