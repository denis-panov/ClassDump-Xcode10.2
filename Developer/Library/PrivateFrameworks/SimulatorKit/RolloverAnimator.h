//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSAnimation.h>

@class NSArray;

@interface RolloverAnimator : NSAnimation
{
    // Error parsing type: , name: owner
    // Error parsing type: , name: holdStartFraction
    // Error parsing type: , name: startingTranslation
    // Error parsing type: , name: endingTranslation
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;
@property(nonatomic, readonly) NSArray *runLoopModesForAnimating;
@property(nonatomic, readonly) float currentValue;
@property(nonatomic) float currentProgress;

@end

