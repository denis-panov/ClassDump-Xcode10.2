//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class IDENavigableItemFilter, NSArray, NSIndexSet;
@protocol IDEKeyDrivenNavigableItemRepresentedObject;

@protocol IDEKeyDrivenNavigableItemSparseChildrenRepresentedObject <IDEKeyDrivenNavigableItemRepresentedObject>
- (NSArray *)navigableItem_childRepresentedObjectsObjectsAtIndexes:(NSIndexSet *)arg1;
- (id <IDEKeyDrivenNavigableItemRepresentedObject>)objectInNavigableItem_childRepresentedObjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfNavigableItem_childRepresentedObjects;
- (NSIndexSet *)navigableItem_childRepresentedObjectIndexesForFilter:(IDENavigableItemFilter *)arg1;

@optional
- (NSIndexSet *)navigableItem_preferredInitiallyVisibleChildRepresentedObjectIndexes;
@end

