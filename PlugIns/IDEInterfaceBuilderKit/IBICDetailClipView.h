//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSClipView.h>

@protocol IBViewDragDelegate;

@interface IBICDetailClipView : NSClipView
{
    id <IBViewDragDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <IBViewDragDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

