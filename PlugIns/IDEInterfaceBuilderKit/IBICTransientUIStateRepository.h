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

@interface IBICTransientUIStateRepository : NSObject
{
    IBMutableIdentityDictionary *_state;
}

- (void).cxx_destruct;
- (void)setState:(id)arg1 forKey:(id)arg2 onItem:(id)arg3;
- (void)setState:(id)arg1 forKey:(id)arg2;
- (id)stateForKey:(id)arg1 onItem:(id)arg2;
- (id)stateForKey:(id)arg1;
- (id)init;

@end

