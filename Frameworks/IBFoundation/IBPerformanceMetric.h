//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTPerformanceMetric.h>

@interface IBPerformanceMetric : DVTPerformanceMetric
{
    double _ibStartTime;
    double _ibEndTime;
    unsigned long long _signpostID;
}

- (double)totalDuration;
- (double)durationSinceStart;
- (void)setEndTime;
- (void)setStartTime;
@property(readonly) unsigned long long signpostID;

@end
