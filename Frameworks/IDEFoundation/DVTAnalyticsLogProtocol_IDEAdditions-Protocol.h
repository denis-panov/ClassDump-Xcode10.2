//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/DVTAnalyticsLogProtocol-Protocol.h>

@class DVTCrashLogThread, NSArray;
@protocol DVTToolchainRegistrySupplyingSwiftDemangle;

@protocol DVTAnalyticsLogProtocol_IDEAdditions <DVTAnalyticsLogProtocol>
@property(readonly) DVTCrashLogThread *crashingThread;
- (void)demangleUsingToolchains:(NSArray *)arg1 toolchainRegistry:(id <DVTToolchainRegistrySupplyingSwiftDemangle>)arg2 callback:(void (^)(id <DVTAnalyticsLogProtocol_IDEAdditions>, NSError *))arg3;
@end

