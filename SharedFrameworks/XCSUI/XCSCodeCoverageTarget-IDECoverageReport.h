//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSCore/XCSCodeCoverageTarget.h>

#import <XCSUI/IDECoverage_Target-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface XCSCodeCoverageTarget (IDECoverageReport) <IDECoverage_Target>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, nonatomic) unsigned long long ide_coverage_filesCount;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_files;
- (void)setSortedFiles:(id)arg1;
- (id)sortedFiles;
- (id)ide_coverage_identifier;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

