//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCSpecification.h>

@class NSArray, NSString;
@protocol DVTMacroExpansion;

@interface XCArchitectureSpecification : XCSpecification
{
    long long _byteOrder;
    NSString *_canonicalName;
    NSArray<DVTMacroExpansion> *_realArchitectures;
    NSString *_architectureSetting;
    BOOL _isShownInPopup;
    long long _sortNumber;
    NSArray *_compatibilityArchs;
    BOOL _errorOutsideDeploymentTargetRange;
    BOOL _deprecated;
    BOOL _deprecatedError;
    NSArray *_deploymentTargetRange;
}

+ (id)validArchitectureCanonicalNamesInDomain:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
@property(readonly) BOOL deprecatedError; // @synthesize deprecatedError=_deprecatedError;
@property(readonly) BOOL deprecated; // @synthesize deprecated=_deprecated;
@property(readonly) BOOL errorOutsideDeploymentTargetRange; // @synthesize errorOutsideDeploymentTargetRange=_errorOutsideDeploymentTargetRange;
@property(readonly) NSArray *deploymentTargetRange; // @synthesize deploymentTargetRange=_deploymentTargetRange;
- (void).cxx_destruct;
@property(readonly) NSArray *compatibilityArchitectures;
@property(readonly) long long sortNumber;
@property(readonly) BOOL isShownInPopup;
@property(readonly) NSString *architectureSetting;
@property(readonly) NSArray<DVTMacroExpansion> *realArchitectures;
@property(readonly) NSString *canonicalName;
@property(readonly) long long byteOrder;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

