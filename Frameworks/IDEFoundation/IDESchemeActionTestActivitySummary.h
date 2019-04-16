//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSString, NSUUID, XCElementSnapshot, XCSynthesizedEventRecord;

@interface IDESchemeActionTestActivitySummary : NSObject
{
    NSString *_title;
    NSString *_activityType;
    NSString *_attachmentsDirectory;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    NSArray *_attachments;
    NSMutableArray *_subActivities;
}

+ (id)_legacyFileNameForAttachmentWithName:(id)arg1 activityUUID:(id)arg2;
+ (id)_convertedAttachmentsFromActivityRecord:(id)arg1 attachmentsDirectory:(id)arg2 outTitle:(id *)arg3;
+ (void)loadLegacyAttachmentMetadataFromActivityRecord:(id)arg1 outTitle:(id *)arg2;
+ (BOOL)_attachments:(id)arg1 containAttachmentWithName:(id)arg2;
+ (id)summariesFromSummaries:(id)arg1 withAttachmentsExtractedToDirectory:(id)arg2;
@property(readonly, copy) NSMutableArray *subActivities; // @synthesize subActivities=_subActivities;
@property(copy) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy) NSDate *finish; // @synthesize finish=_finish;
@property(copy) NSDate *start; // @synthesize start=_start;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *attachmentsDirectory; // @synthesize attachmentsDirectory=_attachmentsDirectory;
@property(readonly, copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)attachmentWithName:(id)arg1;
- (BOOL)hasAttachmentWithName:(id)arg1;
- (void)pruneAttachmentsWithLifetimes:(id)arg1 deletedAutomationScreenshots:(char *)arg2 deletedUserAttachments:(char *)arg3;
@property(readonly, copy) NSData *memoryGraphData;
@property(readonly, copy) NSString *memoryGraphFileName;
@property(readonly, copy) NSString *memoryGraphFilePath;
@property(readonly, copy) NSData *diagnosticReportData;
@property(readonly, copy) NSString *diagnosticReportFileName;
@property(readonly, copy) NSString *diagnosticReportFilePath;
@property(readonly, copy) NSString *screenshotFileName;
@property(readonly, copy) NSData *screenshotData;
@property(readonly, copy) NSString *snapshotFileName;
@property(readonly, copy) XCElementSnapshot *snapshot;
@property(readonly, copy) XCSynthesizedEventRecord *synthesizedEvent;
- (id)_fileNameForAttachmentName:(id)arg1;
- (id)_unarchiveIfPresentAttachmentWithName:(id)arg1 expectedClassName:(id)arg2;
- (id)_dataIfPresentForAttachmentName:(id)arg1;
- (id)_unarchiveAttachment:(id)arg1;
- (BOOL)matchesTestActivitySummary:(id)arg1;
@property(readonly, copy) NSArray *subActivitiesSnapshot;
- (void)addSubActivity:(id)arg1;
- (void)updateFromActivityRecord:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)loadDiagnosticsFromDirectory:(id)arg1;
- (void)loadAttachmentsFromDirectory:(id)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 activityType:(id)arg2 uuid:(id)arg3 start:(id)arg4 finish:(id)arg5 subactivities:(id)arg6 attachments:(id)arg7;
- (id)initWithActivityRecord:(id)arg1 attachmentsDirectory:(id)arg2;

@end
