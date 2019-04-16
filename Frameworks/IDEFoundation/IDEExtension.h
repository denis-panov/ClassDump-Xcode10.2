//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTToolsVersion, NSExtension, NSString, NSTimer, NSXPCConnection, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface IDEExtension : NSObject
{
    NSXPCConnection *_serviceConnection;
    NSTimer *_checkInTimer;
    NSExtension *_extension;
    NSString *_name;
    NSString *_identifier;
    DVTToolsVersion *_builtAgainstXcodeVersion;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id _service;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

+ (id)startLocatingExtensionsOfExtensionPoint:(id)arg1 didStartExtensions:(CDUnknownBlockType)arg2 didStopExtensions:(CDUnknownBlockType)arg3;
+ (id)extensions;
+ (id)timedOutExtensions;
+ (void)extensionRemoved:(id)arg1 extensionIdentifier:(id)arg2;
+ (void)extensionDiscovered:(id)arg1 extension:(id)arg2;
+ (void)reportExtensionTimeOut:(id)arg1 timeout:(double)arg2;
+ (id)extensionObservers;
+ (void)observeExtensionsDidChangeForIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)initialize;
@property(readonly) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(readonly) id service; // @synthesize service=_service;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(readonly, copy) DVTToolsVersion *builtAgainstXcodeVersion; // @synthesize builtAgainstXcodeVersion=_builtAgainstXcodeVersion;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (BOOL)finishRestart:(CDUnknownBlockType)arg1;
- (BOOL)finishStop:(CDUnknownBlockType)arg1;
- (BOOL)finishStart:(CDUnknownBlockType)arg1;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (void)restart:(CDUnknownBlockType)arg1;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_verifyBuiltInExtensionsContinueAfterCheckIn;
- (id)_safelyAwaitServiceEndpointWithHostContext:(id)arg1;
- (BOOL)_safelyAwaitCheckInWithHostContext:(id)arg1;
- (void)_safelyAbortCheckInWithHostContext:(id)arg1 reason:(id)arg2;
@property(readonly) NSXPCInterface *extensionServiceInterface;
@property(readonly, copy) NSString *extensionBootstrapClassName;
- (id)description;
- (id)initWithExtension:(id)arg1;

@end

