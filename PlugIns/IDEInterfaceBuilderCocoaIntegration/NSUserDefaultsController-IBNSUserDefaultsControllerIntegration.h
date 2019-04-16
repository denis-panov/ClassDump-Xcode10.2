//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSUserDefaultsController.h>

@interface NSUserDefaultsController (IBNSUserDefaultsControllerIntegration)
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)ibSharedUserDefaultsControllerProxy;
+ (id)ibDynamicShadowedKeyPathsToTypes;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibSwizzledAwakeAfterUsingCoder:(id)arg1;
- (BOOL)ibIsPlaceholder;
- (id)ibResolvedTypeNameForControllerKey:(id)arg1;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property BOOL ibShadowedAppliesImmediately; // @dynamic ibShadowedAppliesImmediately;
@end
