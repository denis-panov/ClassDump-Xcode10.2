//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, NSMapTable;

@interface SKEActivityReporter : IDEActivityReporter
{
    DVTNotificationToken *_operationDidStartObservingToken;
    NSMapTable *_documentOperationsToObservingTokens;
    NSMapTable *_documentOperationsToActivityReports;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)removeObservingTokensForDocumentOperation:(id)arg1;
- (void)addObservingToken:(id)arg1 forDocumentOperation:(id)arg2;
- (void)endActivityReportForOperation:(id)arg1;
- (void)updateActivityReportForOperation:(id)arg1;
- (void)documentOperationDidStart:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end
