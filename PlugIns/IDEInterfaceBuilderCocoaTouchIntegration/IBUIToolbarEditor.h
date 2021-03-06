//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBViewEditor.h>

@class IBUIToolbarEditingPolicy;

@interface IBUIToolbarEditor : IBViewEditor
{
    IBUIToolbarEditingPolicy *toolbarEditingPolicy;
}

+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
- (BOOL)interceptEvent:(id)arg1;
- (void)handleDragForHitItem:(id)arg1 selectedItems:(id)arg2 withDragEvent:(id)arg3;
- (BOOL)handleDragForChild:(id)arg1 forDragEvent:(id)arg2;
- (BOOL)areKnobsLockedForObject:(id)arg1;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(CDUnion_42e99c75)arg3;
- (id)viewForTrackingObject:(id)arg1;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_42e99c75)arg2 withEvent:(id)arg3;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (id)barButtonItemAtPoint:(struct CGPoint)arg1;
- (id)editedToolbar;

@end

