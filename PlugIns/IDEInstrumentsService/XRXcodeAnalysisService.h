//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInstrumentsService/IDEAnalysisToolService-Protocol.h>

@class DVTFileDataType, IDEAnalysisTool, IDELaunchParametersSnapshot, IDERunDestination, NSMutableDictionary, NSString;

@interface XRXcodeAnalysisService : NSObject <IDEAnalysisToolService>
{
    DVTFileDataType *_runnableUTIType;
    IDERunDestination *_runDestination;
    int _pidForAttaching;
    NSString *_appNameForAttaching;
    IDEAnalysisTool *_currentTool;
    NSMutableDictionary *_currentToolForPlatformDict;
    IDEAnalysisTool *_analysisTool;
    IDELaunchParametersSnapshot *_launchParameters;
}

+ (id)_instrumentsInternalAppPluginsPath;
+ (id)_instrumentsPlugInsPath;
+ (id)_instrumentsPackagesPath;
+ (id)_apppleInternalTemplatesPath;
+ (id)_userInstalledPackagesPath;
+ (id)_homePrefsTemplatesPath;
+ (id)_instrumentsAppTemplatesPath;
+ (id)_platformsPath;
+ (id)_developerAppsPath;
+ (id)_analysisToolsForPlugin:(id)arg1 platform:(id)arg2;
+ (id)_analysisToolsForPlatform:(id)arg1;
+ (id)_analysisToolsDictForAllPlatforms;
+ (id)_pathsForTemplatesDirsAtBasePath:(id)arg1;
+ (id)_analysisToolsAtPath:(id)arg1 type:(int)arg2;
+ (id)_instrumentsPlugInsDirectories;
+ (id)sharedPlatformToAnalysisToolsMap;
+ (id)_anyPlatformID;
+ (id)analysisToolWithIdentifier:(id)arg1 platformIdentifier:(id)arg2;
+ (id)analysisToolsForPlatformIdentifier:(id)arg1;
+ (void)addUniqueTools:(id)arg1 toArray:(id)arg2;
@property(copy) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
- (void).cxx_destruct;
- (void)setAttachRunnablePID:(int)arg1 applicationName:(id)arg2;
- (id)operationWithWorkingDirectory:(id)arg1 workspaceFilePath:(id)arg2 projectFilePath:(id)arg3 packagesPaths:(id)arg4 outError:(id *)arg5;
- (id)packagesPathsToLoadDuringProfileAnalysisForBuildSchemeAction:(id)arg1 schemeCommand:(id)arg2;
- (id)customExecutableToSelectForBuildSchemeAction:(id)arg1 schemeCommand:(id)arg2;
- (id)pathsForAllBuildablesInSchemeMatchingPredicate:(CDUnknownBlockType)arg1 buildEntryPredicate:(CDUnknownBlockType)arg2 buildSchemeAction:(id)arg3 schemeCommand:(id)arg4;
- (id)allBuildablesMatchingPredicate:(CDUnknownBlockType)arg1 buildEntryPredicate:(CDUnknownBlockType)arg2 buildSchemeAction:(id)arg3;
- (id)pathsForBuildables:(id)arg1 buildSchemeAction:(id)arg2 schemeCommand:(id)arg3;
- (id)_plistableExtensionInfo:(id)arg1;
- (CDUnknownBlockType)_operationBlockWithWorkingDirectory:(id)arg1 workspaceFilePath:(id)arg2 projectFilePath:(id)arg3 packagesPaths:(id)arg4;
- (void)_launch:(id)arg1 WithConfigFile:(id)arg2;
- (id)_analysisAppPathForType:(int)arg1;
- (id)_instrumentsPath;
@property(retain) IDEAnalysisTool *analysisTool; // @synthesize analysisTool=_analysisTool;
- (id)_currentToolForPlatformDict;
- (id)_currentPlatformIdentifier;
- (id)initWithRunnableUTIType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
