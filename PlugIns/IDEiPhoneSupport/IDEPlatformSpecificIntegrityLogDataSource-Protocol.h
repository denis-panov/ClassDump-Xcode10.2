//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class IDEActivityLogSectionRecorder, NSString;
@protocol IDEBlueprintModelSnapshot;

@protocol IDEPlatformSpecificIntegrityLogDataSource <NSObject>
- (void)analyzeModelIntegrityForBlueprintSnapshot:(id <IDEBlueprintModelSnapshot>)arg1 forConfiguration:(NSString *)arg2 usingRecorder:(IDEActivityLogSectionRecorder *)arg3;
@end

