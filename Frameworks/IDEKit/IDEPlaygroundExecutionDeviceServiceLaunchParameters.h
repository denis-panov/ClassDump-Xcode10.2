//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEPlaygroundPreparationParameters, NSString;

@interface IDEPlaygroundExecutionDeviceServiceLaunchParameters : NSObject
{
    IDEPlaygroundPreparationParameters *_preparationParameters;
    NSString *_slaveFilename;
    NSString *_socketPath;
    DVTFilePath *_executableFilePath;
    CDUnknownBlockType _cancellationCallback;
    CDUnknownBlockType _stateChangedCallback;
    CDUnknownBlockType _completion;
}

@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(copy) CDUnknownBlockType cancellationCallback; // @synthesize cancellationCallback=_cancellationCallback;
@property(retain) DVTFilePath *executableFilePath; // @synthesize executableFilePath=_executableFilePath;
@property(retain) NSString *socketPath; // @synthesize socketPath=_socketPath;
@property(retain) NSString *slaveFilename; // @synthesize slaveFilename=_slaveFilename;
@property __weak IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
- (void).cxx_destruct;

@end

