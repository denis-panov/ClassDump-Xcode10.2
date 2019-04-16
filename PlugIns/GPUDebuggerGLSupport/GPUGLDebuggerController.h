//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUDebuggerController.h>

#import <GPUDebuggerGLSupport/DYGLExpertDelegate-Protocol.h>

@class DVTObservingToken, DYAnalyzerArchiveVisitor, DYCaptureArchive, DYGLExpert, DYGLExpertCase, NSArray, NSMutableArray;
@protocol DYPShaderSourceDocument;

@interface GPUGLDebuggerController : GPUDebuggerController <DYGLExpertDelegate>
{
    DYGLExpertCase *_expertCase;
    DVTObservingToken *_investigatorReadyObserver;
    DVTObservingToken *_overviewSamplesObserver;
    DVTObservingToken *_inferiorSessionUpdatedResourcesDictObserver;
    DYAnalyzerArchiveVisitor *_analyzerVisitor;
    DYCaptureArchive *_modifiedCaptureArchive;
    id <DYPShaderSourceDocument> _changedShaderSourceDocument;
    NSMutableArray *_overviewSampleArray;
    unsigned int _passCompletedExperiments;
    NSArray *_experimentsArray;
    unsigned int _totalPhaseWeight;
    unsigned int _currentPhaseWeight;
    unsigned int _currentWeightCounter;
    unsigned int _numberOfPhasesInBlock;
    unsigned int _currentPhaseInBlock;
    unsigned int _numberOfExperimentsInBlock;
    unsigned int _currentExperimentInBlock;
    _Bool _sentExperimentBackgroundImage;
    DYGLExpert *_expert;
}

+ (void)initialize;
+ (id)logAspect;
+ (id)assetBundle;
@property(readonly) DYGLExpert *expert; // @synthesize expert=_expert;
- (void).cxx_destruct;
- (id)gpuVendorForAPIItem:(id)arg1;
- (id)gpuNameForAPIItem:(id)arg1;
- (void)handleDocumentChanged:(id)arg1 shaderItem:(id)arg2;
- (void)updateShaders;
- (BOOL)wantsDerivedCounters;
- (id)invalidOverrides;
- (id)createProgramPerformanceReportProvider:(id)arg1;
- (id)createInvestigatorReportProvider:(id)arg1;
- (void)resetResourceManagerWithResourceStreamer:(id)arg1;
- (BOOL)isDisassemblerAvailable;
- (id)runShaderProfiler:(unsigned long long)arg1;
- (void)_checkForDeviceDifferences;
- (void)traceSessionEstablishedWithNewArchive:(BOOL)arg1;
- (void)reportFatalError:(id)arg1;
- (void)playWithExperiments:(id)arg1;
- (void)endPhase:(id)arg1;
- (void)beginPhase:(id)arg1;
- (void)endPhaseBlock;
- (void)beginPhaseBlockWithNumPhases:(unsigned int)arg1 andTotalWeight:(unsigned int)arg2;
- (void)_endExperiment;
- (void)_beginExperiment;
- (void)updateProgress;
- (void)_beginAnalysis;
- (void)cancelAnalysis;
- (void)beginAnalysis;
- (id)modifiedCaptureArchive;
- (id)_modifiedOrOriginalArchivePath;
- (id)_modifiedOrOriginalArchivePath:(id)arg1;
- (void)_runInvestigator;
- (void)_runExperiment:(id)arg1;
- (void)_streamArchiveWithPath:(id)arg1 notifyOnQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_experimentPlaybackEnded;
- (void)_clearInvestigatorRunningBackgroundImage;
- (void)_sendInvestigatorRunningBackgroundImage;
- (BOOL)handleCaptureSessionFinalization:(id)arg1;
- (BOOL)analyzeStoredCaptureArchive;
- (void)setupCaptureSessionInfoWithArchive:(id)arg1;
- (void)setupCaptureSession:(id)arg1;
- (void)handleAppSessionTransportMessage:(id)arg1;
- (void)resetDebuggerTraceSession;
- (void)_unarchiveReports;
- (id)unarchiveDictionaryForKey:(id)arg1;
- (void)handleUpdatedDictionary:(id)arg1 forKey:(id)arg2;
- (void)setupGuestAppSession:(id)arg1;
- (id)newGuestAppSessionWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3 error:(id *)arg4;
- (void)createModelFactory;
- (BOOL)_isHigginsEnabled;
- (BOOL)_configureInvestigatorWithCaseConfigData:(id)arg1;
- (void)createReportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (BOOL)supportsInvestigator;

@end

