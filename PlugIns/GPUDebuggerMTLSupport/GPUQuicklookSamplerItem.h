//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUTraceSamplerItem.h>

@protocol DYSampler;

__attribute__((visibility("hidden")))
@interface GPUQuicklookSamplerItem : GPUTraceSamplerItem
{
    id <DYSampler> _quicklookSamplerItem;
}

@property(nonatomic) __weak id <DYSampler> quicklookSamplerItem; // @synthesize quicklookSamplerItem=_quicklookSamplerItem;
- (void).cxx_destruct;
- (id)resourceObject;
- (id)samplerResourceObject;

@end
