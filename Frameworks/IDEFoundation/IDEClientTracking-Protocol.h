//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEClientTrackingToken;

@protocol IDEClientTracking <NSObject>
@property(readonly) BOOL isCancelling;
- (void)cancelTrackedClients;
- (NSArray *)clientsNotSupportingCancellation;
- (NSArray *)clientsRequiringCancellationPrompt;
- (id <IDEClientTrackingToken>)registerUncancellableClientWithName:(NSString *)arg1 terminationSignpost:(void (^)(void (^)(void)))arg2;
- (id <IDEClientTrackingToken>)registerClientWithName:(NSString *)arg1 promptForCancellation:(BOOL)arg2 terminationSignpost:(void (^)(void (^)(void)))arg3 cancellationBlock:(void (^)(void))arg4;
@end

