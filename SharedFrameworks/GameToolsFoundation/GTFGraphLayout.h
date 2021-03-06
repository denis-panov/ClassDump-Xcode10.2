//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class GTFGraph, GTFGraphLayoutLayer;

@interface GTFGraphLayout : NSObject
{
    GTFGraph *_graph;
    GTFGraphLayoutLayer *_layers;
}

@property(retain, nonatomic) GTFGraphLayoutLayer *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) GTFGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)assignLayers;
- (void)undoRemoveCycles;
- (id)sortedNodes;
- (void)removeCycles;
- (void)_removeCycleDFS:(id)arg1 visistedNodes:(id)arg2 nodesInStack:(id)arg3;
- (void)reAddSelfEdges;
- (void)removeSelfEdges;
- (void)doLayout:(id)arg1;

@end

