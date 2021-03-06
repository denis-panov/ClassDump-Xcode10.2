//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRMobileAgentStop-Protocol.h>

@class NSMutableArray, XRMobileAgent;

@interface XRMobileAgentDock : NSObject <XRMobileAgentStop>
{
    BOOL _agentExecuted;
    BOOL _abandoned;
    NSMutableArray *_waitingAgents;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t _cond;
    XRMobileAgent *_dockedAgent;
}

@property(retain, nonatomic) XRMobileAgent *dockedAgent; // @synthesize dockedAgent=_dockedAgent;
- (void).cxx_destruct;
- (void)releaseDockedAgent;
- (void)executeDockedAgent;
- (BOOL)waitForAgentToDock;
- (void)receiveMobileAgent:(id)arg1;
- (void)abandon;
- (void)dealloc;
- (id)init;

@end

