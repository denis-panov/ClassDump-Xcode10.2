//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBLayoutGuideGeneratorDelegate-Protocol.h>

@class DVTStackBacktrace, IBCanvasViewController, IBEditorCanvasFrame, NSString, NSView;

@interface IBCanvasControllerLayoutGuideGeneratorDelegate : NSObject <IBLayoutGuideGeneratorDelegate, DVTInvalidation>
{
    IBCanvasViewController *canvasController;
    IBEditorCanvasFrame *trackedFrame;
    NSView *trackedView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (Class)symbolicLayoutConstantClassForLayoutGuideGenerator:(id)arg1;
- (Class)layoutConstantClassForLayoutGuideGenerator:(id)arg1;
- (long long)userInterfaceLayoutDirectionForLayoutGuideGenerator:(id)arg1;
- (id)layoutRuleWidgetTypePrefix;
- (unsigned long long)layoutGuideGenerator:(id)arg1 allowedEdgesForSiblingGuidesFromSelection:(id)arg2 toView:(id)arg3;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldConsiderSiblingGuidesFromSelection:(id)arg2 toView:(id)arg3 ofType:(long long)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldConsiderSelectionEdge:(unsigned int)arg2 toSiblingEdge:(unsigned int)arg3 guideFromSelection:(id)arg4 toView:(id)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofAncestor:(id)arg3 fixedDuringResizingOfSubviews:(id)arg4 fromKnob:(CDUnion_31865a80)arg5;
- (BOOL)layoutGuideGenerator:(id)arg1 isEdge:(unsigned int)arg2 ofSubview:(id)arg3 fixedInPositionOnWindowDuringResizeFromKnob:(CDUnion_31865a80)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 isDistanceFromSubviewEdge:(unsigned int)arg2 ofSubview:(id)arg3 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(CDUnion_31865a80)arg4;
- (BOOL)layoutGuideGenerator:(id)arg1 isViewVerticallyResizable:(id)arg2;
- (BOOL)layoutGuideGenerator:(id)arg1 isViewHorizontallyResizable:(id)arg2;
- (CDStruct_c519178c)layoutGuideGenerator:(id)arg1 layoutInsetOfView:(id)arg2;
- (double)layoutGuideGenerator:(id)arg1 baselineOfView:(id)arg2 atIndex:(long long)arg3;
- (long long)layoutGuideGenerator:(id)arg1 numberOfBaselinesOfView:(id)arg2;
- (struct CGSize)layoutGuideGenerator:(id)arg1 preferredSizeForView:(id)arg2 suggestedSize:(struct CGSize)arg3 suggestedWidth:(char *)arg4 suggestedHeight:(char *)arg5 scaleAxesIndependently:(char *)arg6;
- (CDStruct_c519178c)layoutGuideGenerator:(id)arg1 insetToDesignableContentAreaForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 containerWidgetTypeForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 widgetTypeForView:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 viewsForSelectionToSubviewsGuides:(id)arg2;
- (BOOL)layoutGuideGenerator:(id)arg1 shouldViewHaveContainedSubviewGuides:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 siblingsForApplyingGuidesToViews:(id)arg2;
- (id)layoutGuideGenerator:(id)arg1 baselinesForViews:(id)arg2 withSuggestedLayoutFrame:(struct CGRect)arg3 andKnobPosition:(CDUnion_31865a80)arg4;
- (id)abstractUserLayoutGuidesForLayoutGuideGenerator:(id)arg1;
- (id)layoutGuideGenerator:(id)arg1 viewForContainmentGuides:(id)arg2;
- (void)wrapContentResizingOfView:(id)arg1 inFrame:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (id)initWithCanvasViewController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
