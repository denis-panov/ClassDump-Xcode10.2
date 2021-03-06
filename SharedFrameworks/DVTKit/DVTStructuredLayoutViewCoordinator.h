//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableSet, NSWindow;

@interface DVTStructuredLayoutViewCoordinator : NSObject
{
    NSMutableSet *_alreadyLaidOutViewsForCurrentDisplayPass;
    NSWindow *_window;
    NSWindow *_pinningReferenceIndicatingScheduled;
}

+ (void)layoutViewFromViewWillDrawIfNeeded:(id)arg1 continuingViewWillDrawRecurisionWith:(CDUnknownBlockType)arg2;
+ (void)layoutViewImmediately:(id)arg1;
+ (id)oneShotCoordinator;
+ (void)sendPositionSubviewsAndSizeSelfToView:(id)arg1;
+ (void)sendConfigureSubviewsToView:(id)arg1;
+ (BOOL)isLayingoutWindow:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)recursivelyLayoutSubviewsOfView:(id)arg1 populatingSetWithLaidOutViews:(id)arg2;
- (void)recursivelyLayoutSubviewsOfView:(id)arg1 populatingSetWithLaidOutViews:(id)arg2 visitedLayoutViewsInTopDownOrder:(id)arg3 currentLayoutPass:(long long)arg4 needsSecondPass:(char *)arg5;
- (void)layoutWindow;
- (void)layoutWindowIfNeeded;
- (BOOL)windowNeedsLayout;
- (void)invalidateWindowLayoutForView:(id)arg1;
- (id)initWithWindow:(id)arg1;

@end

