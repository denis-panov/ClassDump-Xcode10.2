//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBAutolayoutFoundation/IBAutolayoutCandidateConstraintGenerator.h>

@interface IBAutolayoutCandidateConstraintGenerator (IDEAdditions)
+ (id)candidateNearestNeighborConstraintsForItems:(id)arg1 attribute:(unsigned long long)arg2 marginRelativeToContainer:(BOOL)arg3 useExistingConstant:(BOOL)arg4 document:(id)arg5;
+ (id)candidateConstraintsForAligningAttribute:(unsigned long long)arg1 ofItems:(id)arg2 useExistingConstant:(BOOL)arg3 document:(id)arg4;
+ (id)candidateVerticalBaselineSpacingConstraintBetweenItem:(id)arg1 andItem:(id)arg2 useExistingConstant:(BOOL)arg3 document:(id)arg4;
+ (id)candidateSpacingConstraintBetweenItem:(id)arg1 andItem:(id)arg2 orientation:(unsigned long long)arg3 useExistingConstant:(BOOL)arg4 document:(id)arg5;
+ (id)candidateConstraintForAligningAttribute:(unsigned long long)arg1 ofItem:(id)arg2 toAttribute:(unsigned long long)arg3 ofItem:(id)arg4 useExistingConstant:(BOOL)arg5 document:(id)arg6;
+ (id)candidateEqualSizeConstraintForItem:(id)arg1 andItem:(id)arg2 attribute:(unsigned long long)arg3 useExistingConstant:(BOOL)arg4 document:(id)arg5;
+ (id)candidateAspectRatioConstraintForWidthOfItem:(id)arg1 relativeToHeightOfItem:(id)arg2 useExplicitRatio:(id)arg3 document:(id)arg4;
+ (id)candidateExplicitSizeConstraintForItem:(id)arg1 attribute:(unsigned long long)arg2 useNextLogicalRelation:(BOOL)arg3 document:(id)arg4;
+ (long long)_nextLogicalLayoutRelationForAddingNewConstraintToItem:(id)arg1 forConstraintsMatchingBlock:(CDUnknownBlockType)arg2;
+ (id)_sharedAncestorForItem:(id)arg1 andItem:(id)arg2 document:(id)arg3;
@end

