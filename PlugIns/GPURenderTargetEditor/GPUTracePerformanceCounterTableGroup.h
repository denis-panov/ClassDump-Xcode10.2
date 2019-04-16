//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class GPUTraceCounterGraphGroupItem, GPUTraceOutlineItem, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceCounterTableGroup : NSObject
{
    NSMutableArray *_items;
    NSMutableArray *_filteredItems;
    NSString *_name;
    NSString *_resourceName;
    GPUTraceCounterGraphGroupItem *_groupItem;
    GPUTraceOutlineItem *_linkedResource;
}

@property(nonatomic) __weak GPUTraceOutlineItem *linkedResource; // @synthesize linkedResource=_linkedResource;
@property(nonatomic) __weak GPUTraceCounterGraphGroupItem *groupItem; // @synthesize groupItem=_groupItem;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *filteredItems; // @synthesize filteredItems=_filteredItems;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

