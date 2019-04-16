//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTOneShotBlock : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _callbackBlock;
}

+ (void)initialize;
+ (id)oneShotBlockWithMixedInvalidationAndCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithInvalidateTokens:(id)arg1;
+ (id)oneShotBlockWithCallback:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

