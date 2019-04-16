//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBICImageResizingBehavior, IBICImageSlicingViewContainer, NSEvent;

@protocol IBICImageSlicingViewContainerDelegate <NSObject>
- (void)imageSlicingViewContainer:(IBICImageSlicingViewContainer *)arg1 userDidMouseDown:(NSEvent *)arg2;
- (void)imageSlicingViewContainer:(IBICImageSlicingViewContainer *)arg1 userDidChangeResizingBehavior:(IBICImageResizingBehavior *)arg2;
- (void)imageSlicingViewContainer:(IBICImageSlicingViewContainer *)arg1 userDidChooseResizingMode:(long long)arg2;
@end

