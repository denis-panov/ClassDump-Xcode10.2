//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class NSError;

@protocol DVTPackageInstallerHelperDelegate <NSObject>
- (void)installationFailed:(NSError *)arg1;
- (void)installationSucceeded;
- (void)installationProgressChanged:(long long)arg1;
- (void)installationStarted;
@end

