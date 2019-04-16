//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsUtilities/XRMobileAgent.h>

#import <DVTInstrumentsUtilities/XRMobileAgentVisitor-Protocol.h>

@class NSDictionary, NSString;
@protocol XRMobileAgentOwner;

@interface XRCourierAgent : XRMobileAgent <XRMobileAgentVisitor>
{
    XRMobileAgent<XRMobileAgentOwner> *_roomOwner;
    NSString *_message;
    NSDictionary *_details;
    NSDictionary *_reply;
}

+ (id)sendCourierToVisitWaitingRoom:(id)arg1 message:(id)arg2 details:(id)arg3;
+ (id)sendCourierToVisitWaitingRoom:(id)arg1 message:(id)arg2 details:(id)arg3 replyStop:(id)arg4 replyTicket:(id)arg5;
@property(retain, nonatomic) NSDictionary *reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) XRMobileAgent<XRMobileAgentOwner> *roomOwner; // @synthesize roomOwner=_roomOwner;
- (void).cxx_destruct;
- (void)executeStopOnItinerary:(id)arg1;
- (id)init;
- (void)sendToWaitingRoom:(id)arg1 replyStop:(id)arg2 replyTicket:(id)arg3;
- (id)initWithMessage:(id)arg1 details:(id)arg2;

@end

