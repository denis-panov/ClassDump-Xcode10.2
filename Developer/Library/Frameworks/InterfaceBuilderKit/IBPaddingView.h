//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBAutoLayoutView.h>

@class NSView;

@interface IBPaddingView : IBAutoLayoutView
{
    struct IBInsetTag padding;
    NSView *paddedView;
}

- (void)layout;
- (BOOL)isFlipped;
- (void)subviewFrameDidChange:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithPaddedView:(id)arg1 inset:(struct IBInsetTag)arg2;

@end
