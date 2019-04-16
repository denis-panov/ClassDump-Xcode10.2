//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class DVTKeychain, NSString, NSURL;

@protocol DVTKeychainServiceProtocol
- (void)deleteInternetPasswordForServiceURL:(NSURL *)arg1 forUsername:(NSString *)arg2 keychain:(DVTKeychain *)arg3 callback:(void (^)(BOOL, NSError *))arg4;
- (void)saveInternetPassword:(NSString *)arg1 forUsername:(NSString *)arg2 serviceURL:(NSURL *)arg3 keychain:(DVTKeychain *)arg4 callback:(void (^)(BOOL, NSError *))arg5;
- (void)fetchInternetPasswordForUsername:(NSString *)arg1 serviceURL:(NSURL *)arg2 keychain:(DVTKeychain *)arg3 callback:(void (^)(NSString *, NSError *))arg4;
- (void)deletePasswordForUsername:(NSString *)arg1 service:(NSString *)arg2 keychain:(DVTKeychain *)arg3 callback:(void (^)(BOOL, NSError *))arg4;
- (void)savePassword:(NSString *)arg1 forUsername:(NSString *)arg2 service:(NSString *)arg3 keychain:(DVTKeychain *)arg4 callback:(void (^)(BOOL, NSError *))arg5;
- (void)fetchSSHPasswordForUsername:(NSString *)arg1 service:(NSString *)arg2 keychain:(DVTKeychain *)arg3 callback:(void (^)(NSString *, NSError *))arg4;
- (void)fetchPasswordForUsername:(NSString *)arg1 service:(NSString *)arg2 keychain:(DVTKeychain *)arg3 callback:(void (^)(NSString *, NSError *))arg4;
@end

