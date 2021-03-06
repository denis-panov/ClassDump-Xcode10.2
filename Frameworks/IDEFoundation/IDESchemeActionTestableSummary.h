//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface IDESchemeActionTestableSummary : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_tests;
    BOOL _successfullyBootstrapped;
    BOOL _isUITestBundle;
    BOOL _parallelized;
    NSString *_blueprintProviderRelativePath;
    NSString *_blueprintName;
    NSArray *_diagnosticLogPaths;
    NSString *_diagnosticsDirectory;
    NSDate *_bootstrappedDate;
    long long _testExecutionOrdering;
    NSString *_testKind;
    NSMutableArray *_mutableFailureSummaries;
}

+ (id)sparseTestableSummaries:(id)arg1 testIdentifiers:(id)arg2;
+ (void)_countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaryContainer:(id)arg4;
+ (void)countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaries:(id)arg4;
+ (void)_coalesceTestSummariesInContainers:(id)arg1 intoAggregateContainer:(id)arg2;
+ (id)coalescedTestableSummaryForTestableSummariesForSameTestable:(id)arg1;
+ (BOOL)includeDummyTestSummaryInTestableSummary;
+ (void)initialize;
@property(retain) NSMutableArray *mutableFailureSummaries; // @synthesize mutableFailureSummaries=_mutableFailureSummaries;
@property(copy) NSString *testKind; // @synthesize testKind=_testKind;
@property BOOL parallelized; // @synthesize parallelized=_parallelized;
@property long long testExecutionOrdering; // @synthesize testExecutionOrdering=_testExecutionOrdering;
@property BOOL isUITestBundle; // @synthesize isUITestBundle=_isUITestBundle;
@property(retain) NSDate *bootstrappedDate; // @synthesize bootstrappedDate=_bootstrappedDate;
@property BOOL successfullyBootstrapped; // @synthesize successfullyBootstrapped=_successfullyBootstrapped;
@property(copy) NSString *diagnosticsDirectory; // @synthesize diagnosticsDirectory=_diagnosticsDirectory;
@property(copy) NSArray *diagnosticLogPaths; // @synthesize diagnosticLogPaths=_diagnosticLogPaths;
@property(copy) NSString *blueprintName; // @synthesize blueprintName=_blueprintName;
@property(copy) NSString *blueprintProviderRelativePath; // @synthesize blueprintProviderRelativePath=_blueprintProviderRelativePath;
- (void).cxx_destruct;
- (id)sparseTestableSummaryForTestIdentifiers:(id)arg1;
- (void)enumerateTestsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isSummaryForSameTestableAsSummary:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (void)addFailureSummary:(id)arg1;
- (void)addTestSummary:(id)arg1;
@property(readonly, copy) NSArray *failureSummaries;
- (unsigned long long)status;
- (void)loadDiagnosticsFromDirectory:(id)arg1;
- (id)validDiagnosticTypes;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 blueprintProviderRelativePath:(id)arg2 blueprintName:(id)arg3 diagnosticsDirectory:(id)arg4 testKind:(id)arg5 tests:(id)arg6;
- (id)initWithName:(id)arg1 blueprintProviderRelativePath:(id)arg2 blueprintName:(id)arg3 diagnosticsDirectory:(id)arg4 testKind:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableArray *mutableTests; // @dynamic mutableTests;
@property(readonly) Class superclass;
@property(copy) NSArray *tests; // @dynamic tests;

@end

