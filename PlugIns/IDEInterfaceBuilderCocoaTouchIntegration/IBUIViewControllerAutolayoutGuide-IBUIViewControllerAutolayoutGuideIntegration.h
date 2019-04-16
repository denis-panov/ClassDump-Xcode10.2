//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBCocoaTouchToolFoundation/IBUIViewControllerAutolayoutGuide.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBIDEAutolayoutItem-Protocol.h>

@class NSArray, NSObject, NSSet, NSString;
@protocol IBAutolayoutItem, IBCollection, IBIDEAutolayoutItem, IBOrderedCollection;

@interface IBUIViewControllerAutolayoutGuide (IBUIViewControllerAutolayoutGuideIntegration) <IBIDEAutolayoutItem>
+ (id)keyPathsForValuesAffectingIbContainerWidgetType;
+ (void)registerMarshallingRecordHandlers;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
- (BOOL)ibIsTurnedOnInConfiguration:(id)arg1;
- (void)ibInvalidateCachedInstalledConstraintsIncludingChildren:(BOOL)arg1;
- (struct CGRect)ibInspectedFrame;
- (BOOL)ibInspectedHorizontallySizable;
- (BOOL)ibInspectedVerticallySizable;
- (BOOL)ibInspectedPositionable;
- (CDStruct_c519178c)ibInspectedAlignmentInset;
- (void)ibVerifyConstraintsAreWellFormedInDocument:(id)arg1 andPopulateMessages:(id)arg2;
- (void)ibVerifyConstraintsAreSortedInDocument:(id)arg1;
- (void)ibPrimitiveRemoveConstraintsFromCandidates:(id)arg1 andFromDocument:(id)arg2 allowingCascadingDelete:(BOOL)arg3;
- (void)ibPrimitiveRemoveConstraintsFromCandidateListOnly:(id)arg1 keepingInDocument:(id)arg2;
- (void)ibPrimitiveAddConstraintsToCandidateListOnly:(id)arg1 thatAreAlreadyInDocument:(id)arg2;
- (void)ibRemoveCandidateConstraints:(id)arg1;
- (void)ibAddCandidateConstraints:(id)arg1 shouldAddToEffectiveEditedConfiguration:(BOOL)arg2;
- (double)ibPriorityForPlaceholderAmbiguousSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderAmbiguousSubviewHorizontalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (BOOL)ibShouldBeIncludedForReportingAmbiguityWithStatus:(id)arg1 inDocument:(id)arg2;
@property(readonly, nonatomic) BOOL ibShouldPropagateFramesDuringFrameDecision;
- (BOOL)ibShouldIgnoreForAmbiguityGroup:(id)arg1;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeAmbiguity;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionAmbiguity;
@property(nonatomic) BOOL ibExternalWasMisplacedOnLastStatusUpdate;
@property(nonatomic) BOOL ibExternalWasAmbiguousOnLastStatusUpdate;
@property(nonatomic) BOOL ibExternalHasUninitializedAutolayoutAmbiguityStatus;
- (BOOL)ibCanHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg1;
- (BOOL)ibPrefersToVerticallyResizeWithContainer;
- (BOOL)ibPrefersToHorizontallyResizeWithContainer;
- (BOOL)ibDerivesDesignTimeDefaultIntrinsicContentSize;
- (id)ibPreferredItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (CDStruct_c519178c)ibInsetToDesignableContentArea;
- (id)ibContainerWidgetType;
- (id)ibWidgetType;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ibDesignableContentItem;
- (id)ibSwizzledCocoaTouchLayoutInfoProvider;
- (BOOL)ibAllowsBaselineConstraints;
- (BOOL)ibAllowsShowingControlDragConstraintFromAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(id)arg3;
- (BOOL)ibAllowsContainerLikeTreatmentForSiblingConstraintGeneration;
- (BOOL)ibAllowsConstrainingAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(id)arg3;
- (unsigned long long)ibPreferredConstrainingLayoutAttributeToSiblingWithAttribute:(unsigned long long)arg1;
- (unsigned long long)ibPreferredItemReplacementAttributeForAttribute:(unsigned long long)arg1;
- (BOOL)ibHasOwnedPositionLayoutInDocument:(id)arg1;
- (BOOL)ibHasOwnedSizeLayoutInDocument:(id)arg1;
- (BOOL)ibIsValidConstraintItem;
- (id)ibPasteboardTypes;
- (BOOL)ibCanBeReferencedByConstraintWithContainingView:(id)arg1;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)runtimeClassFromType;
- (BOOL)ibCanChangeCustomClassName;
- (id)ibDefaultLabel;
- (id)ibRuntimeClassName;
- (id)ibLocalAttributeKeyPaths;

// Remaining properties
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) NSArray *constraints;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(nonatomic) BOOL ibCanFrameDecideEvenWhenAmbiguousForNextStatusUpdate;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) BOOL ibExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
@property(nonatomic) BOOL ibExternalExplicitTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) long long ibFrameDecisionStrategy;
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(readonly, nonatomic) id <IBOrderedCollection> ibInstalledConstraintsWithInstalledAncestors;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
@property(readonly, nonatomic) BOOL ibIsSelfManagedContainerInEngine;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id ibWindowForArbitration;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id window;
@end

