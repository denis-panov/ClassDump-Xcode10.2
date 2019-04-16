//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSString, NSViewAnimation;
@protocol DVTScopeBarHost;

@interface DVTScopeBarsManager : NSObject <DVTInvalidation, NSAnimationDelegate>
{
    id <DVTScopeBarHost> _host;
    NSMutableArray *_scopeBarControllers;
    NSMapTable *_contentHeightObservers;
    DVTObservingToken *_frameChangeObservingToken;
    NSViewAnimation *_currentAnimation;
    CDUnknownBlockType _currentCompletionBlock;
    unsigned long long _borderSides;
    BOOL _isRespondingToFrameChangedObservation;
}

+ (void)initialize;
@property(readonly, nonatomic) __weak NSViewAnimation *currentAnimation; // @synthesize currentAnimation=_currentAnimation;
@property(nonatomic) unsigned long long borderSides; // @synthesize borderSides=_borderSides;
@property(readonly) NSArray *scopeBarControllers; // @synthesize scopeBarControllers=_scopeBarControllers;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)arg1;
- (void)_adjustViewsForHeightOffset:(double)arg1 animate:(BOOL)arg2 extraAnimations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)dismissLastScopeBar;
- (void)removeAllScopeBarsAnimate:(BOOL)arg1;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2;
- (void)removeScopeBar:(id)arg1 animate:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)insertScopeBar:(id)arg1 atIndex:(unsigned long long)arg2 animate:(BOOL)arg3;
- (void)appendScopeBar:(id)arg1 animate:(BOOL)arg2;
- (void)primitiveInvalidate;
- (id)initWithHost:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
