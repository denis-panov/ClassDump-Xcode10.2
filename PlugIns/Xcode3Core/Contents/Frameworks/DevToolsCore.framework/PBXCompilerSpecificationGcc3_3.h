//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXCompilerSpecificationGcc3_1.h>

@interface PBXCompilerSpecificationGcc3_3 : PBXCompilerSpecificationGcc3_1
{
}

- (id)precompileHeaderFileAtPath:(id)arg1 forSourceFileOfType:(id)arg2 withExtraFlags:(id)arg3 toPrecompPath:(id)arg4 withMacroExpansionScope:(id)arg5;
- (id)symrepFileNameForHeaderPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)flagsForIncludingPrecompiledPrefixHeaderAtPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)precompFileNameForHeaderPath:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)precompFileExtension;
- (id)subprocessCommandLineForPreprocessingBehaviorWithCommand:(id)arg1 commandLine:(id)arg2;
- (BOOL)areOutputFilesAffectedByEnvironmentVariable:(id)arg1;
- (BOOL)areOutputFilesAffectedByCommandLineArgument:(id)arg1 previousArgument:(id)arg2;
- (id)standardFlagsWithMacroExpansionScope:(id)arg1;

@end

