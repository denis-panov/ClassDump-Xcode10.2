//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSGridViewDecoratorTrackingView.h>

@class IBNSGridRowTemplate;

@interface IBNSGridRowDecoratorView : IBNSGridViewDecoratorTrackingView
{
    IBNSGridRowTemplate *_row;
}

@property __weak IBNSGridRowTemplate *row; // @synthesize row=_row;
- (void).cxx_destruct;
- (void)invalidate;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (void)ibRegisterViewTrackerChangeFromSize:(struct CGSize)arg1 document:(id)arg2;
- (void)applyEstimatedHeightDeltaToGrid:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

