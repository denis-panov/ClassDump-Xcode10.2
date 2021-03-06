//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerKit/GPUGenericNavigableItem.h>

#import <GPUDebuggerKit/GPUStringFilterableNavigableItem-Protocol.h>

@class GPUFilterTokenPredicate, GPUTraceGroupItem, NSArray, NSString;

@interface GPUTraceGroupNavigableItem : GPUGenericNavigableItem <GPUStringFilterableNavigableItem>
{
    BOOL _filterInterestingTrace;
    BOOL _filterIssues;
    NSArray *_cachedChildRepresentedObjects;
    GPUFilterTokenPredicate *_filterPredicate;
}

@property(retain, nonatomic) GPUFilterTokenPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void).cxx_destruct;
- (void)setToggleFilters:(BOOL)arg1 issues:(BOOL)arg2;
- (void)invalidateChildItems;
@property(readonly, nonatomic) NSArray *childRepresentedObjects;
- (id)_filterChildren;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GPUTraceGroupItem *representedObject; // @dynamic representedObject;
@property(readonly) Class superclass;

@end

