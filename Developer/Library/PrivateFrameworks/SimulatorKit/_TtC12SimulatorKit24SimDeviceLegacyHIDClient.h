//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface _TtC12SimulatorKit24SimDeviceLegacyHIDClient : NSObject
{
    // Error parsing type: , name: _io
    // Error parsing type: , name: _performTargetRemapping
    // Error parsing type: , name: _ioPort
    // Error parsing type: , name: _descriptor
    // Error parsing type: , name: _hidCallbackUUID
    // Error parsing type: , name: _rwLock
    // Error parsing type: , name: _isWatch
    // Error parsing type: , name: _isTV
    // Error parsing type: , name: _isHIDArbitraryMessageAvailable
}

- (void).cxx_destruct;
- (id)init;
- (void)sendWithMessage:(struct IndigoHIDMessageStruct *)arg1 freeWhenDone:(BOOL)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetHIDSession;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;

@end

