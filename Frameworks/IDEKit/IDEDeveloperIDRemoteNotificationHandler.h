//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/IDERemoteNotificationHandling-Protocol.h>

@class NSString;

@interface IDEDeveloperIDRemoteNotificationHandler : NSObject <IDERemoteNotificationHandling>
{
}

- (BOOL)handleNotificationPayload:(id)arg1 error:(id *)arg2;
- (BOOL)canHandleNotificationPayload:(id)arg1;
- (id)_devIDPlusDictionaryFromPayload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

