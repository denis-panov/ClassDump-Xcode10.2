//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDESchemeActionCodeCoverage, NSDictionary;

@interface IDECoverageReportAggregator : NSObject
{
    IDESchemeActionCodeCoverage *_aggregatedCoverageReport;
    NSDictionary *_aggregatedLines;
}

@property(retain, nonatomic) NSDictionary *aggregatedLines; // @synthesize aggregatedLines=_aggregatedLines;
@property(retain, nonatomic) IDESchemeActionCodeCoverage *aggregatedCoverageReport; // @synthesize aggregatedCoverageReport=_aggregatedCoverageReport;
- (void).cxx_destruct;
- (void)addCoverageReport:(id)arg1 lines:(id)arg2;
- (void)aggregateLines:(id)arg1;
- (id)init;

@end

