//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class GPUReportEditor, GPUReportTotalItem, NSMutableArray;

@protocol GPUProgramPerformanceReportProvider
- (NSMutableArray *)generateProgramPerformanceTree;
- (GPUReportTotalItem *)programPerformanceTotalItem;
- (id)initWithReportEditor:(GPUReportEditor *)arg1;
@end

