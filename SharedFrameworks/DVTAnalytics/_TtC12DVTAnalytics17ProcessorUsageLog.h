//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC12DVTAnalytics17ProcessorUsageLog : NSObject
{
    // Error parsing type: , name: command
    // Error parsing type: , name: betaIdentifier
    // Error parsing type: , name: osBuild
    // Error parsing type: , name: osVersion
    // Error parsing type: , name: osPlatform
    // Error parsing type: , name: parent
    // Error parsing type: , name: build
    // Error parsing type: , name: version
    // Error parsing type: , name: hardwareModel
    // Error parsing type: , name: dateTime
    // Error parsing type: , name: activeCPUs
    // Error parsing type: , name: reportVersion
    // Error parsing type: , name: endTime
    // Error parsing type: , name: microstackshots
    // Error parsing type: , name: primaryState
    // Error parsing type: , name: event
    // Error parsing type: , name: architecture
    // Error parsing type: , name: pid
    // Error parsing type: , name: startTime
    // Error parsing type: , name: powerSource
    // Error parsing type: , name: powerStatsFor
    // Error parsing type: , name: energyDetail
    // Error parsing type: , name: steps
    // Error parsing type: , name: actionTaken
    // Error parsing type: , name: userActivity
    // Error parsing type: , name: duration
    // Error parsing type: , name: cpuUsed
    // Error parsing type: , name: cpuLimit
    // Error parsing type: , name: limitDuration
    // Error parsing type: , name: uuid
    // Error parsing type: , name: executionPath
    // Error parsing type: , name: sampledExecutionTree
    // Error parsing type: , name: binaryImageList
    // Error parsing type: , name: path
    // Error parsing type: , name: identifier.storage
    // Error parsing type: , name: userBinaryImageList.storage
    // Error parsing type: , name: userBinaryImageUUIDList.storage
    // Error parsing type: , name: systemBinaryImageList.storage
    // Error parsing type: , name: systemBinaryImagePathList.storage
    // Error parsing type: , name: systemBinaryImageNameList.storage
    // Error parsing type: , name: isFullySymbolicated.storage
    // Error parsing type: , name: loadAddressMapping.storage
    // Error parsing type: , name: libraryFrameCompressedTree.storage
    // Error parsing type: , name: lowSampleCountFrameCompressedTree.storage
    // Error parsing type: , name: lowSampleCountThenLibaryFrameCompressedTree.storage
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL isFullySymbolicated;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, copy) NSString *identifier;
@property(nonatomic, readonly) NSString *version; // @synthesize version;
@property(nonatomic, readonly) NSString *build; // @synthesize build;
@property(nonatomic, readonly) NSString *osVersion; // @synthesize osVersion;
@property(nonatomic, readonly) NSString *osBuild; // @synthesize osBuild;

@end

