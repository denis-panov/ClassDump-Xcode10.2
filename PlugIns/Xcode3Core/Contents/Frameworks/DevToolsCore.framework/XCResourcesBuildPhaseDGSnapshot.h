//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@interface XCResourcesBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
}

+ (id)defaultName;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (void)copyResourcesFromResourcesDirAtPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)_copyResourceFile:(id)arg1 ofType:(id)arg2 toDirectory:(id)arg3 withMacroExpansionScope:(id)arg4;
- (BOOL)shouldResolveBuildRulesForFileReferences;

@end

