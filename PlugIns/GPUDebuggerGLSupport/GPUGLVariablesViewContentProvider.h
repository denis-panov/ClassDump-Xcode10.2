//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUTraceDebuggerUI/GPUVariablesViewContentProvider.h>

@class GPUGLStateMirror, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface GPUGLVariablesViewContentProvider : GPUVariablesViewContentProvider
{
    GPUGLStateMirror *_stateMirror;
    GPUGLStateMirror *_comparisonStateMirror;
    ContextStateMirror_eb2bea29 _defaultCtx;
    struct ProgramUniform<GPUGLSMObjectTypes> _defaultUniform;
    struct TextureLayer<GPUGLSMObjectTypes> _defaultTexLayer;
    TextureObject_43a60ee8 _defaultTex;
    SamplerObject_b67dd4ca _defaultSampler;
    TransformFeedbackObject_aaeaaee2 _defaultTransformFeedback;
    BufferObject_f84884d4 _defaultBuffer;
    RenderbufferObject_ab80af8a _defaultRenderbuffer;
    struct FramebufferAttachment<GPUGLSMObjectTypes> _defaultAttachment;
    FramebufferObject_bce1d2f2 _defaultFramebuffer;
    struct ShaderObject<GPUGLSMObjectTypes> _defaultShader;
    ProgramObject_00e5663f _defaultProgram;
    ProgramUniformBlock_b2b71853 _defaultUniformBlock;
    ProgramPipelineObject_473ebec2 _defaultPipeline;
    VertexArrayObject_1e74c8cd _defaultVAO;
    QueryObject_e5a7bd68 _defaultQuery;
    struct SyncObject<GPUGLSMObjectTypes> _defaultSync;
    NSMutableSet *_activeUniformBlocks;
    NSMutableArray *_uniformBuffers;
    BOOL _drawCallFootprintIsAvailable;
    unsigned int _objectID;
    int _objectType;
}

