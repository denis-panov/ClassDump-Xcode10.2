//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/XCCommandLineToolSpecificationDiscoveredInfo.h>

@class DVTVersion, NSArray, NSString;

@interface XCCommandLineToolSpecificationDiscoveredInfo_Ld : XCCommandLineToolSpecificationDiscoveredInfo
{
    NSString *_rawVersionString;
    DVTVersion *_version;
    BOOL _supportsEmittingDependencyInfo;
    NSArray *_configuredForArchs;
}

@property(copy) NSArray *configuredForArchs; // @synthesize configuredForArchs=_configuredForArchs;
- (void).cxx_destruct;
- (BOOL)supportsEmittingDependencyInfo;
- (id)version;
- (void)setRawVersionString:(id)arg1;
- (id)rawVersionString;

@end

