//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceControlRemoteRepository, NSDictionary, NSString;

@protocol DVTSourceControlFingerprintManager <NSObject>
- (NSString *)existingFingerprintForRepository:(DVTSourceControlRemoteRepository *)arg1;
- (void)addKnownHost:(NSString *)arg1 fingerprint:(NSString *)arg2;
- (void)loadKnownHostsFromDictionary:(NSDictionary *)arg1;
- (NSString *)existingFingerprintForHost:(NSString *)arg1;
@end

