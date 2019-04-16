//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GPUToolsServices/DYPShaderDebuggerDataSourceProviderDelegate-Protocol.h>

@class DYTransport, NSOperationQueue, NSString;

@interface DYShaderDebuggerDataSourceProviderDelegate : NSObject <DYPShaderDebuggerDataSourceProviderDelegate>
{
    DYTransport *_transport;
    // Error parsing type: {atomic<unsigned long long>="__a_"AQ}, name: _inflight
    struct dispatch_queue_s *_replyQueue;
    NSOperationQueue *_sendQueue;
}

- (void).cxx_destruct;
- (id)requestShaderDebuggerTraceWithOptions:(id)arg1;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
