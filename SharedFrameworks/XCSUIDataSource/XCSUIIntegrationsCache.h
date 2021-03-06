//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSUICache-Protocol.h>

@class DVTDispatchLock, NSArray, NSMutableDictionary;

@interface XCSUIIntegrationsCache : NSObject <XCSUICache>
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_integrationSnapshots;
}

- (void).cxx_destruct;
- (id)integrationSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3;
- (id)integrationSnapshotForIntegration:(id)arg1;
- (id)_purgeSnapshotForIntegrationID:(id)arg1 botID:(id)arg2 onService:(id)arg3;
- (id)cachedIntegrationSnapshotForKey:(id)arg1;
- (void)_removeIntegrationSnapshotForKey:(id)arg1;
- (id)integrationCacheKeyForIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3;
- (id)integrationCacheKeyForSnapshot:(id)arg1;
- (void)purgeSnapshotsForService:(id)arg1;
- (void)purgeSnapshot:(id)arg1;
- (void)cacheSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)description;
- (id)init;

@end

