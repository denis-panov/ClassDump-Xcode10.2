//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCSpecification.h>

@class DVTMacroDefinitionTable, NSString, PBXFileType;

@interface PBXPackageTypeSpecification : XCSpecification
{
    DVTMacroDefinitionTable *_defaultMacros;
    DVTMacroDefinitionTable *_flattenedDefaultMacros;
    NSString *_productReferenceFileTypeIdentifier;
    PBXFileType *_productReferenceFileType;
    NSString *_productReferenceName;
    BOOL _productReferenceIsLaunchable;
}

+ (id)wrapperSubpathForWrapperPart:(int)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
- (void).cxx_destruct;
- (BOOL)productReferenceIsLaunchable;
- (id)productReferenceName;
- (id)productReferenceFileType;
- (id)defaultMacros;
- (id)initWithPropertyListDictionary:(id)arg1 inDomain:(id)arg2;

@end

