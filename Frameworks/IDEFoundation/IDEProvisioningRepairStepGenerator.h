//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEProvisioningRepairStepGenerator : NSObject
{
    BOOL _runningInIDE;
}

+ (id)generatorForProvisioningStyle:(long long)arg1;
+ (id)generatorForProvisioningStyle:(long long)arg1 runningInIDE:(BOOL)arg2;
@property BOOL runningInIDE; // @synthesize runningInIDE=_runningInIDE;
- (id)stepsWithSession:(id)arg1 context:(id)arg2 userAction:(id *)arg3 error:(id *)arg4;
- (id)initForProvisioningStyle:(long long)arg1;

@end

