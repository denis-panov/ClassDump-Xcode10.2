//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBStoryboardSceneAbstractCompilationUnit.h>

@class NSMutableDictionary;

@interface IBStoryboardSceneRootCompilationUnit : IBStoryboardSceneAbstractCompilationUnit
{
    BOOL _requiresIndependentInstantiation;
    NSMutableDictionary *_localOIDToStoryboardOIDMap;
}

+ (id)rootUnitWithLeader:(id)arg1 topLevelObjects:(id)arg2 fromStoryboard:(id)arg3 requiresIndependentInstantiation:(BOOL)arg4;
@property(readonly) BOOL requiresIndependentInstantiation; // @synthesize requiresIndependentInstantiation=_requiresIndependentInstantiation;
- (void).cxx_destruct;
- (id)compilationResultWithCompiledPackage:(id)arg1;
- (id)localOIDToStoryboardOIDMap;
- (id)localObjectForSegueTemplate:(id)arg1;
- (id)counterpartForStoryboardObject:(id)arg1;
- (BOOL)isDescendantOfCompilationUnit:(id)arg1;
- (id)storyboardMemberIDForLocalMemberID:(id)arg1;
- (void)capturePlaceholderTableFromFoldedCompilationUnit:(id)arg1 withOriginalFoldedUnitToLocalObjectIDMap:(id)arg2;
- (id)description;
- (id)initWithLeader:(id)arg1 content:(id)arg2 storyboard:(id)arg3 requiresIndependentInstantiation:(BOOL)arg4;

@end
