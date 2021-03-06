//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GPURenderTargetEditor/NSOutlineViewDataSource-Protocol.h>

@class GPUTracePipelineStatisticsItem, GPUTracePipelineStatisticsSubEditor, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsDrawcallsTableDataSource : NSObject <NSOutlineViewDataSource>
{
    GPUTracePipelineStatisticsSubEditor *_editor;
    GPUTracePipelineStatisticsItem *_item;
    struct DrawCallStatistics _stats;
    long long _extraColumns;
    NSArray *_access;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)headerTitle;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)isGroupItem:(id)arg1;
- (double)outlineView:(id)arg1 heightOfItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (unsigned long long)numberOfItems;
- (id)initWithItem:(id)arg1 editor:(id)arg2 statistics:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

