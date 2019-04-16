//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceEditor/IDEDiagnosticController.h>

@class DVTNotificationToken, IDEDiagnosticGeneratorOperation, NSMutableArray;

@interface IDEClangDiagnosticController : IDEDiagnosticController
{
    NSMutableArray *_diagnosticItems;
    IDEDiagnosticGeneratorOperation *_diagnosticGeneratorOperation;
    long long _currentGeneratorOperationGeneration;
    DVTNotificationToken *_indexDidChangeStateNotificationToken;
}

+ (id)_diagnosticsGeneratorQueue;
+ (void)initialize;
- (void).cxx_destruct;
- (void)diagnose;
- (void)_endObservingIndexDidChangeStateNotification;
- (void)_startObservingIndexDidChangeStateNotificationWithIndex:(id)arg1;
- (void)_generateDiagnosticsForDocumentLocation:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelDiagnosticsGeneration;
- (void)scheduleDiagnosticsGeneration;
- (void)scheduleDiagnosticsGenerationWithDelay:(double)arg1;
- (void)primitiveInvalidate;
- (id)initWithDataSource:(id)arg1;

@end