@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) unsigned int objectID; // @synthesize objectID=_objectID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)updateFilteredList;
- (void)_updateFilteredListForContextInfo;
- (void)_updateFilteredListForAllObjects;
- (void)_updateFilteredListForBoundObjects;
- (void)_updateStateNameAndValue:(id)arg1 forBindPoint:(unsigned int)arg2;
- (id)_CreateProgramTransformFeedbackVaryings:(const ProgramObject_00e5663f *)arg1;
- (id)_generateFrameStatsContent:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_generateSyncContent:(unsigned int)arg1 usingContext:(ContextStateMirror_eb2bea29 *)arg2;
- (id)_generateQueryContent:(const QueryObject_e5a7bd68 *)arg1 queryID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateVAOContent:(const VertexArrayObject_1e74c8cd *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateVAOArrayContent:(const VertexArrayObject_1e74c8cd *)arg1 vaoID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3 usingVAOArrayListIndex:(unsigned int)arg4 usingIndex:(unsigned int)arg5;
- (id)_generateProgramPipelineContent:(const ProgramPipelineObject_473ebec2 *)arg1 pipelineID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateProgramContent:(const ProgramObject_00e5663f *)arg1 programID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3 withPrefix:(id)arg4;
- (id)_generateProgramPerformanceContent:(unsigned int)arg1 separable:(BOOL)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateShaderContent:(unsigned int)arg1 usingContext:(ContextStateMirror_eb2bea29 *)arg2;
- (id)_generateFramebufferContent:(const FramebufferObject_bce1d2f2 *)arg1 framebufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateFramebufferAttachmentContent:(const FramebufferObject_bce1d2f2 *)arg1 usingAttachment:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateRenderbufferContent:(const RenderbufferObject_ab80af8a *)arg1 renderbufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateBufferContent:(const BufferObject_f84884d4 *)arg1 bufferID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_valueStringForBufferEnum:(const struct ObjectStateEnum *)arg1 buffer:(const BufferObject_f84884d4 *)arg2;
- (id)_generateTransformFeedbackContent:(const TransformFeedbackObject_aaeaaee2 *)arg1 transformFeedbackID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateSamplerContent:(const SamplerObject_b67dd4ca *)arg1 samplerID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_generateTextureUnitContent:(unsigned int)arg1 usingContext:(ContextStateMirror_eb2bea29 *)arg2;
- (id)_generateTextureContent:(const TextureObject_43a60ee8 *)arg1 textureID:(unsigned int)arg2 usingContext:(ContextStateMirror_eb2bea29 *)arg3;
- (id)_getAnnotatedTextureName:(unsigned int)arg1 usingContext:(ContextStateMirror_eb2bea29 *)arg2;
- (id)_generateTextureLayerContent:(const TextureObject_43a60ee8 *)arg1 target:(unsigned int)arg2 level:(int)arg3 layer:(int)arg4 createSubgroup:(_Bool)arg5 usingContext:(ContextStateMirror_eb2bea29 *)arg6;
- (id)_generateActiveAttribContent:(const ProgramAttrib_fb761ac3 *)arg1 location:(int)arg2;
- (id)_generateUniformBlockContent:(const ProgramUniformBlock_b2b71853 *)arg1 index:(unsigned int)arg2 comparisonUniformBlock:(const ProgramUniformBlock_b2b71853 *)arg3 functionalityLevel:(int)arg4 isProgramUsedInDraw:(_Bool)arg5;
- (void)_EnumerateUniformBlockReferencingShaderBits:(CDUnknownBlockType)arg1;
- (void)_updateFilteredListForAuto;
- (void)_addEnumState:(unsigned int)arg1 toArray:(id)arg2;
- (void)addAnalyzerFindingContent:(id)arg1 toArray:(id)arg2;
- (void)addFrameStatsContent:(ContextStateMirror_eb2bea29 *)arg1 toArray:(id)arg2;
- (void)addTransformFeedbackContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addSamplerContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addSyncContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addQueryContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addShaderContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addProgramPerformanceContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addProgramContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addPipelinePerformanceContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addProgramPipelineContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addFramebufferContent:(unsigned long long)arg1 forBinding:(unsigned int)arg2 fromContext:(ContextStateMirror_eb2bea29 *)arg3 toArray:(id)arg4;
- (void)addFramebufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addRenderbufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addVAOContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addTextureUnitContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addTextureContent:(unsigned long long)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2 toArray:(id)arg3;
- (void)addBufferContent:(unsigned int)arg1 forBinding:(int)arg2 fromContext:(ContextStateMirror_eb2bea29 *)arg3 toArray:(id)arg4;
- (void)addBufferContent:(unsigned int)arg1 forTarget:(int)arg2 fromContext:(ContextStateMirror_eb2bea29 *)arg3 toArray:(id)arg4;
- (void)addObjectContent:(unsigned int)arg1 forType:(int)arg2 fromContext:(ContextStateMirror_eb2bea29 *)arg3 toArray:(id)arg4;
- (void)_updateFilteredListForContext;
- (void)_addExtensions:(id)arg1 forContext:(ContextStateMirror_eb2bea29 *)arg2;
- (void)_addContextState:(int)arg1 toArray:(id)arg2 unitIndex:(int)arg3;
- (void)_addContextState:(int)arg1 toArray:(id)arg2;
- (void)_addStateValue:(id)arg1 withName:(id)arg2 toArray:(id)arg3;
- (id)_convertEnumString:(basic_string_23d93216 *)arg1;
- (_Bool)_getStateElement:(int)arg1 usingIndex:(int)arg2 forStateGroup:(int)arg3 usingContext:(ContextStateMirror_eb2bea29 *)arg4 returningString:(basic_string_23d93216 *)arg5;
- (id)_getCondensedStateGroupSummary:(int)arg1 fromContext:(ContextStateMirror_eb2bea29 *)arg2;
- (id)_getCondensedFixedCurrentVertexSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedTexEnvSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedPerUnitTexEnvSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1 unitIndex:(int)arg2;
- (id)_getCondensedTexEnvChannelSummary:(ContextStateMirror_eb2bea29 *)arg1 channelSetup:(struct TexEnvChannelSetup *)arg2 isRGBA:(_Bool)arg3;
- (id)_getTexEnvSrcString:(unsigned int)arg1 operand:(unsigned int)arg2 isRGBA:(_Bool)arg3;
- (id)_getCondensedPointParamsSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedMatrixSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_classifyMatrix:(CDStruct_461fb6ec *)arg1;
- (id)_getCondensedMaterialSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedLightModelSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedPerLightSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1 index:(int)arg2;
- (id)_getCondensedLightSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedFogSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedClipDistanceSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedPerClipPlaneSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1 index:(int)arg2;
- (id)_getCondensedClipPlaneSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedAlphaTestSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedErrorStatusSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedScissorSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedMultisamplingSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedPolygonOffsetSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedColorSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedCullingSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedDepthSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedBlendSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedBlendResultForChannel:(struct BlendChannelSetup *)arg1 isAlphaChannel:(BOOL)arg2;
- (id)_getCondensedStencilSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedStencilSummaryForSide:(struct StencilSideSetup *)arg1;
- (id)_getCondensedActiveSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_getCondensedViewportSummaryFromContext:(ContextStateMirror_eb2bea29 *)arg1;
- (id)_cullString:(unsigned int)arg1;
- (id)_blendFactorString:(unsigned int)arg1;
- (id)_actionString:(unsigned int)arg1;
- (id)_funcWordString:(unsigned int)arg1;
- (id)_stencilFuncString:(unsigned int)arg1;
- (id)_funcString:(unsigned int)arg1;
- (id)_stringFromEnum:(int)arg1 showFalseAsNone:(_Bool)arg2;
- (void)setSharedUIStateObj:(id)arg1;
- (void)_updateUniformValueAtIndex:(unsigned long long)arg1 parentValue:(id)arg2 buffer:(id)arg3 offset:(long long)arg4;
- (void)_updateUniformBlockValuesWithBuffer:(id)arg1;
- (void)updateCurrentLocation:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifier:(id)arg1 andWorkspaceUIState:(id)arg2;

@end

