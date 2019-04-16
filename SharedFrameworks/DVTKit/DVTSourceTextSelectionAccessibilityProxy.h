//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTSourceTextView;

@interface DVTSourceTextSelectionAccessibilityProxy : NSObject
{
    DVTSourceTextView *_parent;
}

@property(readonly) DVTSourceTextView *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)accessibilityFocused;
- (id)accessibilityTitle;
- (id)accessibilityParent;
- (id)accessibilityValue;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityRole;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)initWithParent:(id)arg1;

@end

