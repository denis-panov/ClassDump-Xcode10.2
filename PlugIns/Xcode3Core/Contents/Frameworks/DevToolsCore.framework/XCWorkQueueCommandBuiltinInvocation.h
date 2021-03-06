//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCWorkQueueCommandInvocation.h>

@class NSArray, NSBlockOperation, NSDictionary, NSString;

@interface XCWorkQueueCommandBuiltinInvocation : XCWorkQueueCommandInvocation
{
    NSArray *_arguments;
    NSDictionary *_environment;
    NSString *_workingDirPath;
    BOOL _mightHaveOutput;
    int _exitCode;
    NSBlockOperation *_operation;
    int _outputFD;
    int _inputFD;
    int _taskOutputFD;
    int _taskInputFD;
}

- (void).cxx_destruct;
- (int)emitMessageWithFormat:(id)arg1;
- (int)emitMessage:(id)arg1;
- (void)handleInputFileDescriptorActivity;
- (void)handleEndOfOutput;
- (void)handleOutputBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)handleOutputFileDescriptorActivity;
- (BOOL)startRunning;
- (int)runTaskWithArguments:(id)arg1 environment:(id)arg2 workingDirectoryPath:(id)arg3 infd:(int)arg4 outerrfd:(int)arg5;
- (void)cancelAndWaitUntilFinished;
- (int)exitCode;
- (BOOL)isCancelled;
- (BOOL)isRunning;
- (int)inputFileDescriptor;
- (int)outputFileDescriptor;
- (id)initWithWorkQueueCommand:(id)arg1 arguments:(id)arg2 environment:(id)arg3 workingDirectoryPath:(id)arg4;

@end

