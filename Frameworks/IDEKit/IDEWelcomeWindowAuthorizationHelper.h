//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEWelcomeWindowAuthorizationHelper : NSObject
{
}

+ (BOOL)isAuthorized;
+ (struct AuthorizationOpaqueRef *)acquireAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)releaseAuthorization;
+ (struct AuthorizationOpaqueRef *)_createAuthorizationForRightString:(const char *)arg1 withPrompt:(const char *)arg2;
+ (void)initialize;

@end

