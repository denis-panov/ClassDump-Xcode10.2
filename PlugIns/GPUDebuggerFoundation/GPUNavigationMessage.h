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
@interface GPUNavigationMessage : NSObject
{
    BOOL _logged;
    NSNumber *_graphicsAPI;
    NSString *_hostXcodeVersion;
    NSString *_devicePlatform;
    NSString *_deviceOSVersion;
    NSNumber *_itemType;
    NSNumber *_filterType;
    NSNumber *_programMode;
    NSNumber *_showCommandCallsOnly;
}

@property(copy) NSNumber *showCommandCallsOnly; // @synthesize showCommandCallsOnly=_showCommandCallsOnly;
@property(copy) NSNumber *programMode; // @synthesize programMode=_programMode;
@property(copy) NSNumber *filterType; // @synthesize filterType=_filterType;
@property(copy) NSNumber *itemType; // @synthesize itemType=_itemType;
@property(copy) NSString *deviceOSVersion; // @synthesize deviceOSVersion=_deviceOSVersion;
@property(copy) NSString *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(copy) NSString *hostXcodeVersion; // @synthesize hostXcodeVersion=_hostXcodeVersion;
@property(copy) NSNumber *graphicsAPI; // @synthesize graphicsAPI=_graphicsAPI;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)log;

@end

