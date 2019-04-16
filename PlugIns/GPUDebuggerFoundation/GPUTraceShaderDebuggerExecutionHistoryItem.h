//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class GPUShaderDebuggerExecutionHistoryDataSource, GPUTraceShaderItem, NSObject;
@protocol DYPShaderDebuggerExecutionHistoryNode, OS_dispatch_queue;

@interface GPUTraceShaderDebuggerExecutionHistoryItem : GPUTraceOutlineItem
{
    GPUShaderDebuggerExecutionHistoryDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_queue;
    id <DYPShaderDebuggerExecutionHistoryNode> _historyNode;
    GPUTraceShaderItem *_shaderItem;
}

@property(readonly, nonatomic) GPUTraceShaderItem *shaderItem; // @synthesize shaderItem=_shaderItem;
@property(readonly, nonatomic) id <DYPShaderDebuggerExecutionHistoryNode> historyNode; // @synthesize historyNode=_historyNode;
- (void).cxx_destruct;
- (id)filterItems;
- (void)addFilterItem:(id)arg1;
- (id)filterableChildObjects;
- (id)APIItem;
- (id)label;
- (id)initWithController:(id)arg1 parent:(id)arg2 shaderItem:(id)arg3 historyNode:(id)arg4 dataSource:(id)arg5;

@end
