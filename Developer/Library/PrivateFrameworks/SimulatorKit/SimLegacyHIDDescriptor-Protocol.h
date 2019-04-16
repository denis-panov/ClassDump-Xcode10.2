//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SimulatorKit/ROCKImpersonateable-Protocol.h>
#import <SimulatorKit/SimDeviceIOPortDescriptorInterface-Protocol.h>

@class NSUUID;
@protocol OS_xpc_object;

@protocol SimLegacyHIDDescriptor <ROCKImpersonateable, SimDeviceIOPortDescriptorInterface>
- (void)unregisterLegacyHIDEventPortCallbackWithUUID:(NSUUID *)arg1;
- (void)registerCallbackWithUUID:(NSUUID *)arg1 legacyHIDEventPortCallback:(void (^)(id <OS_xpc_object>))arg2;
@property(nonatomic, readonly) id <OS_xpc_object> legacyHIDEventPort;
@end

