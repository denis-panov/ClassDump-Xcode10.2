//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class DVTFuture, IDESchemeActionRecord, IDETestMetadataRecord, NSSet, XCTTestIdentifier;

@protocol IDETestMetadataDatabase
- (NSArray * (^)(NSSet *, NSSet *))classBasedLPTPrioritizerWithFallbackExecutionOrdering:(long long)arg1;
- (void)updateWithSchemeActionRecord:(IDESchemeActionRecord *)arg1;
- (DVTFuture *)save;
- (DVTFuture *)metadataRecordsForIdentifier:(XCTTestIdentifier *)arg1;
- (void)purgeMetadataRecordsPassingTest:(BOOL (^)(IDETestMetadataRecord *))arg1;
- (void)updateFields:(NSSet *)arg1 forMetadataRecord:(IDETestMetadataRecord *)arg2;
- (void)updateMetadataRecord:(IDETestMetadataRecord *)arg1;
@end
