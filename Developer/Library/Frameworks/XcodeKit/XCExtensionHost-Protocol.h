//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XcodeKit/NSObject-Protocol.h>

@class NSDictionary, NSXPCListenerEndpoint;

@protocol XCExtensionHost <NSObject>
- (void)useEndpointForService:(NSXPCListenerEndpoint *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)checkInWithXcode:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
@end

