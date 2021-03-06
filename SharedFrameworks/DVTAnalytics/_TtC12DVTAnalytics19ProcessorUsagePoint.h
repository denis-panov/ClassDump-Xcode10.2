//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTAnalytics/DVTAnalyticsPointAbstractClass.h>

@class DVTAnalyticsPointDistributionInfo, DVTFilePath, NSString, _TtC12DVTAnalytics23ProcessorUsagePointInfo;
@protocol DVTAnalyticsPointIdentifierProtocol, DVTAnalyticsPointUserDataProtocol;

@interface _TtC12DVTAnalytics19ProcessorUsagePoint : DVTAnalyticsPointAbstractClass
{
    // Error parsing type: , name: pointInfo
    // Error parsing type: , name: processorUsagePointDistributionInfo
    // Error parsing type: , name: path
    // Error parsing type: , name: filename.storage
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *inspectableIconImageName;
@property(nonatomic, readonly) BOOL isSystemTerminationEvent;
@property(nonatomic, readonly) NSString *inspectableAnalyticsLogReportTypeUserDescription;
@property(nonatomic, readonly) NSString *inspectableAnalyticsLogDetailsSectionTitle;
@property(nonatomic, readonly) NSString *inspectableTypeUserDescription;
@property(nonatomic, readonly) DVTFilePath *cachePath;
@property(nonatomic, readonly) long long sourceFileLine;
@property(nonatomic, readonly) NSString *sourceFileName;
@property(nonatomic, readonly) BOOL isTopPoint;
@property(nonatomic, readonly) DVTAnalyticsPointDistributionInfo *distributionInfo;
@property(nonatomic, readonly) long long uniqueDeviceCount;
@property(nonatomic, readonly) id <DVTAnalyticsPointUserDataProtocol> userData;
@property(nonatomic, readonly) id <DVTAnalyticsPointIdentifierProtocol> analyticsPointIdentifier;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, retain) _TtC12DVTAnalytics23ProcessorUsagePointInfo *pointInfo; // @synthesize pointInfo;

@end

