//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSSet;

@interface IDEEntitlementsDictionary : NSObject <NSCopying>
{
    _Bool _frozen;
    id _storage;
    IDEEntitlementsDictionary *_parent;
}

+ (id)whiteoutMarker;
@property(readonly) IDEEntitlementsDictionary *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property(readonly) unsigned long long count;
@property(readonly, copy) NSSet *allValues;
@property(readonly, copy) NSSet *allKeys;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)deltaRepresentation;
- (id)flatRepresentation;
- (id)mutableChildByApplyingDelta:(id)arg1;
- (void)applyDelta:(id)arg1;
- (id)mutableChild;
- (void)freeze;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

