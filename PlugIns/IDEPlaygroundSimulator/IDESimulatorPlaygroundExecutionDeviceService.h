//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEPlaygroundExecutionDeviceService.h>

@interface IDESimulatorPlaygroundExecutionDeviceService : IDEPlaygroundExecutionDeviceService
{
}

+ (id)_disabledSimulatorJobs;
+ (BOOL)_shouldDisableUnnecessarySimulatorJobs;
+ (BOOL)_shouldDisableSimulatorDataMigration;
+ (BOOL)bootDevice:(id)arg1 error:(out id *)arg2;
+ (id)capability;
+ (id)simulatorPlaygroundExecutionDeviceServiceLogAspect;
- (void)_launchAppAtURL:(id)arg1 withDevice:(id)arg2 launchOptions:(id)arg3 cancellationCallback:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_launchAppInFullSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 slaveFilename:(id)arg3 replMode:(BOOL)arg4 cancellationCallback:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (int)_launchAppInSimpleSimulatorModeWithExecutablePath:(id)arg1 environment:(id)arg2 slaveFilename:(id)arg3 replMode:(BOOL)arg4 error:(id *)arg5;
- (id)_sandboxProfileDataWithContainerPath:(id)arg1 socketPath:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (void)launchWithPendingParameters;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

