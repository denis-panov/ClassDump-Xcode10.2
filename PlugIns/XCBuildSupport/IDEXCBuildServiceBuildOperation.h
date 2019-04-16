//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEBuildOperation.h>

#import <XCBuildSupport/_TtP7XCBuild25XCBBuildOperationDelegate_-Protocol.h>

@class DVTPerformanceMetric, IDEActivityLogSectionRecorder, IDEBuildOperationConfiguration, IDEBuildStatisticsSection, IDEProvisioningManager, IDETypeIdentifier, NSDictionary, NSMutableDictionary, NSObject, NSString, _TtC17IDEXCBuildSupport24IDEXCBuildServiceSession, _TtC7XCBuild17XCBBuildOperation;
@protocol OS_dispatch_semaphore;

@interface IDEXCBuildServiceBuildOperation : IDEBuildOperation <_TtP7XCBuild25XCBBuildOperationDelegate_>
{
    IDEBuildOperationConfiguration *_config;
    NSDictionary *_guidsToBlueprints;
    NSDictionary *_guidsToTypeIdentifiers;
    IDEProvisioningManager *_provisioningManager;
    IDETypeIdentifier *_commandTypeIdentifier;
    _TtC7XCBuild17XCBBuildOperation *_buildOp;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    IDEActivityLogSectionRecorder *_mainLogRecorder;
    IDEBuildStatisticsSection *_mainBuildStatisticsSection;
    NSString *_activePlanningOperationID;
    IDEActivityLogSectionRecorder *_preparationLogRecorder;
    BOOL _preparationIsComplete;
    NSString *_latestTargetDisplayName;
    BOOL _isRunningInConsole;
    BOOL _showCommandsUnderTargets;
    DVTPerformanceMetric *_planOnlyMetric;
    _TtC17IDEXCBuildSupport24IDEXCBuildServiceSession *_xcbuildServiceSession;
    NSMutableDictionary *_activeTargets;
    NSMutableDictionary *_activeTasks;
    NSDictionary *_copiedPathMap;
    NSDictionary *_generatedFilesPathMap;
    NSMutableDictionary *_messageCategoryInfoCache;
}

- (void).cxx_destruct;
- (BOOL)hasHarvestedInfo;
- (void)addOperationsToQueue:(id)arg1;
- (void)buildOperationDidEnd:(id)arg1 metricsData:(id)arg2;
- (void)_endBuildOperation;
- (void)buildOperationPreparationComplete:(id)arg1;
- (void)_completePreparation;
- (void)buildOperation:(id)arg1 didUpdateProgressMessage:(id)arg2 forTargetName:(id)arg3 percentComplete:(double)arg4 showInLog:(BOOL)arg5;
- (void)buildOperation:(id)arg1 didUpdateProgressMessage:(id)arg2 percentComplete:(double)arg3 showInLog:(BOOL)arg4;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 info:(id)arg4;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2;
- (void)buildOperation:(id)arg1 didEndTarget:(id)arg2;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 forTarget:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2 forTarget:(id)arg3;
- (void)buildOperation:(id)arg1 didEndTask:(id)arg2 result:(long long)arg3 signalled:(BOOL)arg4;
- (void)buildOperation:(id)arg1 didEndTask:(id)arg2 result:(long long)arg3 signalled:(BOOL)arg4 metrics:(id)arg5;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 forTask:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2 forTask:(id)arg3;
- (void)buildOperation:(id)arg1 didStartTask:(id)arg2 forTarget:(id)arg3 subtaskOf:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 taskWasUpToDate:(id)arg2 forTarget:(id)arg3 subtaskOf:(id)arg4;
- (id)_logRecorderForTarget:(id)arg1;
- (void)buildOperation:(id)arg1 didStartTarget:(id)arg2 guid:(id)arg3 info:(id)arg4;
- (void)buildOperation:(id)arg1 targetWasUpToDate:(id)arg2;
- (void)buildOperationDidStart:(id)arg1;
- (void)buildOperation:(id)arg1 didReportCopiedPathMap:(id)arg2 generatedFilesPathMap:(id)arg3;
- (void)conservativeSupersetOfAssetTagCombinations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateEmbeddedBinaryWithInputPath:(id)arg1 certSHA1Hash:(id)arg2 parentInfoPlistPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateIntentDefinitionFilesWithInputPath:(id)arg1 outputDirPath:(id)arg2 languageToGenerate:(id)arg3 classPrefix:(id)arg4 swiftVersion:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)intentDefinitionGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 languageToGenerate:(id)arg3 classPrefix:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)coreMLModelGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateCoreDataModelFilesWithInputPath:(id)arg1 outputDirPath:(id)arg2 deploymentTargets:(id)arg3 swiftVersion:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)coreDataModelGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 swiftVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)provisioningTaskInputsWithTargetGUID:(id)arg1 provisioningSourceData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildOperation:(id)arg1 didFinishPlanningOperation:(id)arg2;
- (void)buildOperation:(id)arg1 willStartPlanningOperation:(id)arg2;
- (void)cancel;
- (void)startBuild;
- (BOOL)shouldCreateModuleBuildSessionFile;
- (void)_withGlobalLogRecorder:(CDUnknownBlockType)arg1;
- (id)_getOrCreatePreparationLogRecorder;
- (id)initWithConfiguration:(id)arg1;

@end

