//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCCompilerSpecification.h>

@interface XCCompilerSpecificationInterfaceBuilder : XCCompilerSpecification
{
}

- (id)doSpecialDependencySetupForCommand:(id)arg1 withInputNodes:(id)arg2 withMacroExpansionScope:(id)arg3;
- (void)_addDeploymentTargetArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (void)_addTargetDeviceArgumentsForCommand:(id)arg1 withMacroExpansionScope:(id)arg2;
- (id)_targetDeviceArgumentNameForTargetedDeviceFamily:(id)arg1 platformName:(id)arg2;
- (id)platformDefinitionForPlatformName:(id)arg1;
- (id)_platformDefinitionsByPlatformName;

@end
