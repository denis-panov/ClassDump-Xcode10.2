//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDESourceKitGeniusCallersCalleesInfo : NSObject
{
    NSArray *_callers;
    NSArray *_testCallers;
    NSArray *_callees;
}

- (void).cxx_destruct;
@property(readonly) NSArray *callees;
@property(readonly) NSArray *testCallers;
@property(readonly) NSArray *callers;
- (id)initWithCallers:(id)arg1 testCallers:(id)arg2 callees:(id)arg3;

@end

