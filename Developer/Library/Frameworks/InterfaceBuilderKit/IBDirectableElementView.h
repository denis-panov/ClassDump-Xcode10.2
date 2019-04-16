//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBSlateElementView.h>

@class NSView;

@interface IBDirectableElementView : IBSlateElementView
{
    BOOL draws;
    id delegate;
    NSView *targetView;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setFocalPoint:(struct CGPoint)arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDraws:(BOOL)arg1;
- (BOOL)draws;
- (void)drawRect:(struct CGRect)arg1;

@end

