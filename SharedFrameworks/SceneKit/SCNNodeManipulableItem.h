//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SceneKit/SCNManipulableItem.h>

__attribute__((visibility("hidden")))
@interface SCNNodeManipulableItem : SCNManipulableItem
{
}

+ (void)removeItemsFromScene:(id)arg1;
+ (void)addItems:(id)arg1 toScene:(id)arg2;
+ (id)nodeManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2;
- (void)validateClone;
- (id)cloneForManipulators;
- (id)parentItem;
- (void)setPosition:(struct SCNVector3)arg1;
- (struct SCNVector3)scale;
- (struct CATransform3D)worldTransform;
- (void)setWorldTransform:(struct CATransform3D)arg1;
- (void)setTransform:(struct CATransform3D)arg1;
- (struct CATransform3D)transform;
- (BOOL)isNodeManipulator;

@end

