//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSMenuItem.h>

@interface NSMenuItem (DVTNSMenuItemAdditions)
+ (id)dvt_menuItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dvt_setShowsKeyEquivalent:(BOOL)arg1;
- (id)_dvt_actualKeyEquivalent;
- (void)_dvt_clearSavedKeyEquivalent;
- (id)_dvt_savedKeyEquivalent;
- (void)_dvt_saveKeyEquivalent:(id)arg1;

// Remaining properties
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@end
