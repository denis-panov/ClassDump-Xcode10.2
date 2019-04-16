//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSCollectionView.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface SKEMaterialPickerCollectionView : NSCollectionView
{
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    CDUnknownBlockType _doubleClickHandler;
}

@property(copy) CDUnknownBlockType doubleClickHandler; // @synthesize doubleClickHandler=_doubleClickHandler;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (id)thumbnailQueue;

@end

