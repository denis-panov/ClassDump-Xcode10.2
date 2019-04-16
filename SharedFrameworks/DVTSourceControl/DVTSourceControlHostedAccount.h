//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTSourceControl/DVTSourceControlAccount.h>

@class DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, NSString;

@interface DVTSourceControlHostedAccount : DVTSourceControlAccount
{
    // Error parsing type: , name: username
    // Error parsing type: , name: sshKeysAuthenticationStrategy
    // Error parsing type: , name: basicAuthenticationStrategy
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 hostURL:(id)arg2 authenticationStrategy:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)authenticationStrategyForURL:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) DVTSourceControlBasicAuthenticationStrategy *basicAuthenticationStrategy; // @synthesize basicAuthenticationStrategy;
@property(nonatomic, retain) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthenticationStrategy; // @synthesize sshKeysAuthenticationStrategy;
@property(nonatomic, readonly) NSString *sshUsername;
@property(nonatomic, copy) NSString *username; // @synthesize username;

@end
