//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBEditor, IBUIToolbar;

@interface IBUIToolbarEditingPolicy : NSObject
{
    IBUIToolbar *_toolbar;
    IBEditor *_editor;
}

@property(readonly) IBEditor *editor; // @synthesize editor=_editor;
@property(readonly) IBUIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void).cxx_destruct;
- (id)captureImagesAndProcessGeometryOfItems:(id)arg1;
- (BOOL)isFrameLockedForButtonBarItem:(id)arg1;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1 inOverlayView:(id)arg2 withKnobSize:(struct CGSize)arg3;
- (void)configureTracker:(id)arg1 forChild:(id)arg2;
- (BOOL)shouldBarButtonItem:(id)arg1 growFromCenterWithTracker:(id)arg2;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_42e99c75)arg2 withEvent:(id)arg3;
- (id)calculateDraggedImageStateForDraggingInfo:(id)arg1;
- (id)draggedImageStateForButtonBarItems:(id)arg1 withName:(id)arg2;
- (id)initWithEditor:(id)arg1 toolbar:(id)arg2;

@end

