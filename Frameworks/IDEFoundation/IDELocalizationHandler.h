//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTLocale, DVTStackBacktrace, IDEBuildParameters, IDEContainer, IDEWorkspace, LOCHandler, NSArray, NSDictionary, NSSet, NSString, NSUUID;
@protocol IDELocalizedContainer;

@interface IDELocalizationHandler : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    IDEBuildParameters *_buildParameters;
    IDEContainer<IDELocalizedContainer> *_container;
    NSDictionary *_options;
    DVTLocale *_sourceLocale;
    NSUUID *_sessionID;
    NSString *_temporaryDirectory;
    LOCHandler *_underlyingHandler;
    NSArray *_contentToLocalize;
    NSArray *_nonLocalizedContentForReference;
    NSDictionary *_infoPlistFilesByBlueprint;
    NSDictionary *_blueprintNamesByBlueprint;
    NSDictionary *_blueprintIsUnitTestsByBlueprint;
    NSDictionary *_localizedStringMacroNamesByBlueprint;
    NSDictionary *_sourceCodeFilesByBlueprint;
    NSDictionary *_sourceCodeStringsFilesByBlueprint;
    NSDictionary *_localizableResourceFilesByBlueprint;
    NSDictionary *_blueprintsByLocalizableResourceFile;
    NSDictionary *_nonLocalizableResourceFilesByBlueprint;
    NSDictionary *_blueprintsByNonLocalizableResourceFile;
    NSDictionary *_supportedPlatformsByBlueprint;
}

+ (BOOL)shouldPreserveTemporaryFiles;
+ (void)initialize;
@property(copy) NSDictionary *supportedPlatformsByBlueprint; // @synthesize supportedPlatformsByBlueprint=_supportedPlatformsByBlueprint;
@property(copy) NSDictionary *blueprintsByNonLocalizableResourceFile; // @synthesize blueprintsByNonLocalizableResourceFile=_blueprintsByNonLocalizableResourceFile;
@property(copy) NSDictionary *nonLocalizableResourceFilesByBlueprint; // @synthesize nonLocalizableResourceFilesByBlueprint=_nonLocalizableResourceFilesByBlueprint;
@property(copy) NSDictionary *blueprintsByLocalizableResourceFile; // @synthesize blueprintsByLocalizableResourceFile=_blueprintsByLocalizableResourceFile;
@property(copy) NSDictionary *localizableResourceFilesByBlueprint; // @synthesize localizableResourceFilesByBlueprint=_localizableResourceFilesByBlueprint;
@property(copy) NSDictionary *sourceCodeStringsFilesByBlueprint; // @synthesize sourceCodeStringsFilesByBlueprint=_sourceCodeStringsFilesByBlueprint;
@property(copy) NSDictionary *sourceCodeFilesByBlueprint; // @synthesize sourceCodeFilesByBlueprint=_sourceCodeFilesByBlueprint;
@property(copy) NSDictionary *localizedStringMacroNamesByBlueprint; // @synthesize localizedStringMacroNamesByBlueprint=_localizedStringMacroNamesByBlueprint;
@property(copy) NSDictionary *blueprintIsUnitTestsByBlueprint; // @synthesize blueprintIsUnitTestsByBlueprint=_blueprintIsUnitTestsByBlueprint;
@property(copy) NSDictionary *blueprintNamesByBlueprint; // @synthesize blueprintNamesByBlueprint=_blueprintNamesByBlueprint;
@property(copy) NSDictionary *infoPlistFilesByBlueprint; // @synthesize infoPlistFilesByBlueprint=_infoPlistFilesByBlueprint;
@property(copy) NSArray *nonLocalizedContentForReference; // @synthesize nonLocalizedContentForReference=_nonLocalizedContentForReference;
@property(copy) NSArray *contentToLocalize; // @synthesize contentToLocalize=_contentToLocalize;
@property(readonly) LOCHandler *underlyingHandler; // @synthesize underlyingHandler=_underlyingHandler;
@property(readonly, copy) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property(readonly, copy) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) DVTLocale *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(copy) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (BOOL)hasWorkspaceSupport;
@property(readonly) NSSet *blueprintProvidersForWorkspace;
- (void)cleanUpTemporaryFiles;
- (void)locateLocalizableSourceAndResourceFiles;
- (BOOL)isAssetCatalogWithStickerPack:(id)arg1 stickerPackPaths:(id *)arg2;
- (BOOL)isLocalizablePath:(id)arg1 forBaseOrLproj:(id)arg2;
- (id)expectedPathForGeneratedStringsFileName:(id)arg1 inBlueprintWithIdentifier:(id)arg2;
- (void)processSourceFiles;
- (void)accumulateNonLocalizedContent;
- (void)accumulateContentToLocalize;
- (void)prepareForUseWithContentFileType:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1 buildParameters:(id)arg2 container:(id)arg3 options:(id)arg4 sourceLocale:(id)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

