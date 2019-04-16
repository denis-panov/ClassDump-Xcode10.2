//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUToolsCore/DYBaseStreamTransport.h>

@class DYSharedMemoryTransport;

@interface DYBaseSocketTransport : DYBaseStreamTransport
{
    struct dispatch_source_s *_readSource;
    struct dispatch_source_s *_writeSource;
    DYSharedMemoryTransport *_smTransport;
    _Bool _writeSourceIsSuspended;
    _Bool _scheduledReadOnWritableSocket;
}

@property(readonly, nonatomic) DYSharedMemoryTransport *smTransport; // @synthesize smTransport=_smTransport;
- (unsigned int)_nextMessageSerial;
- (BOOL)relayMessageOverSharedMemoryTransport:(id)arg1 error:(id *)arg2;
- (void)destroySharedMemoryTransport;
- (void)_destroySharedMemoryTransport;
- (id)createNewSharedMemoryTransportWithURL:(id)arg1;
- (id)createNewSharedMemoryTransport;
- (void)_invalidate;
- (void)setPrioritizeOutgoingMessages:(BOOL)arg1;
- (BOOL)connected;
- (void)scheduleReadOnWritableSocket;
- (void)runWithSocket:(int)arg1;
- (void)_readAndAccumulateLoop;
- (void)closeSocketDescriptor;
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;
- (void)_waitEAGAIN;
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;
- (id)init;

@end
