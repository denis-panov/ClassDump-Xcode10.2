//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSArray;

@interface IBStringsTableVerticalGradientView : NSView
{
    NSArray *colors;
    NSArray *stops;
}

- (void)setStops:(id)arg1;
- (void)setColors:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithColors:(id)arg1 andStops:(id)arg2;

@end

