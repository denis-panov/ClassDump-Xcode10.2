//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3BuildFileGroup.h>

@interface Xcode3PackageProductDependencyGroup : Xcode3BuildFileGroup
{
}

+ (void)initialize;
- (id)_computePackageProductDependencies;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (void)dependencyRemovedNotification:(id)arg1;
- (void)dependencyAddedNotification:(id)arg1;
- (id)name;
- (void)primitiveInvalidate;
- (void)initializeGroup;

@end

