//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class GPUGVEdge, GPUGVNode, NSArray;

@protocol GPUGVRenderer <NSObject>
- (void)drawEdge:(GPUGVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GPUGVNode *)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;

@optional
@property(readonly) BOOL drawEdgesFirst;
@property(readonly) struct CGSize separation;
@property(readonly) int direction;
@end

