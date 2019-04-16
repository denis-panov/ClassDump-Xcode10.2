//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IBMouseMovedObserver : NSObject
{
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableDictionary *_restObservers;
    NSMutableDictionary *_moveObservers;
    struct CGPoint _lastPoint;
}

+ (unsigned long long)mouseButtonState;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)arg1;
- (id)registerMouseRestedObserver:(CDUnknownBlockType)arg1;
- (id)registerMouseMovedObserver:(CDUnknownBlockType)arg1;
- (id)registerMouseObserver:(CDUnknownBlockType)arg1 inTable:(id)arg2;
- (long long)observerCount;
- (void)stopObserving;
- (void)startObserving;
- (void)dispatchMouseMovedEvents;
- (id)init;

@end

