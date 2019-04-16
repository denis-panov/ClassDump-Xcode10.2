//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBPlatform, NSDictionary, NSMutableSet, NSString;

@interface IBStoryboardReferenceValidator : NSObject
{
    IBPlatform *_platform;
    NSString *_referencingStoryboardcInputPath;
    NSString *_linkerOutputDirectory;
    NSDictionary *_linkerOptions;
    NSMutableSet *_copiedStoryboardNames;
    NSMutableSet *_languagesWithStringsFiles;
}

+ (BOOL)backwardsDeployStoryboardsReferencedByStoryboardWithInputPath:(id)arg1 linkerOutputDirectory:(id)arg2 platform:(id)arg3 linkerOptions:(id)arg4 populatingWarnings:(id)arg5 error:(id *)arg6;
+ (BOOL)validateReferencesFromStoryboardAtPath:(id)arg1 platform:(id)arg2 populatingWarnings:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)referencedControllerIdentifierForReferenceWithIdentifier:(id)arg1 fromStoryboardWithInfoPlist:(id)arg2 referencingStoryboardWithInfoPlist:(id)arg3;
- (id)referencingStoryboardcOutputPath;
- (id)outputPathForInputPath:(id)arg1;
- (id)deploymentTargetName;
- (id)recursivelyFindStoryboardForReferenceWithIdentifier:(id)arg1 fromStoryboardWithPath:(id)arg2 withInfoPlist:(id)arg3 outReferencedInfoPlist:(id *)arg4 outReferencedControllerIdentifier:(id *)arg5 error:(id *)arg6;
- (BOOL)appendStringsFileFromPath:(id)arg1 toStringsFileAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)copyStringsFilesFromReferencedStoryboardAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)copyNibsFromReferencedStoryboardAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)copyNibsAndStringsFilesIfNeededToReferencingStoryboardWithInfoPlist:(id)arg1 fromStoryboardAtPath:(id)arg2 withInfoPlist:(id)arg3 ignoringConflictsForIdentifier:(id)arg4 error:(id *)arg5;
- (BOOL)backwardsDeployStoryboardReferenceWithIdentifier:(id)arg1 withInfoPlist:(id)arg2 referencingControllerWithIdentifier:(id)arg3 inStoryboardAtPath:(id)arg4 withInfoPlist:(id)arg5 error:(id *)arg6;
- (BOOL)backwardsDeployStoryboardReferencesPopulatingWarnings:(id)arg1 error:(id *)arg2;
- (BOOL)validateReferenceWithIdentifier:(id)arg1 withInfoPlist:(id)arg2 referencingStoryboardAtPath:(id)arg3 withInfoPlist:(id)arg4 error:(id *)arg5;
- (id)storyboardPathReferencedByIdentifier:(id)arg1 fromStoryboardWithPath:(id)arg2 withInfoPlist:(id)arg3 error:(id *)arg4;
- (id)validationWarningForMissingInfoPlistAtStoryboardPath:(id)arg1;
- (BOOL)validateReferencesPopulatingWarnings:(id)arg1 error:(id *)arg2;
- (id)initWithReferencingStoryboardcInputPath:(id)arg1 linkerOutputDirectory:(id)arg2 platform:(id)arg3 linkerOptions:(id)arg4;
- (id)init;

@end

