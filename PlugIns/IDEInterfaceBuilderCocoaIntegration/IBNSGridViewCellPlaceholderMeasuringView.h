//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@interface IBNSGridViewCellPlaceholderMeasuringView : NSView
{
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
}

+ (id)view;
+ (id)viewsForCount:(long long)arg1;
@property(nonatomic) double lastBaselineOffsetFromBottom; // @synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom;
@property(nonatomic) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
- (struct CGSize)effectiveIntrinsicSize;
- (struct CGSize)intrinsicContentSize;

@end

