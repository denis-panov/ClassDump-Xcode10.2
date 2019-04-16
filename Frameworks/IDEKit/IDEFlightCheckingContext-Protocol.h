//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDeveloperAccount, NSError;
@protocol IDEPortalInfoDelegate, IDEProjectItem;

@protocol IDEFlightCheckingContext <NSObject>
- (void)handleError:(NSError *)arg1;
- (BOOL)ensureValidAccount:(DVTDeveloperAccount *)arg1 error:(id *)arg2;
- (void)performBlockRequiringAccountAndTeamSelection:(void (^)(BOOL))arg1;
- (id)initWithPortalInfoDelegate:(id <IDEPortalInfoDelegate>)arg1 item:(id <IDEProjectItem>)arg2;
@end

