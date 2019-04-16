//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTCancellableOwner, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface DVTKVOCollectionNotificationForwarder : NSObject
{
    NSObject<OS_dispatch_queue> *_updateQueue;
    id _object;
    NSString *_collectionKeyPath;
    NSArray *_objectKeyPaths;
    DVTCancellableOwner *_cancellables;
    long long _signal;
}

@property(readonly) long long signal; // @synthesize signal=_signal;
- (void).cxx_destruct;
- (void)_update;
- (id)initWithObject:(id)arg1 collectionKeyPath:(id)arg2 objectKeyPaths:(id)arg3 updateQueue:(id)arg4;

@end

