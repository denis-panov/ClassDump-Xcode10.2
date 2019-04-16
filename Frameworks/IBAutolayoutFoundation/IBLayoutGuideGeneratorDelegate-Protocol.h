//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBAutolayoutFoundation/NSObject-Protocol.h>

@class IBLayoutGuideGenerator, NSArray, NSObject, NSSet, NSString;
@protocol IBAutolayoutItem, IBCollection;

@protocol IBLayoutGuideGeneratorDelegate <NSObject>
- (long long)userInterfaceLayoutDirectionForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1;
- (Class)symbolicLayoutConstantClassForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1;
- (Class)layoutConstantClassForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1;
- (unsigned long long)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 allowedEdgesForSiblingGuidesFromSelection:(id <IBCollection>)arg2 toView:(NSObject<IBAutolayoutItem> *)arg3;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 shouldConsiderSiblingGuidesFromSelection:(id <IBCollection>)arg2 toView:(NSObject<IBAutolayoutItem> *)arg3 ofType:(long long)arg4;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 shouldConsiderSelectionEdge:(unsigned int)arg2 toSiblingEdge:(unsigned int)arg3 guideFromSelection:(id <IBCollection>)arg4 toView:(NSObject<IBAutolayoutItem> *)arg5;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 isEdge:(unsigned int)arg2 ofAncestor:(NSObject<IBAutolayoutItem> *)arg3 fixedDuringResizingOfSubviews:(id <IBCollection>)arg4 fromKnob:(CDUnion_42e99c75)arg5;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 isEdge:(unsigned int)arg2 ofSubview:(NSObject<IBAutolayoutItem> *)arg3 fixedInPositionOnWindowDuringResizeFromKnob:(CDUnion_42e99c75)arg4;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 isDistanceFromSubviewEdge:(unsigned int)arg2 ofSubview:(NSObject<IBAutolayoutItem> *)arg3 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(CDUnion_42e99c75)arg4;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 shouldViewHaveContainedSubviewGuides:(NSObject<IBAutolayoutItem> *)arg2;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 isViewVerticallyResizable:(NSObject<IBAutolayoutItem> *)arg2;
- (BOOL)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 isViewHorizontallyResizable:(NSObject<IBAutolayoutItem> *)arg2;
- (CDStruct_c519178c)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 layoutInsetOfView:(NSObject<IBAutolayoutItem> *)arg2;
- (double)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 baselineOfView:(NSObject<IBAutolayoutItem> *)arg2 atIndex:(long long)arg3;
- (long long)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 numberOfBaselinesOfView:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGSize)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 preferredSizeForView:(NSObject<IBAutolayoutItem> *)arg2 suggestedSize:(struct CGSize)arg3 suggestedWidth:(char *)arg4 suggestedHeight:(char *)arg5 scaleAxesIndependently:(char *)arg6;
- (CDStruct_c519178c)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 insetToDesignableContentAreaForView:(NSObject<IBAutolayoutItem> *)arg2;
- (NSString *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 containerWidgetTypeForView:(NSObject<IBAutolayoutItem> *)arg2;
- (NSString *)layoutRuleWidgetTypePrefix;
- (NSString *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 widgetTypeForView:(NSObject<IBAutolayoutItem> *)arg2;
- (NSSet *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 viewsForSelectionToSubviewsGuides:(NSObject<IBAutolayoutItem> *)arg2;
- (NSArray *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 siblingsForApplyingGuidesToViews:(NSSet *)arg2;
- (NSArray *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 baselinesForViews:(id <IBCollection>)arg2 withSuggestedLayoutFrame:(struct CGRect)arg3 andKnobPosition:(CDUnion_42e99c75)arg4;
- (NSObject<IBAutolayoutItem> *)layoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 viewForContainmentGuides:(NSObject<IBAutolayoutItem> *)arg2;
- (NSArray *)abstractUserLayoutGuidesForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1;
@end

