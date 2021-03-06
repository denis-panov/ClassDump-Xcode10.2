//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSBundle, NSCache;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GPUResourceThumbnailFactory : NSObject
{
    NSBundle *_assetBundle;
    NSObject<OS_dispatch_semaphore> *_renderersSema;
    NSCache *_thumbnailImageCache;
}

+ (id)sharedThumbnailFactory;
- (void).cxx_destruct;
- (void)invalidateCache;
- (id)thumbnailWithResourceItem:(id)arg1 withContentsScale:(double)arg2 nocache:(BOOL)arg3;
- (CDStruct_14f26992)thumbnailResolution;
- (id)thumbnailWithResourceItem:(id)arg1 withContentsScale:(double)arg2;
- (id)_defaultImageForResourceItem:(id)arg1;
- (id)defaultThumbnailForResourceItem:(id)arg1;
- (id)_generateThumbnailForImage:(id)arg1 withContentsScale:(double)arg2 nocache:(BOOL)arg3;
- (id)_generateDefaultThumbnailForImage:(id)arg1;
- (id)cachedThumbnailForResourceItem:(id)arg1;
- (void)_addImageToThumbnailCache:(id)arg1 forResourceItem:(id)arg2 withCost:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (id)_placeholderThumbnail;

@end

