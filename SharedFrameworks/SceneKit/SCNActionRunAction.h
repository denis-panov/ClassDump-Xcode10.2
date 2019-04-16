//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SceneKit/SCNAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionRunAction : SCNAction
{
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    BOOL _waitForKeyedAction;
    BOOL _runOnSubSprite;
    BOOL _fired;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (BOOL)isCustom;
- (void)dealloc;
- (id)init;

@end

