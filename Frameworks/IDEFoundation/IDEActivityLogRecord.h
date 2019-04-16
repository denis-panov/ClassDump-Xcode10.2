//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTFilePath, IDEActivityLogObservableRecord, IDEEntityIdentifier, IDETypeIdentifier, NSString, NSURL;
@protocol IDELogStoreManageable;

@interface IDEActivityLogRecord : NSObject
{
    NSString *_auxiliaryLogUniqueIdentifier;
    IDEEntityIdentifier *_entityIdentifier;
    DVTFilePath *_buildMetricsReportFilePath;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)cacheLog:(id)arg1;
+ (void)uncacheLogRecord:(id)arg1;
+ (void)cacheLogRecord:(id)arg1;
+ (id)cachedLogRecordWithURL:(id)arg1;
@property(readonly) DVTFilePath *buildMetricsReportFilePath; // @synthesize buildMetricsReportFilePath=_buildMetricsReportFilePath;
@property(readonly) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(readonly) NSString *auxiliaryLogUniqueIdentifier; // @synthesize auxiliaryLogUniqueIdentifier=_auxiliaryLogUniqueIdentifier;
- (void).cxx_destruct;
- (id)testableSummariesForFilePath:(id)arg1 runDestinationRecord:(id *)arg2 error:(id *)arg3;
@property(readonly) BOOL hasMetricsData;
@property(readonly) NSString *onDiskPath;
@property(readonly) DVTFilePath *coverageArchiveFilePath;
@property(readonly) DVTFilePath *coverageReportFilePath;
@property(readonly) BOOL hasCoverageData;
@property(readonly) BOOL hasAuxiliaryLog;
@property(readonly) DVTFilePath *testableSummariesPlistFilePath;
- (id)initWithEntityIdentifier:(id)arg1;
- (long long)compareUsingTimeStartedRecording:(id)arg1;
- (id)fullLogIfInMemory;
- (id)fullLogStoreManageableWithError:(id *)arg1;
- (id)auxiliaryLogWithError:(id *)arg1;
- (id)fullLogWithError:(id *)arg1;
@property(readonly) IDEActivityLogObservableRecord *auxiliaryObservable;
@property(readonly) IDEActivityLogObservableRecord *primaryObservable;
@property(readonly) BOOL isRecording;
@property(readonly) NSString *signature;
@property(readonly) DVTFileDataType *documentType;
@property(readonly, nonatomic) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(readonly) NSString *title;
@property(readonly) IDETypeIdentifier *domainType;
@property(readonly) NSString *uniqueIdentifier;
@property(readonly) NSURL *logURL;

// Remaining properties
@property(readonly) id <IDELogStoreManageable> logStoreManageable; // @dynamic logStoreManageable;

@end

