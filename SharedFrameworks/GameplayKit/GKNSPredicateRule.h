//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GameplayKit/GKRule.h>

@class NSPredicate;

@interface GKNSPredicateRule : GKRule
{
    NSPredicate *_predicate;
}

@property(readonly, retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)editWithRuleSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

