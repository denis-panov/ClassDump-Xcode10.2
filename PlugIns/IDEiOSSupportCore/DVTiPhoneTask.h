//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTTask.h>

@class DVTiOSDevice, NSArray, NSString;

@interface DVTiPhoneTask : DVTTask
{
    NSArray *_originalArguments;
    NSString *_originalLaunchPath;
    DVTiOSDevice *_device;
}

@property(retain) DVTiOSDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (BOOL)launchRunningTerminationHandlerOnQueue:(id)arg1 error:(id *)arg2 terminationHandler:(CDUnknownBlockType)arg3;
- (id)description;

@end

