//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSData.h>

@interface NSData (DVTMainThreadLatencyCheckerAdditions)
- (BOOL)__DVTMainThreadLatencyChecker__writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)__DVTMainThreadLatencyChecker__writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)__DVTMainThreadLatencyChecker__writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)__DVTMainThreadLatencyChecker__writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfURL:(id)arg1;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfFile:(id)arg1;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)__DVTMainThreadLatencyChecker__initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@end
