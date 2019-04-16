//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/GPUTraceShaderDataProviderProvider-Protocol.h>

@class GPUTraceShaderItem, NSString, NSURL;
@protocol GPUTraceShaderDataProvider;

@interface GPUTraceShaderDataItem : GPUTraceOutlineItem <GPUTraceShaderDataProviderProvider>
{
    id <GPUTraceShaderDataProvider> _dataProvider;
    NSURL *_sourceURL;
    BOOL _isMainItem;
    GPUTraceShaderItem *_shaderItem;
    NSString *_sourcePath;
    unsigned long long _lineNumber;
}

@property(retain, nonatomic) id <GPUTraceShaderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(readonly, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(readonly, nonatomic) __weak GPUTraceShaderItem *shaderItem; // @synthesize shaderItem=_shaderItem;
- (void).cxx_destruct;
- (id)sourceURL;
- (id)APIItem;
- (id)dataProvider_private;
- (id)initWithShaderItem:(id)arg1 sourcePath:(id)arg2 lineNumber:(unsigned long long)arg3 parent:(id)arg4;

@end

