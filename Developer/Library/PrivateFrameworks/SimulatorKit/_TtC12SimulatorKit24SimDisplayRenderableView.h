//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@interface _TtC12SimulatorKit24SimDisplayRenderableView : NSView
{
    // Error parsing type: , name: surfaceLayer
    // Error parsing type: , name: renderableViewCallbackUUID
    // Error parsing type: , name: displayPropertiesChangedCallbackUUID
    // Error parsing type: , name: displayClass
    // Error parsing type: , name: io
    // Error parsing type: , name: displaySize
    // Error parsing type: , name: delegate
    // Error parsing type: , name: displayDelegate
    // Error parsing type: , name: _uuid
    // Error parsing type: , name: _queue
    // Error parsing type: , name: _isDeallocating
    // Error parsing type: , name: _port
    // Error parsing type: , name: _framebufferSurface
    // Error parsing type: , name: _maskedFramebufferSurface
    // Error parsing type: , name: deviceRotation
    // Error parsing type: , name: nativeScale
}

- (void).cxx_destruct;
- (struct CGRect)convertToSelfFromDeviceRect:(struct CGRect)arg1;
- (struct CGRect)convertToWindowFromDeviceRect:(struct CGRect)arg1;
- (struct CGRect)convertToScreenFromDeviceRect:(struct CGRect)arg1;
- (struct CGPoint)convertToDeviceFromUnitPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToDeviceFromSelfRect:(struct CGRect)arg1;
- (struct CGPoint)convertToDeviceFromSelfPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToDeviceFromWindowRect:(struct CGRect)arg1;
- (struct CGPoint)convertToDeviceFromWindowPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToDeviceFromScreenRect:(struct CGRect)arg1;
- (struct CGPoint)convertToDeviceFromScreenPoint:(struct CGPoint)arg1;
- (id)takeScreenshotWithFileType:(unsigned long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
@property(nonatomic, readonly) NSView *nextValidKeyView;
@property(nonatomic, readonly) BOOL mouseDownCanMoveWindow;
@property(nonatomic, readonly) BOOL wantsUpdateLayer;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

