//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBMutableIdentityDictionary;

@interface IBKVCAbstractWrapper : NSObject
{
    IBMutableIdentityDictionary *_registeredKeyPathsByContextByObserver;
    id _foo;
}

@property(retain) id foo; // @synthesize foo=_foo;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)unregisterObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)registerObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (BOOL)hasObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;

@end

