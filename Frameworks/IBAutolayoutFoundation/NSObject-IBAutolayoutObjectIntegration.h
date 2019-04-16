//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface NSObject (IBAutolayoutObjectIntegration)
- (id)ibDocumentSubtreeDescriptionWithLayoutInfo:(id)arg1 startingIndentation:(id)arg2 withAdditionalDescriptionsBlock:(CDUnknownBlockType)arg3;
- (id)ibSubtreeDescriptionWithLayoutInfo:(id)arg1 withIteratorBlock:(CDUnknownBlockType)arg2 startingIndentation:(id)arg3 andAdditionalDescriptionsBlock:(CDUnknownBlockType)arg4;
- (void)ibRecursivelyAddSubtreeDescriptionToString:(id)arg1 indentation:(id)arg2 layoutInfo:(id)arg3 withIteratorBlock:(CDUnknownBlockType)arg4 andAdditionalDescriptionsBlock:(CDUnknownBlockType)arg5;
- (id)ibDefaultSubtreeDescription;
- (id)ibShortDescription;
- (void)ibModifyCandidateReferencingConstraintItemsWithFilter:(CDUnknownBlockType)arg1 duringEffectiveItemBlock:(CDUnknownBlockType)arg2;
- (void)ibModifyCandidateConstraintItemsWithFilter:(CDUnknownBlockType)arg1 duringEffectiveItemBlock:(CDUnknownBlockType)arg2;
- (void)ibModifyConstraints:(id)arg1 withFilter:(CDUnknownBlockType)arg2 duringEffectiveItemBlock:(CDUnknownBlockType)arg3;
- (id)ibExplicitCandidateConstraintGenerationMaskForChildView:(id)arg1;
- (BOOL)ibShouldIgnoreAmbiguityAndMisplacementIssuesForChild:(id)arg1;
- (BOOL)ibRequiresWidthConstraintForAmbiguityDuringEngineBootstrapping;
- (void)ibWillArbitrateInArbitrationUnit:(id)arg1;
- (void)ibWillArbitrateChild:(id)arg1 inArbitrationUnit:(id)arg2;
- (void)ibDidBootstrapLayoutWithCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibDidMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
@property(readonly, nonatomic) BOOL ibIsSelfManagedContainerInEngine;
- (BOOL)ibIsValidConstraintItem;
@end

