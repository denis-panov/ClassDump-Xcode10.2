//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface GPUGVGraph : NSObject
{
    NSArray *_subgraphs;
    NSMutableOrderedSet *nodes;
    NSMutableOrderedSet *edges;
    struct CGSize _size;
}

@property struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableOrderedSet *edges; // @synthesize edges;
@property(retain, nonatomic) NSMutableOrderedSet *nodes; // @synthesize nodes;
- (void).cxx_destruct;
- (id)description;
- (void)iterateOverAllNodes:(CDUnknownBlockType)arg1;
- (void)iterateOverAllEdges:(CDUnknownBlockType)arg1;
- (void)redrawEdges:(id)arg1;
- (BOOL)redraw:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (_Bool)render:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)connectedSubgraphs;
- (void)undoReverseEdge:(id)arg1;
- (void)reverseEdge:(id)arg1;
- (void)removeEdgeFrom:(id)arg1 to:(id)arg2;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2 atSlot:(unsigned long long)arg3 reversed:(_Bool)arg4;
- (void)addEdgeFrom:(id)arg1 atSlot:(unsigned long long)arg2 to:(id)arg3;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;
- (BOOL)hasEdgeFrom:(id)arg1 to:(id)arg2;
- (id)edgeFrom:(id)arg1 to:(id)arg2;
- (id)allEdges;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (BOOL)hasNode:(id)arg1;
- (id)allNodes;
- (void)dealloc;
- (id)init;

@end

