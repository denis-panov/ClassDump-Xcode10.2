//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSMutableDictionary.h>

@class IBMutableOrderedSet;

@interface IBMutableOrderedDictionary : NSMutableDictionary
{
    IBMutableOrderedSet *set;
    CDStruct_f2932e27 keyCallbacks;
    CDStruct_b3b3fc87 objCallbacks;
}

- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)firstObject;
- (id)firstKey;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithKeyCallbacks:(CDStruct_f2932e27)arg1 andValueCallbacks:(CDStruct_b3b3fc87)arg2;

@end

