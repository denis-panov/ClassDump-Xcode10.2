//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken;

@interface IDECleanBuildFolderActivityReporter : IDEActivityReporter
{
    DVTObservingToken *_isCleaningObserver;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (void)updateActivityReports;
- (id)completionSummaryStringSegments;

@end

