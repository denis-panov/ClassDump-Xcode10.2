//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSIntegrationAsset.h>

#import <XCSUI/IDETestReport_RemoteAsset-Protocol.h>

@class NSString, NSURL;

@interface XCSIntegrationAsset (IDETestReport_RemoteAsset) <IDETestReport_RemoteAsset>
@property(readonly, nonatomic) unsigned long long ide_testReport_remoteAsset_size;
@property(readonly, copy, nonatomic) NSURL *ide_testReport_remoteAsset_downloadURL;
@property(readonly, copy, nonatomic) NSString *ide_testReport_remoteAsset_fileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

