//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

@protocol GPUBufferViewerDataSource;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerDataSourceViewController : NSViewController
{
    unsigned long long _offset;
}

@property unsigned long long offset; // @synthesize offset=_offset;
- (struct CGSize)sizeForDisplayingAllData;

// Remaining properties
@property(retain) id <GPUBufferViewerDataSource> representedObject; // @dynamic representedObject;

@end

