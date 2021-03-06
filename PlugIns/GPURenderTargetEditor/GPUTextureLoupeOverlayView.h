//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class DYImage2D, NSColor;

__attribute__((visibility("hidden")))
@interface GPUTextureLoupeOverlayView : NSView
{
    BOOL _isFirstResponder;
    BOOL _showOutline;
    double _scale;
    NSColor *_outlineColor;
    DYImage2D *_overlayRenderMask;
    struct CGPoint _selectedPoint;
    // Error parsing type: {DYPixelValue="format"I""(?="sint8s"[4c]"uint8s"[4C]"sint16s"[4s]"uint16s"[4S]"sint32s"[4i]"uint32s"[4I]"sint64s"[4q]"uint64s"[4Q]"float16s"[4 ]"float32s"[4f]"float64s"[4d])}, name: _pixel
}

@property(retain, nonatomic) DYImage2D *overlayRenderMask; // @synthesize overlayRenderMask=_overlayRenderMask;
@property(retain, nonatomic) NSColor *outlineColor; // @synthesize outlineColor=_outlineColor;
@property(nonatomic) BOOL showOutline; // @synthesize showOutline=_showOutline;
@property(nonatomic) struct CGPoint selectedPoint; // @synthesize selectedPoint=_selectedPoint;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
// Error parsing type for property pixel:
// Property attributes: T{DYPixelValue=I(?=[4c][4C][4s][4S][4i][4I][4q][4Q][4 ][4f][4d])},N,V_pixel

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

