//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCSpecification.h>

@class DTDeveloperPaths, DVTMacroDefinitionTable, DVTPlatform, NSDictionary, XCCommandLineToolSpecificationRegistry, XCSDKPackage;

@interface XCPlatformSpecification : XCSpecification
{
    DTDeveloperPaths *_developerPaths;
    DTDeveloperPaths *_pluginDeveloperPaths;
    DVTMacroDefinitionTable *_defaultMacros;
    DVTMacroDefinitionTable *_overrideMacros;
    XCSDKPackage *_defaultSDK;
    NSDictionary *_debuggerSettings;
    DVTPlatform *_underlyingPlatform;
    XCCommandLineToolSpecificationRegistry *_commandLineToolSpecificationRegistry;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
+ (id)sharedPlatformBuiltProductDirs;
+ (id)platformForInfoContext:(id)arg1;
+ (id)platformForMacroExpansionScope:(id)arg1;
+ (id)platformForPath:(id)arg1;
+ (id)platformForDomain:(id)arg1;
+ (id)platformForName:(id)arg1;
+ (id)allPlatforms;
+ (void)loadAllPlatforms;
+ (void)registerSpecificationOrProxy:(id)arg1;
+ (void)_mapUnderlyingPlatform:(id)arg1 toPlatform:(id)arg2;
+ (id)platformForUnderlyingPlatform:(id)arg1;
+ (id)defaultPlatform;
+ (void)initialize;
@property(readonly) XCCommandLineToolSpecificationRegistry *commandLineToolSpecificationRegistry; // @synthesize commandLineToolSpecificationRegistry=_commandLineToolSpecificationRegistry;
@property(readonly) DVTPlatform *underlyingPlatform; // @synthesize underlyingPlatform=_underlyingPlatform;
- (void).cxx_destruct;
- (id)defaultSDK;
- (id)SDKs;
- (id)deviceProperties;
- (id)overrideMacros;
- (id)defaultMacros;
- (void)_addComputedPropertiesForPropertyListKey:(id)arg1 toMacroDefinitionTable:(id)arg2;
- (id)_computedSupportedPlatformNames;
- (id)pluginDeveloperPaths;
- (id)developerPaths;
- (id)userDescription;
- (id)iconPath;
- (id)familyIdentifier;
- (id)familyName;
- (id)platformDomain;
- (id)path;
- (id)directoryName;
- (id)alternateNames;
- (id)name;
- (void)loadSpecificationsAndPlugins;
- (void)_prependPlatformPathToSearchPathsIfNecessary:(id)arg1;
- (void)_removeJackhammerPrefixFromSearchPathsIfNecessary:(id)arg1;
- (id)initWithUnderlyingPlatform:(id)arg1;

@end

