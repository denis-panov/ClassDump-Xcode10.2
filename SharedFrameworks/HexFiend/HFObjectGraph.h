//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HFObjectGraph : NSObject
{
    struct __CFDictionary *graph;
    NSMutableArray *containedObjects;
}

- (id)topologicallySortObjects:(id)arg1;
- (id)stronglyConnectedComponentsForObjects:(id)arg1;
- (id)dependenciesForObject:(id)arg1;
- (BOOL)object:(id)arg1 hasDependency:(id)arg2;
- (void)addDependency:(id)arg1 forObject:(id)arg2;
- (void)dealloc;
- (id)init;

@end

