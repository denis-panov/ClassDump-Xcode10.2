//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBVerboseDescriptionProvider-Protocol.h>

@class IBPlatformToolDescription, NSArray, NSNumber, NSString;

@interface IBPlatformToolLaunchContext : NSObject <IBVerboseDescriptionProvider>
{
    IBPlatformToolDescription *_toolDescription;
    NSString *_launchPath;
    NSArray *_frameworkSearchPaths;
    NSNumber *_processIdentifier;
    NSNumber *_exitStatus;
    NSNumber *_signalStatus;
}

@property(copy, nonatomic) NSNumber *signalStatus; // @synthesize signalStatus=_signalStatus;
@property(copy, nonatomic) NSNumber *exitStatus; // @synthesize exitStatus=_exitStatus;
@property(copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(readonly, nonatomic) NSArray *frameworkSearchPaths; // @synthesize frameworkSearchPaths=_frameworkSearchPaths;
@property(readonly, nonatomic) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(readonly, nonatomic) IBPlatformToolDescription *toolDescription; // @synthesize toolDescription=_toolDescription;
- (void).cxx_destruct;
- (id)ib_verboseDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isApplicationTool) BOOL applicationTool;
@property(readonly, nonatomic) NSString *platformName;
@property(readonly, nonatomic) NSString *toolName;
- (id)initWithDescription:(id)arg1 launchPath:(id)arg2 frameworkSearchPaths:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

