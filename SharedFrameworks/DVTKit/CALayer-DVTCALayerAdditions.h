//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSView, NSWindow;

@interface CALayer (DVTCALayerAdditions)
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)addSublayerAndUpdateContentsScale:(id)arg1;
- (void)recursivelyUpdateScaleFactor;
- (void)recursivelyUpdateContentsScale:(double)arg1 fromWindow:(id)arg2;
- (void)dvt_setPositionAndMakePixelAligned:(struct CGPoint)arg1;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
@property(readonly) NSArray *sublayersExcludingHiddenLayers;
- (id)view;
@property(readonly) NSView *dvt_view;
@property(readonly) NSWindow *window;
@property(readonly) CALayer *rootLayer;
@end

