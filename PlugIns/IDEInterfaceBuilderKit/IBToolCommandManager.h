//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IBToolCommandManager : NSObject
{
}

+ (id)invokeSynchronouslyWithArguments:(id)arg1 error:(id *)arg2;
+ (void)invokeWithArguments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)prepareTaskForInvokingArguments:(id)arg1 error:(id *)arg2;
+ (id)ibtoolPath;
+ (id)thottledQueue;

@end
