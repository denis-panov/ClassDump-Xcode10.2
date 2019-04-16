//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/NSObject-Protocol.h>

@class IDEActivityLogSection, IDEActivityLogSectionRecorder, NSArray, NSIndexSet, NSString, PBXTargetBuildContext, XCBuildCommandResultsPostprocessor, XCMacroExpansionScope, XCWorkQueueCommandInvocation, XCWorkQueueCommandInvocationParameters;
@protocol DVTMacroExpansion;

@protocol XCWorkQueueCommands <NSObject>
@property(readonly) PBXTargetBuildContext *buildContext;
@property(retain) XCMacroExpansionScope *macroExpansionScope;
- (NSString *)messageFormatForFailingCommandWithNoErrors;
- (void (^)(void))processDependencyInfoFileIfNecessaryWithCommandInvocationSucceeded:(BOOL)arg1;
- (XCBuildCommandResultsPostprocessor *)instantiatedCommandResultsPostprocessor;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(IDEActivityLogSectionRecorder *)arg1;
- (NSString<DVTMacroExpansion> *)progressDescription;
- (NSString<DVTMacroExpansion> *)executionDescription;
- (NSString *)descriptionForWorkQueueLog;
- (NSArray *)subprocessCommandLineForProcessing;
- (void)commandInvocationDidEnd:(XCWorkQueueCommandInvocation *)arg1 successfully:(BOOL)arg2;
- (void)commandInvocationWillStart:(XCWorkQueueCommandInvocation *)arg1;
- (XCWorkQueueCommandInvocation *)createStartedCommandInvocationWithParameters:(XCWorkQueueCommandInvocationParameters *)arg1;
- (IDEActivityLogSection *)activityLogSectionForCachedOutputs;
- (void)prepareForRunning;
- (NSString *)commandTypeGroupingString;
- (NSArray *)ruleInfo;
- (unsigned long long)phaseNumber;
- (unsigned long long)commandNumber;
- (BOOL)canRunInParallelWithOtherCommands;
- (BOOL)shouldUniqueOnOutputFiles;

@optional
- (NSIndexSet *)successExitCodes;
@end
