//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTMetricsReport.h>

@interface IDEWorkspaceMetricsReport : DVTMetricsReport
{
    long long _reportingStage;
    double _sessionDuration;
    long long _projectCount;
}

+ (id)keyPathsForReporting;
+ (id)logAspect;
@property long long projectCount; // @synthesize projectCount=_projectCount;
@property double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property long long reportingStage; // @synthesize reportingStage=_reportingStage;

@end

