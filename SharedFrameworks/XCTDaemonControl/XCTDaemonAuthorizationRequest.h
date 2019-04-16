//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTDaemonRequest-Protocol.h>

@class NSString;
@protocol XCTDebugLogDelegate;

@interface XCTDaemonAuthorizationRequest : NSObject <XCTDaemonRequest, XCTConfigurableDebugLogger>
{
    int _pid;
    id <XCTDebugLogDelegate> _logDelegate;
    CDUnknownBlockType _completion;
}

+ (id)minimumProtocolVersion;
@property(readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) int pid; // @synthesize pid=_pid;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (void)handleConnectionFailure:(id)arg1;
- (void)executeWithDaemonProxy:(id)arg1 protocolVersion:(id)arg2;
- (id)initWithPID:(int)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
