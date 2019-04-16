//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, NSError, NSString;

@interface IDEDistributionAccountIssue : NSObject
{
    BOOL _isLoginIssue;
    NSError *_underlyingError;
    DVTDeveloperAccount *_account;
    NSString *_issue;
}

+ (id)loginIssueForAccount:(id)arg1;
+ (id)roleIssueForAccount:(id)arg1 issue:(id)arg2;
@property(retain, nonatomic) NSString *issue; // @synthesize issue=_issue;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL isLoginIssue; // @synthesize isLoginIssue=_isLoginIssue;
@property(copy) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
- (void).cxx_destruct;
- (id)description;

@end
