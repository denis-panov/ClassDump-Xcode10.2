//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUTraceModelFactory.h>

@class GPUGLTraceOutline, NSMapTable;

__attribute__((visibility("hidden")))
@interface GPUGLModelFactory : GPUTraceModelFactory
{
    NSMapTable *_resourceTypeToViewMaptable;
    GPUGLTraceOutline *_outline;
}

+ (Class)renderJobClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
@property(retain, nonatomic) GPUGLTraceOutline *outline; // @synthesize outline=_outline;
- (void).cxx_destruct;
- (struct NSArray *)resourceInfoForResource:(id)arg1 level:(int)arg2 layer:(int)arg3;
- (int)openGLAPI;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)newDataProviderForShaderDataItem:(id)arg1;
- (void)establishResource:(id)arg1 forProgramChildren:(id)arg2 containerID:(unsigned long long)arg3;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (id)generateAllResourcesGroupForAPIItem:(id)arg1 boundOnly:(BOOL)arg2;
- (void)primitiveInvalidate;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
- (id)resourceTypeToViewClassMaptable;
- (id)allAPIItems;
- (id)allMarkerItems;
- (id)allDisplayableItems;
- (id)lastDisplayableItem;
- (id)allPrograms;
- (id)allTraceItems;
- (id)rootProcessItem;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;

@end

