//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSString;

@protocol _TtP17XCSAdministration14LaunchdService_
- (BOOL)disableUserAgentWithLabel:(NSString *)arg1 uid:(long long)arg2 error:(id *)arg3;
- (BOOL)enableUserAgentWithLabel:(NSString *)arg1 uid:(long long)arg2 error:(id *)arg3;
- (BOOL)stopUserAgentWithInstalledPath:(NSString *)arg1 uid:(long long)arg2 error:(id *)arg3;
- (BOOL)startUserAgentWithInstalledPath:(NSString *)arg1 uid:(long long)arg2 error:(id *)arg3;
- (BOOL)stopSystemJobWithInstalledPath:(NSString *)arg1 error:(id *)arg2;
- (BOOL)startSystemJobWithInstalledPath:(NSString *)arg1 error:(id *)arg2;
- (BOOL)isJobEnabled:(NSString *)arg1;
@end

