//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class DVTTabChooserView, NSMapTable;

@interface DVTTabChooserContentView : NSView
{
    DVTTabChooserView *_tabChooserView;
    NSMapTable *_accessibilityProxiesByChoice;
}

@property(retain) NSMapTable *accessibilityProxiesByChoice; // @synthesize accessibilityProxiesByChoice=_accessibilityProxiesByChoice;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityProxyForChoice:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawChoiceAtIndex:(long long)arg1 withChoiceGeometry:(id)arg2;
- (void)_drawOneChoice;
- (id)initWithFrame:(struct CGRect)arg1;

@end
