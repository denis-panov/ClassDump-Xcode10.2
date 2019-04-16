//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GPUDebuggerKit/GPUBufferViewerDataSourceProvider-Protocol.h>

@class GPUTraceAPIItem, NSArray, NSString;
@protocol GPUBufferViewerAdaptorTypeNameProvider, GPUBufferViewerLayout;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerAdaptorDataSourceProvider : NSObject <GPUBufferViewerDataSourceProvider>
{
    BOOL _allowsCustomLayouts;
    NSArray *_layouts;
    id <GPUBufferViewerLayout> _preferredLayout;
    unsigned long long _preferredCustomLayoutType;
    GPUTraceAPIItem *_apiItem;
    id <GPUBufferViewerAdaptorTypeNameProvider> _typeNameProvider;
    struct Buffer _sourceBuffer;
}

@property(nonatomic) struct Buffer sourceBuffer; // @synthesize sourceBuffer=_sourceBuffer;
@property(retain, nonatomic) id <GPUBufferViewerAdaptorTypeNameProvider> typeNameProvider; // @synthesize typeNameProvider=_typeNameProvider;
@property(retain, nonatomic) GPUTraceAPIItem *apiItem; // @synthesize apiItem=_apiItem;
@property(nonatomic) unsigned long long preferredCustomLayoutType; // @synthesize preferredCustomLayoutType=_preferredCustomLayoutType;
@property(nonatomic) BOOL allowsCustomLayouts; // @synthesize allowsCustomLayouts=_allowsCustomLayouts;
@property(retain, nonatomic) id <GPUBufferViewerLayout> preferredLayout; // @synthesize preferredLayout=_preferredLayout;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nameForType:(unsigned long long)arg1 rows:(unsigned long long)arg2 components:(unsigned long long)arg3;
- (struct Struct)createStructFromElementType:(unsigned long long)arg1 rows:(unsigned long long)arg2 components:(unsigned long long)arg3 columns:(unsigned long long)arg4;
- (unsigned long long)preferredNumberOfElementsForType:(unsigned long long)arg1 error:(id *)arg2;
- (id)dataSourceFromSource:(id)arg1 error:(id *)arg2;
- (id)dataSourceWithType:(unsigned long long)arg1 rows:(unsigned long long)arg2 components:(unsigned long long)arg3 columns:(unsigned long long)arg4 error:(id *)arg5;
- (id)dataSourceForLayout:(id)arg1;
- (id)initWithBuffer:(struct Buffer)arg1 apiItem:(id)arg2 typeNameProvider:(id)arg3;
- (id)initWithAdaptors:(id)arg1 preferredAdaptor:(id)arg2 apiItem:(id)arg3 typeNameProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

