//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSNumber;

@protocol DTLeaksServiceLegacyRPC <DTXAllowedRPC>
- (void)cancelAllRequests;
- (void)requestLeaksForPid:(NSNumber *)arg1 context:(NSNumber *)arg2 provideBacktraces:(NSNumber *)arg3;
@end

