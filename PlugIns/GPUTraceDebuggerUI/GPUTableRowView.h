//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableRowView.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface GPUTableRowView : NSTableRowView
{
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
- (void)_windowChangedKeyState;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isMouseOver;
- (void)setSelected:(BOOL)arg1;

@end

