//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class IDETestReportViewController, NSButton;
@protocol IDETestReport_Test, IDETestReport_TestRun;

@interface _IDETestReportsPerfMetricTableCellView : NSTableCellView
{
    NSButton *_button;
    id <IDETestReport_TestRun> _testRun;
    id <IDETestReport_Test> _test;
    IDETestReportViewController *_reportViewController;
}

@property __weak IDETestReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(retain) id <IDETestReport_Test> test; // @synthesize test=_test;
@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;
@property(retain) NSButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)showPerfPopover:(id)arg1;

@end

