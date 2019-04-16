//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTObservingToken.h>

@class NSString;

@interface DVTObservingBlockToken : DVTObservingToken
{
    id _owner;
    id _observedObject;
    CDUnknownBlockType _handlerBlock;
    NSString *_keyPath;
}

@property(retain) id owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setHandlerBlock:(CDUnknownBlockType)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3;
- (void)_tearDownObserving;
- (void)_setupObservingWithOptions:(unsigned long long)arg1;
- (id)description;
- (void)_primitiveCancelObservation;
- (void)cancel;
- (id)initWithObservedObject:(id)arg1 owner:(id)arg2 creationBacktrace:(id)arg3;

@end
