//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface _TtC12SimulatorKit26SimDisplayScreenshotWriter : NSObject
{
    // Error parsing type: , name: fileType
    // Error parsing type: , name: consumerUUID
    // Error parsing type: , name: consumerIdentifier
    // Error parsing type: , name: _io
    // Error parsing type: , name: _port
    // Error parsing type: , name: _queue
    // Error parsing type: , name: _framebufferSurface
    // Error parsing type: , name: _maskedFramebufferSurface
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)writeScreenshotWithDispatchIO:(id)arg1 error:(id *)arg2;
- (BOOL)writeScreenshotWithDispatchIO:(id)arg1 maskPolicy:(long long)arg2 error:(id *)arg3;
- (id)initWithIo:(id)arg1 port:(id)arg2 fileType:(long long)arg3 error:(id *)arg4;

@end
