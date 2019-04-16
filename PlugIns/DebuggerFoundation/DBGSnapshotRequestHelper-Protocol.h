//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class DBGSnapshot, DebugHierarchyRequest, NSArray;

@protocol DBGSnapshotRequestHelper
+ (DebugHierarchyRequest *)requestForRemainingLazyPropertiesForSnapshot:(DBGSnapshot *)arg1 sceneDebuggingEnabled:(BOOL)arg2 completion:(void (^)(DebugHierarchyRequest *))arg3;
+ (DebugHierarchyRequest *)requestForEncodedScenesForSnapshot:(DBGSnapshot *)arg1;
+ (DebugHierarchyRequest *)requestForRenderedSpritesForSnapshot:(DBGSnapshot *)arg1;
+ (DebugHierarchyRequest *)requestForRenderedViewsForSnapshot:(DBGSnapshot *)arg1 excludingEffectViewClasses:(NSArray *)arg2;
+ (DebugHierarchyRequest *)requestForRenderedEffectViewsOfClasses:(NSArray *)arg1 forSnapshot:(DBGSnapshot *)arg2;
+ (DebugHierarchyRequest *)requestForEncodedCALayersForSnapshot:(DBGSnapshot *)arg1;
+ (DebugHierarchyRequest *)initialRequestWithPropertyActions:(NSArray *)arg1 completion:(void (^)(DebugHierarchyRequest *))arg2;
@end
