//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSControl.h>

@class NSButton;
@protocol GPUColorChannelLinkDelegate;

__attribute__((visibility("hidden")))
@interface GPUColorChannelLink : NSControl
{
    unsigned long long _numberOfLinks;
    NSButton *_lockView;
    id <GPUColorChannelLinkDelegate> _delegate;
}

@property(nonatomic) __weak id <GPUColorChannelLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)lockViewAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL linked;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(nonatomic) unsigned long long numberOfLinks;
- (id)initWithFrame:(struct CGRect)arg1;

@end

