//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSButton.h>

@class DVTWeakInterposer;

@interface Xcode3ImagePopUpButton : NSButton
{
    DVTWeakInterposer *_menuSource_dvtWeakInterposer;
    SEL _menuSelector;
}

+ (Class)cellClass;
- (void).cxx_destruct;
- (void)_doAction;
- (void)setMenuSource:(id)arg1 selector:(SEL)arg2;
@property __weak id menuSource;

@end

