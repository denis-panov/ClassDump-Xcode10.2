//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBPrimarySceneObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSWindowTemplate;

@interface IBNSWindowController : NSObject <IBPrimarySceneObject, IBDocumentArchiving, NSCoding>
{
    NSString *_explicitStoryboardIdentifier;
    NSDictionary *_storyboardSegueDestinationOptions;
    BOOL _encodeAsRuntimeInstance;
    NSWindowTemplate *_window;
    NSArray *_storyboardSegueTemplates;
    NSDictionary *_externalObjectsTableForWindowLoading;
    NSString *_windowNibName;
    unsigned long long _showSeguePresentationStyle;
    NSString *_uniqueIdentifierForStoryboardCompilation;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(nonatomic) BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(copy) NSString *uniqueIdentifierForStoryboardCompilation; // @synthesize uniqueIdentifierForStoryboardCompilation=_uniqueIdentifierForStoryboardCompilation;
@property unsigned long long showSeguePresentationStyle; // @synthesize showSeguePresentationStyle=_showSeguePresentationStyle;
@property(copy) NSString *windowNibName; // @synthesize windowNibName=_windowNibName;
@property(copy) NSDictionary *externalObjectsTableForWindowLoading; // @synthesize externalObjectsTableForWindowLoading=_externalObjectsTableForWindowLoading;
@property(copy) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates=_storyboardSegueTemplates;
@property(retain) NSWindowTemplate *window; // @synthesize window=_window;
- (void).cxx_destruct;
@property(copy) NSString *explicitStoryboardIdentifier;
- (void)unarchivePlaceholderTable:(id)arg1;
- (void)archivePlaceholderTable:(id)arg1;
- (void)ibPrepareTopLevelControllerForStoryboardCompilation;
- (id)ibUniqueIdentifierForStoryboardCompilation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (id)ibTopLevelWindowTemplateForLayoutEngine:(id)arg1;
- (id)ibWindowWithCopiedViewHierarchySnapshotForLayoutEngine:(id)arg1 returningAddedRepresentedConstraintsForRepresentedViews:(id *)arg2;
- (void)ibDecodePlatformItems:(id)arg1;
- (void)ibEncodePlatformItems:(id)arg1;
- (void)ibUnArchivePlatformItems:(id)arg1;
- (void)ibArchivePlatformItems:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibShortDisplayName;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibInspectedIsNotInStoryboard;
- (BOOL)ibInspectedIsInStoryboard;
- (BOOL)ibCanBeValidRelationshipDestination;
- (BOOL)ibCanBeValidPopoverSegueDestination;
- (BOOL)ibCanBeValidSheetSegueDestination;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibBecameLocalUnitLeaderForDocument:(id)arg1;
- (id)ibParentForFoldingDownstreamControllerFromRelationshipSegue:(id)arg1;
- (void)ibCaptureDownstreamStoryboardPlaceholderTable:(id)arg1;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (void)ibUpstreamController:(id)arg1 didBecomeDestinationOfSegue:(id)arg2;
- (id)ibOutboundRelationshipSegueReferencedContentViewController;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (void)ibDidBecomeControllerForCompilationGroup;
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
- (id)ibImageForOwnedScene;
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
- (BOOL)ibIsUnreachableInStoryboard;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (id)ibTitleForEditor;
- (BOOL)ibRequiresOutletToStoryboard;
- (id)ibRuntimeClassName;
- (id)ibRelationshipSegueDescriptionForKeyPath:(id)arg1;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

