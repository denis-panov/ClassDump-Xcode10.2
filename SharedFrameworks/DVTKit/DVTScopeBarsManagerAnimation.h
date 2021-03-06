//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewAnimation.h>

@class NSScrollView, NSView;

@interface DVTScopeBarsManagerAnimation : NSViewAnimation
{
    double _baseViewLastHeight;
    BOOL _inAnimationProgress;
    NSScrollView *_scrollView;
    NSView *_baseView;
}

@property(nonatomic) BOOL inAnimationProgress; // @synthesize inAnimationProgress=_inAnimationProgress;
@property(retain, nonatomic) NSView *baseView; // @synthesize baseView=_baseView;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;

@end

