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

__attribute__((visibility("hidden")))
@interface GPUGVRank : NSObject
{
    NSMutableArray *nodes;
    double separation;
    GPUGVRank *prev;
    GPUGVRank *next;
    unsigned long long _optimizedNodeCount;
    struct GVOptimizeNode **_optimizedNodes;
}

@property(nonatomic) __weak GPUGVRank *next; // @synthesize next;
@property(nonatomic) __weak GPUGVRank *prev; // @synthesize prev;
- (void).cxx_destruct;
- (void)centerNode:(id)arg1 at:(double)arg2;
- (void)centerNodesWithRespectoTo:(id)arg1;
- (struct CGSize)sizeForDummy;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (unsigned long long)outCrossings;
- (unsigned long long)inCrossings;
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2;
- (unsigned long long)outCrossingsForNode:(unsigned long long)arg1;
- (unsigned long long)cachedOutCrossingsForNode:(unsigned long long)arg1;
- (unsigned long long)inCrossingsForNode:(unsigned long long)arg1;
- (unsigned long long)getOutCrossingsCount;
- (unsigned long long)getInCrossingsCount;
- (void)buildNodeIterators;
- (void)sortByIndex;
- (id)neighborsOfNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (id)nodes;
- (void)dealloc;
- (void)optimizeWithBase:(struct GVOptimizeNode *)arg1 rindex:(unsigned long long)arg2;
- (void)optimizeWeights;
- (struct GVOptimizeNode **)optimizeNodes;
- (void)cleanup;
- (id)initWithSeparation:(struct CGSize)arg1;

@end
