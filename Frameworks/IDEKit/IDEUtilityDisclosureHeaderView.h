//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTDisclosureHeaderView.h>

@class NSTrackingArea;

@interface IDEUtilityDisclosureHeaderView : DVTDisclosureHeaderView
{
    NSTrackingArea *_mouseTracking;
    BOOL _mouseInside;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didCompleteLayout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setMouseInside:(BOOL)arg1;
- (void)refreshDisclosureButtonVisibility;
- (void)unregisterForMouseEvents;
- (void)registerForMouseEvents;
- (void)commonInit;
- (void)setDisclosed:(BOOL)arg1;
- (void)_updateDisclosureButtonAttributedTitle;
- (id)defaultDisclosureButton;

@end

