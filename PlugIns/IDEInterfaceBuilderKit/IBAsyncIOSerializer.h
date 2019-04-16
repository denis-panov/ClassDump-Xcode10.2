//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_semaphore;

@interface IBAsyncIOSerializer : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _success;
    NSError *_error;
    CDUnknownBlockType _completionCallback;
}

@property(readonly) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (id)init;

@end

