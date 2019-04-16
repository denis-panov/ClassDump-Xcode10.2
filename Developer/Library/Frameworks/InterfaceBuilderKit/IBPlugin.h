//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSView;

@interface IBPlugin : NSObject
{
    NSView *preferencesView;
    void *reserved[8];
}

+ (id)versionInfoForBundle:(id)arg1;
+ (id)fileAttributesForBundleExecutable:(id)arg1;
+ (id)fileAttributesForBundle:(id)arg1;
+ (id)minorVersionForBundle:(id)arg1;
+ (id)majorVersionForBundle:(id)arg1;
+ (id)sharedInstance;
- (id)primaryDeclaredDependencyIdentifierForCategory:(long long)arg1;
- (id)declaredDependencyDefinitions;
- (id)declaredDependencyDefinitionsForCategory:(long long)arg1;
- (id)interfaceBuilderDeclaredDevelopmentDependencyDefinitions;
- (id)versionInfo;
- (id)minorVersion;
- (id)majorVersion;
- (id)orderedDocSetBundleIdentifiersForTargetRuntime:(id)arg1;
- (id)docSetBundleIdentifiersForTargetRuntime:(id)arg1;
- (void)document:(id)arg1 takeDefaultDeploymentTargetFromSDKPath:(id)arg2;
- (void)document:(id)arg1 willSynchronizeWithXcodeProject:(id)arg2;
- (void)addSystemResourcesToDocument:(id)arg1;
- (id)requiredFrameworks;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedLibraryView:(id)arg3;
- (void)document:(id)arg1 didStartSimulatorWithContext:(id)arg2;
- (void)document:(id)arg1 willStartSimulatorWithContext:(id)arg2;
- (id)documentDidVerifyContents:(id)arg1;
- (id)documentWillVerifyContents:(id)arg1;
- (id)pluginDependencies;
- (id)frameworkDisplayName;
- (id)userPresentableIdentifierForTargetRuntimeIdentifier:(id)arg1;
- (id)supportedTargetRuntimes;
- (id)runtimeName;
- (id)integratedTargetRuntimeClasses;
- (Class)documentClassForArchivingObjects:(id)arg1;
- (Class)documentClassForObjectsOnPasteboard:(id)arg1;
- (id)typeSummaryForLibraryDisplayOfPasteboardObject:(id)arg1;
- (id)pasteboardObjectsForLibraryTemplateView:(id)arg1;
- (id)pasteboardObjectsForDraggedLibraryView:(id)arg1;
- (id)lazyPasteboardTypesForDraggedLibraryView:(id)arg1;
- (BOOL)lazilyProvidesDataForDraggedLibraryView:(id)arg1;
- (id)acceptDragInfo:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (void)registerDragTypesForWindow:(id)arg1;
- (id)dropTargetForDragInfo:(id)arg1 inWindowController:(id)arg2 allowedDraggingOperations:(unsigned long long *)arg3;
- (id)templatePaths;
- (id)documentTemplateGroupIdentifiers;
- (id)imageForTemplateGroupWithIdentifier:(id)arg1;
- (id)documentTemplateDisplayGroupForTemplateGroupWithIdentifier:(id)arg1;
- (id)documentTemplateDisplayGroup;
- (double)documentTemplateDisplayGroupSortOrderForTemplateGroupWithIdentifier:(id)arg1;
- (double)documentTemplateDisplayGroupSortOrder;
- (id)identifier;
- (id)preferencesView;
- (id)path;
- (id)label;
- (id)name;
- (id)libraryNibNamesForTargetRuntime:(id)arg1;
- (id)libraryNibNames;
- (id)bundle;
- (void)willUnload;
- (void)didLoad;
- (id)pathsForSystemClassDescriptionsOfType:(id)arg1 forTargetRuntime:(id)arg2;
- (id)loadedLayoutRules;
- (void)setLoadedLayoutRules:(id)arg1;
- (void)didLoadLibraryNibNamed:(id)arg1 forTargetRuntime:(id)arg2 topLevelObjects:(id)arg3;
- (void)didLoadLibraryNibNamed:(id)arg1 topLevelObjects:(id)arg2;
- (BOOL)canUnload:(id *)arg1;
- (BOOL)isBuiltIn;
- (void)dealloc;

@end
