//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface NSObject (DVTBroadcastCenterAdditions)
- (void)dvt_broadcast:(id)arg1 userInfo:(id)arg2;
- (void)dvt_broadcast:(id)arg1;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)dvt_subscribeToBroadcast:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_subscribeToBroadcast:(id)arg1 block:(CDUnknownBlockType)arg2;
@end

