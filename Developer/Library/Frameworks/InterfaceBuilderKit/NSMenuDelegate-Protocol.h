//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/NSObject-Protocol.h>

@class NSEvent, NSMenu, NSMenuItem, NSScreen;

@protocol NSMenuDelegate <NSObject>

@optional
- (struct CGRect)confinementRectForMenu:(NSMenu *)arg1 onScreen:(NSScreen *)arg2;
- (void)menu:(NSMenu *)arg1 willHighlightItem:(NSMenuItem *)arg2;
- (void)menuDidClose:(NSMenu *)arg1;
- (void)menuWillOpen:(NSMenu *)arg1;
- (BOOL)menuHasKeyEquivalent:(NSMenu *)arg1 forEvent:(NSEvent *)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(NSMenu *)arg1 updateItem:(NSMenuItem *)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(NSMenu *)arg1;
- (void)menuNeedsUpdate:(NSMenu *)arg1;
@end

