//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class MTLVertexDescriptor, NSArray;
@protocol MTLFunction, MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface SCNMTLRenderPipeline : NSObject
{
    CDStruct_21854d8c _sceneBuffer;
    struct __C3DFXProgram *_program;
    struct __C3DFXPass *_pass;
    CDStruct_b93dc639 _renderPassDesc;
    unsigned int _buffersUsageMask[2];
    unsigned int _texturesUsageMask[2];
    unsigned int _samplersUsageMask[2];
    id <MTLRenderPipelineState> _state;
    MTLVertexDescriptor *_vertexDescriptor;
    id <MTLFunction> _vertexFunction;
    id <MTLFunction> _fragmentFunction;
    NSArray *_frameBufferBindings;
    NSArray *_nodeBufferBindings;
    NSArray *_lightBufferBindings;
    NSArray *_passBufferBindings;
    NSArray *_shadableBufferBindings;
}

@property(copy, nonatomic) NSArray *shadableBufferBindings; // @synthesize shadableBufferBindings=_shadableBufferBindings;
@property(copy, nonatomic) NSArray *passBufferBindings; // @synthesize passBufferBindings=_passBufferBindings;
@property(copy, nonatomic) NSArray *lightBufferBindings; // @synthesize lightBufferBindings=_lightBufferBindings;
@property(copy, nonatomic) NSArray *nodeBufferBindings; // @synthesize nodeBufferBindings=_nodeBufferBindings;
@property(copy, nonatomic) NSArray *frameBufferBindings; // @synthesize frameBufferBindings=_frameBufferBindings;
@property(retain, nonatomic) id <MTLFunction> fragmentFunction; // @synthesize fragmentFunction=_fragmentFunction;
@property(retain, nonatomic) id <MTLFunction> vertexFunction; // @synthesize vertexFunction=_vertexFunction;
@property(copy, nonatomic) MTLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(retain, nonatomic) id <MTLRenderPipelineState> state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned int vertexBuffersUsageMask;
- (void)_computeUsageForArguments:(id)arg1 function:(id)arg2;
- (BOOL)matchesRenderPassDescriptor:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

