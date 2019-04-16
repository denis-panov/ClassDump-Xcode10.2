//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/ACSURLSessionTaskDelegate-Protocol.h>

@class ACSURLSession, ACSURLSessionDataTask, ACSURLSessionDownloadTask, NSCachedURLResponse, NSData, NSURLResponse;

@protocol ACSURLSessionDataDelegate <ACSURLSessionTaskDelegate>

@optional
- (void)URLSession:(ACSURLSession *)arg1 dataTask:(ACSURLSessionDataTask *)arg2 willCacheResponse:(NSCachedURLResponse *)arg3 completionHandler:(void (^)(NSCachedURLResponse *))arg4;
- (void)URLSession:(ACSURLSession *)arg1 dataTask:(ACSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(ACSURLSession *)arg1 dataTask:(ACSURLSessionDataTask *)arg2 didBecomeDownloadTask:(ACSURLSessionDownloadTask *)arg3;
- (void)URLSession:(ACSURLSession *)arg1 dataTask:(ACSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
@end

