//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTDeviceLocator.h>

@interface DVTDeviceLocator (KitAdditions)
- (void)beginPairingAssistantForDevice:(id)arg1 withWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginDeviceCreationAssistantWithWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL canCreateDevices;
@end

