//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@interface NSView (ResizingAdditions)
- (struct CGRect)rectBySettingOrigin:(struct CGPoint)arg1 fromKnob:(long long)arg2 forRect:(struct CGRect)arg3;
- (void)knobRects:(struct CGRect *)arg1 withKnobSize:(struct CGSize)arg2 inCoordinateSpace:(id)arg3;
- (struct CGPoint)pointForKnob:(long long)arg1 onFrame:(struct CGRect)arg2;
- (struct CGRect)rectByMovingKnob:(long long)arg1 forRect:(struct CGRect)arg2 toPoint:(struct CGPoint)arg3;
- (struct CGRect)rectBySettingSize:(struct CGSize)arg1 forRect:(struct CGRect)arg2 fromKnob:(long long)arg3;
@end
