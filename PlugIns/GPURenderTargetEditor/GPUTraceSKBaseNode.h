//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SpriteKit/SKNode.h>

@class GPUTraceStatBox, GVBaseNode, NSMutableArray, SKLabelNode, SKShapeNode, SKSpriteNode;

__attribute__((visibility("hidden")))
@interface GPUTraceSKBaseNode : SKNode
{
    SKSpriteNode *_thumbnail;
    SKSpriteNode *_issueBadge;
    SKNode *_highlight;
    SKShapeNode *_statHighlight;
    SKLabelNode *_titleLabel;
    GPUTraceStatBox *_statBox;
    BOOL _selected;
    NSMutableArray *_outgoingEdges;
    NSMutableArray *_incomingEdges;
    GVBaseNode *_node;
}

@property __weak GVBaseNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (BOOL)hasIssues;
- (id)incomingEdges;
- (id)outgoingEdges;
- (void)addOutgoingEdge:(id)arg1;
- (void)addIncomingEdge:(id)arg1;
- (id)mutateOutgoingPath:(id)arg1;
- (id)mutateIncomingPath:(id)arg1;
- (void)setStatsHidden:(BOOL)arg1;
- (void)setThumbnail:(id)arg1;
- (void)draw;
- (id)initWithNode:(id)arg1;

@end

