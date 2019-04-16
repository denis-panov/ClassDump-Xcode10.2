//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTApplicationListingServiceRequests-Protocol.h>
#import <DVTInstrumentsFoundation/DTApplicationWorkspaceClient-Protocol.h>

@class NSString;

@interface DTApplicationListingService : DTXService <DTApplicationWorkspaceClient, DTApplicationListingServiceRequests>
{
}

+ (void)registerCapabilities:(id)arg1;
- (void)unregisterUpdateToken:(id)arg1;
- (id)installedApplicationsMatching:(id)arg1 registerUpdateToken:(id)arg2;
- (void)_sendNotification:(id)arg1 install:(BOOL)arg2;
- (void)applicationUninstalled:(id)arg1;
- (void)applicationInstalled:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

