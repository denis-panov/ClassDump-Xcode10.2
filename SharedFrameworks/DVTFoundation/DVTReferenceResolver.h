//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol DVTReferenceResolverClient;

@interface DVTReferenceResolver : NSObject
{
    NSMutableArray *_strategies;
    id <DVTReferenceResolverClient> _client;
}

+ (id)backgroundResolutionQueue;
+ (id)resolverWithStrategy:(id)arg1;
+ (void)initialize;
@property(retain) id <DVTReferenceResolverClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)description;
- (id)configureWithPersistentRepresentationsOfInput:(id)arg1;
- (id)persistentRepresentationsOfInput:(id)arg1;
- (id)resolveInput:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *displayName;
- (void)replaceStrategiesAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)removeStrategiesAtIndexes:(id)arg1;
- (void)insertStrategies:(id)arg1 atIndex:(id)arg2;
- (void)replaceObjectInStrategiesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromStrategiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inStrategiesAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *strategies; // @dynamic strategies;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableStrategies; // @dynamic mutableStrategies;

@end

