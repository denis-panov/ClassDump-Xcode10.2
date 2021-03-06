//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEEditorDocument.h>

@class IDEActivityLogRecord, IDESchemeActionCodeCoverage, NSURL;

@interface IDECoverageReportDocument : IDEEditorDocument
{
    NSURL *_logURL;
    IDESchemeActionCodeCoverage *_coverageReport;
    IDEActivityLogRecord *_logRecord;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(retain, nonatomic) IDEActivityLogRecord *logRecord; // @synthesize logRecord=_logRecord;
- (void).cxx_destruct;
- (id)displayName;
@property(readonly, nonatomic) IDESchemeActionCodeCoverage *coverageReport;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end

