//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DYImage2D, NSColor;

@interface DYImageOverlay : NSObject
{
    BOOL _visible;
    BOOL _displayOutlineWhenZoomed;
    DYImage2D *_image;
    NSColor *_color;
}

@property(readonly, nonatomic) NSColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) BOOL displayOutlineWhenZoomed; // @synthesize displayOutlineWhenZoomed=_displayOutlineWhenZoomed;
@property(readonly, nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) DYImage2D *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 visible:(BOOL)arg2 displayOutlineWhenZoomed:(BOOL)arg3 color:(id)arg4;

@end

