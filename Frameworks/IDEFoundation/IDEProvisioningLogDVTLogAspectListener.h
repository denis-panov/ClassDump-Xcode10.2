//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTLogAspect;

@interface IDEProvisioningLogDVTLogAspectListener : NSObject
{
    DVTLogAspect *_logAspect;
    unsigned long long _logLevelThreshold;
    CDUnknownBlockType _handler;
    id _logHandlerToken;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLogAspect:(id)arg1 logLevelThreshold:(unsigned long long)arg2 logHandler:(CDUnknownBlockType)arg3;

@end

