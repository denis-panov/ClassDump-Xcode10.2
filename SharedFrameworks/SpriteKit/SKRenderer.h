//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, SKScene, SKTransition;

@interface SKRenderer : NSObject
{
    BOOL _needsInitialUpdate;
    BOOL _disableInput;
    BOOL _hasRenderedForCurrentUpdate;
    double _currentTime;
    double _previousTime;
    // Error parsing type: ^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}{vector<std::__1::shared_ptr<jet_buffer_pool>, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}^{shared_ptr<jet_buffer_pool>}{__compressed_pair<std::__1::shared_ptr<jet_buffer_pool> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiiiii}}@@BBB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{map<unsigned int, SKCLightMaskUniforms, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCLightMaskUniforms> > >={__tree<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCLightMaskUniforms> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@}, name: _skcRenderer
    SKScene *_scene;
    SKScene *_nextScene;
    SKTransition *_transition;
    struct CGRect _renderBounds;
    NSMapTable *_touchMap;
    NSMutableDictionary *_renderOptions;
}

+ (id)rendererWithDevice:(id)arg1;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
@property(nonatomic) BOOL showsDrawCount;
@property(nonatomic) BOOL showsNodeCount;
@property(nonatomic) BOOL showsQuadCount;
@property(nonatomic) BOOL showsFields;
@property(nonatomic) BOOL showsPhysics;
@property(nonatomic) BOOL ignoresSiblingOrder;
@property(nonatomic) BOOL shouldCullNonVisibleNodes;
- (id)_getOptions;
- (void)_update:(double)arg1;
- (void)updateAtTime:(double)arg1;
- (void)_notifyWillRenderContent;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id)arg2 renderPassDescriptor:(id)arg3;
- (void)renderWithViewport:(struct CGRect)arg1 renderCommandEncoder:(id)arg2 renderPassDescriptor:(id)arg3 commandQueue:(id)arg4;
- (void)dealloc;
- (void)_initialize;
-     // Error parsing type: @24@0:8^{SKCRenderer=@f{shared_ptr<SKCRenderPass>=^{SKCRenderPass}^{__shared_weak_count}}I{shared_ptr<jet_command_buffer>=^{jet_command_buffer}^{__shared_weak_count}}{list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > >={__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>=^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}^{__list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > >=Q}}{?=II^^^{?=[4]}f^{SKCRenderer}f{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}{shared_ptr<jet_program>=^{jet_program}^{__shared_weak_count}}^{jet_buffer}^{jet_buffer}^{jet_buffer}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_buffer>=^{jet_buffer}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_sampler>=^{jet_sampler}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}{shared_ptr<jet_depth_stencil_mode>=^{jet_depth_stencil_mode}^{__shared_weak_count}}BI{SKCRenderBatch=BiII@^{jet_program}^{jet_texture}^{jet_texture}^{jet_sampler}^{jet_sampler}IIf}^{SKCStats}{vector<std::__1::shared_ptr<jet_buffer>, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}^{shared_ptr<jet_buffer>}{__compressed_pair<std::__1::shared_ptr<jet_buffer> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer> > >=^{shared_ptr<jet_buffer>}}}{vector<std::__1::shared_ptr<jet_buffer_pool>, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}^{shared_ptr<jet_buffer_pool>}{__compressed_pair<std::__1::shared_ptr<jet_buffer_pool> *, std::__1::allocator<std::__1::shared_ptr<jet_buffer_pool> > >=^{shared_ptr<jet_buffer_pool>}}}}^{SKCStats}{SKCStats=^^?ddddi{?=dd}{?=dd}{?=ddi}{?=ddi}{?=ddiiiiiiii}}@@BBB{shared_ptr<jet_context>=^{jet_context}^{__shared_weak_count}}{shared_ptr<jet_fence>=^{jet_fence}^{__shared_weak_count}}{map<SKCLightNode *, float __attribute__((ext_vector_type(4))), std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, float __attribute__((ext_vector_type(4)))> > >={__tree<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, float __attribute__((ext_vector_type(4)))>, std::__1::less<SKCLightNode *>, true> >=Q}}}{map<unsigned int, SKCLightMaskUniforms, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCLightMaskUniforms> > >={__tree<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCLightMaskUniforms> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCLightMaskUniforms>, std::__1::less<unsigned int>, true> >=Q}}}{vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}^^{SKCRenderSortInfo}{__compressed_pair<SKCRenderSortInfo **, std::__1::allocator<SKCRenderSortInfo *> >=^^{SKCRenderSortInfo}}}{map<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > >, std::__1::less<SKCLightNode *>, std::__1::allocator<std::__1::pair<SKCLightNode *const, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >={__tree<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true>, std::__1::allocator<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<SKCLightNode *, std::__1::__value_type<SKCLightNode *, std::__1::shared_ptr<std::__1::vector<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> > > >, std::__1::less<SKCLightNode *>, true> >=Q}}}^{SKCSpriteNode}^{SKCLabelNode}{?=^{SKCRenderPass}^{SKCRenderSortGroup}I{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{list<SKCRenderSortInfo *, std::__1::allocator<SKCRenderSortInfo *> >={__list_node_base<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}^{__list_node_base<SKCRenderSortInfo *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderSortInfo *, void *> > >=Q}}{__list_iterator<SKCRenderSortInfo *, void *>=^{__list_node_base<SKCRenderSortInfo *, void *>}}}{vector<std::__1::shared_ptr<jet_framebuffer>, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}^{shared_ptr<jet_framebuffer>}{__compressed_pair<std::__1::shared_ptr<jet_framebuffer> *, std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@}16, name: initWithSKCRenderer:

@end

