//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class GPUTraceOutlineItem, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceBottleneckAssociatedItem : NSObject
{
    int _resourceLink;
    NSString *_itemDescription;
    GPUTraceOutlineItem *_linkedResource;
}

@property(retain, nonatomic) GPUTraceOutlineItem *linkedResource; // @synthesize linkedResource=_linkedResource;
@property(nonatomic) int resourceLink; // @synthesize resourceLink=_resourceLink;
@property(retain, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
- (void).cxx_destruct;

@end

