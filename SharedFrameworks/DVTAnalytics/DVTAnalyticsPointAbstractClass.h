//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTAnalyticsLogProvider, DVTAnalyticsPointDistributionInfo, DVTFilePath, NSString;
@protocol DVTAnalyticsPointIdentifierProtocol, DVTAnalyticsPointUserDataProtocol;

@interface DVTAnalyticsPointAbstractClass : NSObject
{
    BOOL _placeholder;
    DVTAnalyticsLogProvider *_analyticsLogProvider;
    NSString *_appExtensionPointIdentifier;
}

@property(copy) NSString *appExtensionPointIdentifier; // @synthesize appExtensionPointIdentifier=_appExtensionPointIdentifier;
@property BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(copy) DVTAnalyticsLogProvider *analyticsLogProvider; // @synthesize analyticsLogProvider=_analyticsLogProvider;
- (void).cxx_destruct;

// Remaining properties
@property(readonly) id <DVTAnalyticsPointIdentifierProtocol> analyticsPointIdentifier; // @dynamic analyticsPointIdentifier;
@property(readonly) DVTFilePath *cachePath; // @dynamic cachePath;
@property(readonly) DVTAnalyticsPointDistributionInfo *distributionInfo; // @dynamic distributionInfo;
@property(readonly) NSString *inspectableAnalyticsLogDetailsSectionTitle; // @dynamic inspectableAnalyticsLogDetailsSectionTitle;
@property(readonly) NSString *inspectableAnalyticsLogReportTypeUserDescription; // @dynamic inspectableAnalyticsLogReportTypeUserDescription;
@property(readonly) NSString *inspectableIconImageName; // @dynamic inspectableIconImageName;
@property(readonly) NSString *inspectableTypeUserDescription; // @dynamic inspectableTypeUserDescription;
@property(readonly) BOOL isSystemTerminationEvent; // @dynamic isSystemTerminationEvent;
@property(readonly) BOOL isTopPoint; // @dynamic isTopPoint;
@property(readonly) long long sourceFileLine; // @dynamic sourceFileLine;
@property(readonly) NSString *sourceFileName; // @dynamic sourceFileName;
@property(readonly) long long uniqueDeviceCount; // @dynamic uniqueDeviceCount;
@property(readonly) id <DVTAnalyticsPointUserDataProtocol> userData; // @dynamic userData;

@end

