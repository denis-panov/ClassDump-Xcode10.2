//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTAnalytics/DVTAnalyticsSnapshotFileSystemSerialization-Protocol.h>

@class NSString;

@protocol DVTAnalyticsLogProtocol <DVTAnalyticsSnapshotFileSystemSerialization>
+ (NSString *)fileNameExtension;
@property(readonly) BOOL isFullySymbolicated;
@property(readonly) BOOL isLocallySymbolicatedCachePath;
@property(readonly) NSString *longUserDescription;
@property(readonly) NSString *blameThreadDescription;
@property(readonly) NSString *hardwareModelDescription;
@property(readonly) NSString *identifier;
@property(readonly) NSString *osBuild;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *version;
@property(readonly) NSString *build;
@property(readonly) NSString *appName;
- (void)symbolicateWithCallback:(void (^)(id <DVTAnalyticsLogProtocol>, NSError *))arg1;
@end

