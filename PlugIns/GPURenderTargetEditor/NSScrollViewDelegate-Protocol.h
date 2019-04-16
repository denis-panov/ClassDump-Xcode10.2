//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class NSArray, NSScrollView;

@protocol NSScrollViewDelegate <NSObject>

@optional
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
- (BOOL)allowPanningInScrollView:(NSScrollView *)arg1;
- (NSArray *)magnificationInflectionPointsForScrollView:(NSScrollView *)arg1;
- (void)scrollView:(NSScrollView *)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3;
- (double)scrollView:(NSScrollView *)arg1 pageAlignedOriginOnAxis:(long long)arg2 forProposedDestination:(double)arg3 currentOrigin:(double)arg4 initialOrigin:(double)arg5 velocity:(double)arg6;
- (void)scrollViewBeganMomentum:(NSScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didEndScrollInScrollView:(NSScrollView *)arg1;
- (void)didScrollInScrollView:(NSScrollView *)arg1;
- (void)didBeginScrollInScrollView:(NSScrollView *)arg1;
@end

