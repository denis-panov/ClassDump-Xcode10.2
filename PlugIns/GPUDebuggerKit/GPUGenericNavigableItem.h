//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class GPUProcessNavigableItem, GPUTraceOutlineItem;

@interface GPUGenericNavigableItem : IDEKeyDrivenNavigableItem
{
    BOOL _returnNilForChildRepresentedObjects;
}

@property(nonatomic) BOOL returnNilForChildRepresentedObjects; // @synthesize returnNilForChildRepresentedObjects=_returnNilForChildRepresentedObjects;
@property(readonly, nonatomic) GPUProcessNavigableItem *processItem;
- (void)_setParentItem:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) GPUTraceOutlineItem *representedObject; // @dynamic representedObject;

@end

