//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBDecoratedView;

@interface IBDrawingDecorator : NSObject
{
    IBDecoratedView *realView;
}

- (void)decoratedViewWillMoveToWindow:(id)arg1;
- (void)removeFromView;
- (id)window;
- (struct CGRect)frame;
- (struct CGRect)bounds;
- (BOOL)isFlipped;
- (BOOL)needsToDrawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 inDecoratedView:(id)arg2;
- (void)decoratedViewWillDraw:(id)arg1;
- (void)displayIfNeeded;
- (void)display;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void)dealloc;
- (id)initWithDelegatedView:(id)arg1;
- (id)init;

@end

