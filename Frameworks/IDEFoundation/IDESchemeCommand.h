//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface IDESchemeCommand : NSObject
{
    BOOL _appleInternalOnly;
    BOOL _shouldLaunch;
    BOOL _shouldTest;
    BOOL _shouldProfile;
    BOOL _shouldArchive;
    BOOL _shouldInstall;
    BOOL _shouldBuildThinnedResources;
    BOOL _shouldGenerateOptimizationProfile;
    BOOL _supportsCodeCoverage;
    BOOL _supportsSingleFileProcessing;
    BOOL _supportsCompilerSanitizers;
    NSString *_commandName;
    NSString *_commandNameGerund;
}

+ (id)availablePrimitiveSchemeCommands;
+ (id)allNonAppleInternalPrimitiveSchemeCommands;
+ (id)allPrimitiveSchemeCommands;
+ (id)availableSchemeCommands;
+ (id)allNonAppleInternalSchemeCommands;
+ (id)allSchemeCommands;
+ (id)installSchemeCommand;
+ (id)testForPGOSchemeCommand;
+ (id)launchForPGOSchemeCommand;
+ (id)analyzeSchemeCommand;
+ (id)archiveSchemeCommand;
+ (id)profileSchemeCommand;
+ (id)testSchemeCommand;
+ (id)launchSchemeCommand;
+ (void)initialize;
@property(readonly, nonatomic) BOOL supportsCompilerSanitizers; // @synthesize supportsCompilerSanitizers=_supportsCompilerSanitizers;
@property(readonly, nonatomic) BOOL supportsSingleFileProcessing; // @synthesize supportsSingleFileProcessing=_supportsSingleFileProcessing;
@property(readonly, nonatomic) BOOL supportsCodeCoverage; // @synthesize supportsCodeCoverage=_supportsCodeCoverage;
@property(readonly, nonatomic) BOOL shouldGenerateOptimizationProfile; // @synthesize shouldGenerateOptimizationProfile=_shouldGenerateOptimizationProfile;
@property(readonly, nonatomic) BOOL shouldBuildThinnedResources; // @synthesize shouldBuildThinnedResources=_shouldBuildThinnedResources;
@property(readonly, nonatomic) BOOL shouldInstall; // @synthesize shouldInstall=_shouldInstall;
@property(readonly, nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(readonly, nonatomic) BOOL shouldProfile; // @synthesize shouldProfile=_shouldProfile;
@property(readonly, nonatomic) BOOL shouldTest; // @synthesize shouldTest=_shouldTest;
@property(readonly, nonatomic) BOOL shouldLaunch; // @synthesize shouldLaunch=_shouldLaunch;
@property(readonly, nonatomic, getter=isAppleInternalOnly) BOOL appleInternalOnly; // @synthesize appleInternalOnly=_appleInternalOnly;
@property(readonly, copy, nonatomic) NSString *commandNameGerund; // @synthesize commandNameGerund=_commandNameGerund;
@property(readonly, copy, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCommandName:(id)arg1 gerund:(id)arg2 appleInternalOnly:(BOOL)arg3;
- (id)init;

@end

