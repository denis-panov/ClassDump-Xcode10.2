//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString, XCSUIBot;

@interface XCSUIIssuesStreak : NSObject
{
    NSString *_streak;
    XCSUIBot *_bot;
}

@property(retain, nonatomic) XCSUIBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) NSString *streak; // @synthesize streak=_streak;
- (void).cxx_destruct;
- (id)initWithStreak:(id)arg1 bot:(id)arg2;

@end

