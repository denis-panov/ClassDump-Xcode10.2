//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC7XCBuild12XCXBSProject : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: baseProjectName
    // Error parsing type: , name: buildAliasNames
    // Error parsing type: , name: workspaceName
    // Error parsing type: , name: configurationName
    // Error parsing type: , name: architectures
    // Error parsing type: , name: deploymentTarget
    // Error parsing type: , name: deploymentTargetSetting
    // Error parsing type: , name: platform
    // Error parsing type: , name: toolchain
    // Error parsing type: , name: baseSDK
    // Error parsing type: , name: additionalSDKs
    // Error parsing type: , name: allowsSwiftCompilation
    // Error parsing type: , name: allowsWarningsAsErrors
    // Error parsing type: , name: arguments
    // Error parsing type: , name: generatesVersionPlists
    // Error parsing type: , name: buildSubdirectory
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 baseProjectName:(id)arg2 buildAliasNames:(id)arg3 workspace:(id)arg4 configuration:(id)arg5 architectures:(id)arg6 deploymentTarget:(id)arg7 deploymentTargetSetting:(id)arg8 platform:(id)arg9 toolchain:(id)arg10 baseSDK:(id)arg11 additionalSDKs:(id)arg12 allowsSwiftCompilation:(BOOL)arg13 allowsWarningsAsErrors:(BOOL)arg14 arguments:(id)arg15 generatesVersionPlists:(BOOL)arg16 buildSubdirectory:(id)arg17;
@property(nonatomic, readonly) NSString *buildSubdirectory; // @synthesize buildSubdirectory;
@property(nonatomic, readonly) BOOL generatesVersionPlists; // @synthesize generatesVersionPlists;
@property(nonatomic, readonly) NSArray *arguments; // @synthesize arguments;
@property(nonatomic, readonly) BOOL allowsWarningsAsErrors; // @synthesize allowsWarningsAsErrors;
@property(nonatomic, readonly) BOOL allowsSwiftCompilation; // @synthesize allowsSwiftCompilation;
@property(nonatomic, readonly) NSArray *additionalSDKs; // @synthesize additionalSDKs;
@property(nonatomic, readonly) NSString *baseSDK; // @synthesize baseSDK;
@property(nonatomic, readonly) NSString *toolchain; // @synthesize toolchain;
@property(nonatomic, readonly) NSString *platform; // @synthesize platform;
@property(nonatomic, readonly) NSString *deploymentTargetSetting; // @synthesize deploymentTargetSetting;
@property(nonatomic, readonly) NSString *deploymentTarget; // @synthesize deploymentTarget;
@property(nonatomic, readonly) NSArray *architectures; // @synthesize architectures;
@property(nonatomic, readonly) NSString *configurationName; // @synthesize configurationName;
@property(nonatomic, readonly) NSString *workspaceName; // @synthesize workspaceName;
@property(nonatomic, readonly) NSArray *buildAliasNames; // @synthesize buildAliasNames;
@property(nonatomic, readonly) NSString *baseProjectName; // @synthesize baseProjectName;
@property(nonatomic, readonly) NSString *name; // @synthesize name;

@end

