//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCBuildPhaseDGSnapshot.h>

@class NSMapTable, NSMutableSet;

@interface XCSourcesBuildPhaseDGSnapshot : XCBuildPhaseDGSnapshot
{
    NSMapTable *_processedNonArchRefs;
    NSMutableSet *_queuedNonArchOutputNodes;
}

+ (id)defaultName;
- (void).cxx_destruct;
- (id)initWithInformationFromBuildPhase:(id)arg1 forTargetSnapshot:(id)arg2 withResolver:(id)arg3;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForAllBuildFileReferencesWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForVersioningSystemWithMacroExpansionScope:(id)arg1;
- (void)computeDependenciesForBuildFileReference:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)computeDependenciesForBuildFileReference:(id)arg1 usingBuildRule:(id)arg2 withMacroExpansionScope:(id)arg3;
- (void)computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 usingBuildRule:(id)arg3 withMacroExpansionScope:(id)arg4;
- (void)_processOutputNodes:(id)arg1 forRegionVariantName:(id)arg2 processedPaths:(id)arg3 originalBuildRule:(id)arg4 withMacroExpansionScope:(id)arg5;
- (void)_computeDependenciesForFilePath:(id)arg1 ofType:(id)arg2 usingBuildRule:(id)arg3 withMacroExpansionScope:(id)arg4 processedPaths:(id)arg5;
- (void)_computeDependenciesForBuildFileReference:(id)arg1 usingBuildRule:(id)arg2 withMacroExpansionScope:(id)arg3 processedPaths:(id)arg4;
- (id)buildFilesToCountBaseNames;
- (BOOL)shouldResolveBuildRulesForFileReferences;
- (void)reorderHeaderGeneratingCommandsWithMacroExpansionScope:(id)arg1;

@end

