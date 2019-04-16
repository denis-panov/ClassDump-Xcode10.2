//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/GPURenderJob.h>

@protocol DYPEnumUtils;

__attribute__((visibility("hidden")))
@interface GPUMTLRenderJob : GPURenderJob
{
    id <DYPEnumUtils> _enumUtils;
    unsigned long long _attachmentIndex;
}

@property(readonly, nonatomic) unsigned long long attachmentIndex; // @synthesize attachmentIndex=_attachmentIndex;
- (void).cxx_destruct;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (void)resolveWithTraceResourceItem:(id)arg1;
- (id)initWithResource:(id)arg1 overlayResources:(id)arg2 modelFactory:(id)arg3 attachmentIndex:(unsigned long long)arg4 framebuffer:(id)arg5;

@end
