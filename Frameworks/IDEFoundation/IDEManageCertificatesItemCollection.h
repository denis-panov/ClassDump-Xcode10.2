//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface IDEManageCertificatesItemCollection : NSObject
{
    NSMutableDictionary *_itemsBySerialNumber;
    NSMutableSet *_items;
}

- (void).cxx_destruct;
- (void)removeItemWithSerialNumber:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)itemWithSerialNumber:(id)arg1;
@property(readonly, nonatomic) NSSet *allSerialNumbers;
@property(readonly, nonatomic) NSSet *items;
- (id)init;

@end

