//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSWindow.h>

@interface NSWindow (IBWindowAdditions)
+ (id)windowForOverlaying;
+ (id)windowAtScreenPoint:(struct CGPoint)arg1;
- (struct CGRect)maxFrameRectForCurrentScreen;
- (struct CGRect)maxContentRectForCurrentScreen;
- (id)obscuringBorderedWindows;
- (void)commitFieldEditingAndTryToMaintainFirstResponder;
- (BOOL)isFullKeyboardAccessEnabled;
- (id)screenImage;
- (BOOL)isObscuredBy:(id)arg1;
- (id)windowsInOrderingPlain;
- (BOOL)springForward;
- (BOOL)flashOverWindow:(id)arg1 withRepetitions:(long long)arg2 onTime:(double)arg3 offTime:(double)arg4;
- (BOOL)isKeyAndOrderedFront;
- (void)buildKeyViewLoop;
- (struct CGPoint)contentRectTopLeftPoint;
- (struct CGPoint)frameTopLeftPoint;
- (void)setContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRect;
- (void)setFrame:(struct CGRect)arg1;
- (void)ensureVisibilityOfPortion:(struct CGSize)arg1 ofRect:(struct CGRect)arg2 withBuffer:(long long)arg3 inPresenceOfWindows:(id)arg4;
- (id)bestFrameWithVisibilityOfPortion:(struct CGSize)arg1 ofRect:(struct CGRect)arg2 withBuffer:(long long)arg3 inPresenceOfWindows:(id)arg4;
- (id)bestScreenAndSetFrameIfNecessary;
- (void)ensureVisibilityOfPortion:(struct CGSize)arg1 ofRect:(struct CGRect)arg2;
- (void)setCenterPoint:(struct CGPoint)arg1;
- (id)activeColorPicker;
- (id)activeColorWell;
- (id)toolbarView;
- (id)themeView;
- (void)fadeOff:(double)arg1;
- (void)fadeOn:(double)arg1 block:(BOOL)arg2;
- (void)dragWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (BOOL)closesOnDeactivate;
- (void)setClosesWhenLosesMain:(BOOL)arg1;
- (struct CGPoint)convertPointToUserSpace:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromUserSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromUserSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectToUserSpace:(struct CGRect)arg1;
- (struct CGRect)convertRectFromScreen:(struct CGRect)arg1;
- (struct CGRect)convertRectToScreen:(struct CGRect)arg1;
@end
