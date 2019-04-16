//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;
@protocol DVTTestDeviceClonePoolObserving, OS_dispatch_queue;

@interface DVTTestDeviceClonePoolObservation : NSObject
{
    id <DVTTestDeviceClonePoolObserving> _observer;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_originalDeviceIdentifier;
}

@property(readonly) NSString *originalDeviceIdentifier; // @synthesize originalDeviceIdentifier=_originalDeviceIdentifier;
@property(readonly) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly) __weak id <DVTTestDeviceClonePoolObserving> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 forClonesOfDeviceWithIdentifier:(id)arg2 callbackQueue:(id)arg3;

@end

