//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface GPUReplayMessage : NSObject
{
    BOOL _logged;
    NSString *_gpuVendor;
    NSString *_gpuName;
    NSString *_hostXcodeVersion;
    NSString *_deviceOSVersion;
    NSNumber *_success;
    NSString *_error;
    NSNumber *_replayMs;
    NSNumber *_liveCapture;
}

@property(copy) NSNumber *liveCapture; // @synthesize liveCapture=_liveCapture;
@property(copy) NSNumber *replayMs; // @synthesize replayMs=_replayMs;
@property(copy) NSString *error; // @synthesize error=_error;
@property(copy) NSNumber *success; // @synthesize success=_success;
@property(copy) NSString *deviceOSVersion; // @synthesize deviceOSVersion=_deviceOSVersion;
@property(copy) NSString *hostXcodeVersion; // @synthesize hostXcodeVersion=_hostXcodeVersion;
@property(copy) NSString *gpuName; // @synthesize gpuName=_gpuName;
@property(copy) NSString *gpuVendor; // @synthesize gpuVendor=_gpuVendor;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)log;

@end
