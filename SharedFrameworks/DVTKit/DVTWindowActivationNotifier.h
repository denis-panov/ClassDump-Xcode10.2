//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSMapTable, NSWindow;

@interface DVTWindowActivationNotifier : NSObject
{
    NSMapTable *_activationStateObservers;
    long long _nextKey;
    DVTWeakInterposer *_window_dvtWeakInterposer;
}

- (void).cxx_destruct;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)notifyObserversOfStateChange:(long long)arg1;
- (id)registerActivationStateObserver:(id)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
@property __weak NSWindow *window;

@end

