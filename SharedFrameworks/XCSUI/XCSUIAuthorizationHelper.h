//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface XCSUIAuthorizationHelper : NSObject
{
}

+ (id)externalDataForAuthorizationRef:(struct AuthorizationOpaqueRef *)arg1 error:(id *)arg2;
+ (id)errorWithSecurityErrorCode:(int)arg1;
+ (id)errorWithDomain:(id)arg1 errorCode:(long long)arg2 message:(id)arg3 recoverySuggestion:(id)arg4;

@end

