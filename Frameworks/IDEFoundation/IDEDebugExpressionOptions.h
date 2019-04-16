//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IDEDebugExpressionOptions : NSObject
{
    BOOL _unwindOnError;
    BOOL _autoHandleExceptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _timeoutInMicroSeconds;
    long long _language;
    NSString *_dataValueName;
}

@property(copy) NSString *dataValueName; // @synthesize dataValueName=_dataValueName;
@property long long language; // @synthesize language=_language;
@property BOOL autoHandleExceptions; // @synthesize autoHandleExceptions=_autoHandleExceptions;
@property BOOL unwindOnError; // @synthesize unwindOnError=_unwindOnError;
@property unsigned long long timeoutInMicroSeconds; // @synthesize timeoutInMicroSeconds=_timeoutInMicroSeconds;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (id)initWithTimeout:(unsigned long long)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (id)init;

@end

