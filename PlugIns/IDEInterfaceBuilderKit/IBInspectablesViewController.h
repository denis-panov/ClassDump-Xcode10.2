//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBInspectorViewController.h>

@class NSMutableSet;

@interface IBInspectablesViewController : IBInspectorViewController
{
    NSMutableSet *_observationTokens;
}

@property(retain, nonatomic) NSMutableSet *observationTokens; // @synthesize observationTokens=_observationTokens;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)didSetInspectedObjects:(id)arg1;
- (id)willSetInspectedObjects:(id)arg1;
- (id)sliceElement;
- (id)inspectedClass;
- (void)push:(id)arg1 booleanSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 rectSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 rangeSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 pointSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 sizeSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 floatingPointSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 unsignedIntegerSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 integerSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 stringSliverForInspectable:(id)arg2;
- (id)colorInspectablesAttributesForInspectable:(id)arg1;
- (void)push:(id)arg1 colorSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 imageSliverForInspectable:(id)arg2;
- (void)push:(id)arg1 propertyForInspectable:(id)arg2;
- (void)push:(id)arg1 propertyForInspectables:(id)arg2;
- (id)keyPathForInspectable:(id)arg1 type:(long long)arg2;
- (void)updateSlices;
- (void)startObserving;
- (void)stopObserving;

@end

