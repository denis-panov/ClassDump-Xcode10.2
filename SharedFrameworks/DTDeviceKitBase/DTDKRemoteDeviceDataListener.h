//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DTDeviceKitBase/NSNetServiceBrowserDelegate-Protocol.h>
#import <DTDeviceKitBase/NSNetServiceDelegate-Protocol.h>

@class NSString, NSThread;

@interface DTDKRemoteDeviceDataListener : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    struct __CFRunLoop *_listenerRunLoop;
    NSThread *_listenerThread;
    struct _AMDeviceNotificationContext *_deviceNotificationRef;
}

+ (id)sharedInstance;
@property(nonatomic) struct _AMDeviceNotificationContext *deviceNotificationRef; // @synthesize deviceNotificationRef=_deviceNotificationRef;
@property(retain) NSThread *listenerThread; // @synthesize listenerThread=_listenerThread;
- (void).cxx_destruct;
- (void)_rescan;
- (void)enumerateDevicesWithBlock:(CDUnknownBlockType)arg1;
- (id)allDevices;
- (id)allConnections;
- (void)presentError:(id)arg1;
- (void)listenerThreadImplementation;
- (void)notifyDeviceNotificationsStopped;
- (void)_unsubscribe;
- (void)_subscribe;
- (void)stopListening;
- (void)startListening;
@property(nonatomic) struct __CFRunLoop *listenerRunLoop; // @synthesize listenerRunLoop=_listenerRunLoop;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

