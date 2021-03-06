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

@interface XCSUIIssuesStreaksCache : NSObject <XCSUICache>
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_botIssuesStreakByBotSnapshotKey;
}

- (void).cxx_destruct;
- (id)streakForBot:(id)arg1;
- (id)cacheKeyForSnapshot:(id)arg1;
- (void)purgeSnapshotsForService:(id)arg1;
- (void)purgeSnapshot:(id)arg1;
- (void)cacheSnapshot:(id)arg1;
@property(readonly, nonatomic) NSArray *snapshots;
- (id)description;
- (id)init;

@end

