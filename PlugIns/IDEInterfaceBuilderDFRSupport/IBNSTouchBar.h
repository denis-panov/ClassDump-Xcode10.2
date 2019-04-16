//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import "IBDocumentArchiving-Protocol.h"

@class IBHardwarePreviewConfiguration, IBNSTouchBarItem, IBNSTouchBarView, NSArray, NSString, NSTouchBar;

@interface IBNSTouchBar : NSObject <IBDocumentArchiving>
{
    IBNSTouchBarView *_runtimeTouchBarView;
    NSTouchBar *_runtimeTouchBar;
    IBNSTouchBarItem *_dummyItemForSizing;
    BOOL _encodeAsRuntimeInstance;
    NSArray *_touchBarItems;
    IBHardwarePreviewConfiguration *_ibHardwarePreviewConfiguration;
    IBNSTouchBarItem *_principalItem;
    NSString *_customizationIdentifier;
}

+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy) NSString *customizationIdentifier; // @synthesize customizationIdentifier=_customizationIdentifier;
@property(retain) IBNSTouchBarItem *principalItem; // @synthesize principalItem=_principalItem;
@property(retain, nonatomic) IBHardwarePreviewConfiguration *ibHardwarePreviewConfiguration; // @synthesize ibHardwarePreviewConfiguration=_ibHardwarePreviewConfiguration;
@property(nonatomic) BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(retain, nonatomic) NSArray *touchBarItems; // @synthesize touchBarItems=_touchBarItems;
- (void).cxx_destruct;
- (id)_nestingTouchBar;
- (id)rootNestingTouchBar;
- (BOOL)isNestedTouchBar;
- (void)invalidateTouchBarSimulatorView;
- (id)runtimeTouchBar;
- (id)principalItemIdentifier;
- (void)updateTouchBarItems;
- (id)dummyItemForSizingEmptyGroups;
@property(readonly, nonatomic) NSArray *touchBarItemsForSizingGroups;
- (void)updateWidthAndHeightConstraintsForDescendant:(id)arg1;
- (id)touchBarSimulatorView;
- (id)ibLocalAttributeKeyPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)touchBarItemsByFlatteningGroups;
- (void)updateDesignTimeConstraintsForItems;
- (id)ibTypeNameForDefaultLabel;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (struct CGRect)rectForTouchBarItem:(id)arg1 inTouchBarView:(id)arg2;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (id)ibHitTestingView;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibSetValue:(id)arg1 forInsertingPasteboardObjectsIntoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)_touchBarItemViews;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibTopLevelObjectForLinkedParentEditorFrame;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

