//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/NSObject-Protocol.h>

@class ACSURLSession, NSError, NSURLAuthenticationChallenge;

@protocol ACSURLSessionDelegate <NSObject>

@optional
- (void)URLSession:(ACSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(ACSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

