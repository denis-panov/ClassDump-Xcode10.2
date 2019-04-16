//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFilePath, NSDate, NSString;

@interface IDEProcessedFileAttributes : NSObject
{
    long long _command;
    DVTFilePath *_inputFilePath;
    DVTFilePath *_outputFilePath;
    NSString *_architecture;
    NSString *_configuration;
    NSString *_projectName;
    NSString *_targetName;
    NSDate *_timestamp;
}

@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly) NSString *projectName; // @synthesize projectName=_projectName;
@property(readonly) NSString *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSString *architecture; // @synthesize architecture=_architecture;
@property(readonly) DVTFilePath *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(readonly) DVTFilePath *inputFilePath; // @synthesize inputFilePath=_inputFilePath;
@property(readonly) long long command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)headerCommentRepresentation;
- (id)_dateFormatter;
- (id)initWithPreprocessedFilePath:(id)arg1;
- (id)initWithBuildOperationCommand:(long long)arg1 inputFilePath:(id)arg2 outputFilePath:(id)arg3 architecture:(id)arg4 configuration:(id)arg5 projectName:(id)arg6 targetName:(id)arg7 timestamp:(id)arg8;

@end

