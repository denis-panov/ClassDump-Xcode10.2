//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/GCDAsyncSocketDelegate-Protocol.h>

@class DTXChannel, _DT_GCDAsyncSocket;
@protocol OS_dispatch_queue;

@interface DTAssetHTTPServer : NSObject <GCDAsyncSocketDelegate>
{
    DTXChannel *_channel;
    _DT_GCDAsyncSocket *_socket;
    NSObject<OS_dispatch_queue> *_socketDelegateQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *socketDelegateQueue; // @synthesize socketDelegateQueue=_socketDelegateQueue;
@property(retain) _DT_GCDAsyncSocket *socket; // @synthesize socket=_socket;
@property(retain) DTXChannel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
@property(readonly) unsigned long long port;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)stopListening;
- (BOOL)startListeningWithError:(id *)arg1;

@end

