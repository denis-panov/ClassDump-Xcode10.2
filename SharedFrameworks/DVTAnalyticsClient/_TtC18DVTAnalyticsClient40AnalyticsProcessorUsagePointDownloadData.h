//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTAnalyticsClient/DVTAnalyticsData.h>

@class DVTAnalyticsPointDeviceFamilyDistribution, DVTAnalyticsPointOSVersionDistribution, DVTAnalyticsPointTimeDistribution, NSString, _TtC18DVTAnalyticsClient35AnalyticsProcessorUsagePointLogList;

@interface _TtC18DVTAnalyticsClient40AnalyticsProcessorUsagePointDownloadData : DVTAnalyticsData
{
    // Error parsing type: , name: adamId
    // Error parsing type: , name: appVersion
    // Error parsing type: , name: appBuild
    // Error parsing type: , name: bundleId
    // Error parsing type: , name: processorUsagePointIdentifier
    // Error parsing type: , name: osVersionDistribution
    // Error parsing type: , name: processorUsagePointTimeSeries
    // Error parsing type: , name: deviceFamilyDistribution
    // Error parsing type: , name: processorUsageLogData
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC18DVTAnalyticsClient35AnalyticsProcessorUsagePointLogList *processorUsageLogData; // @synthesize processorUsageLogData;
@property(nonatomic, retain) DVTAnalyticsPointDeviceFamilyDistribution *deviceFamilyDistribution; // @synthesize deviceFamilyDistribution;
@property(nonatomic, retain) DVTAnalyticsPointTimeDistribution *processorUsagePointTimeSeries; // @synthesize processorUsagePointTimeSeries;
@property(nonatomic, retain) DVTAnalyticsPointOSVersionDistribution *osVersionDistribution; // @synthesize osVersionDistribution;
@property(nonatomic, copy) NSString *processorUsagePointIdentifier; // @synthesize processorUsagePointIdentifier;
@property(nonatomic, copy) NSString *bundleId; // @synthesize bundleId;
@property(nonatomic, copy) NSString *appBuild; // @synthesize appBuild;
@property(nonatomic, copy) NSString *appVersion; // @synthesize appVersion;
@property(nonatomic, copy) NSString *adamId; // @synthesize adamId;

@end

