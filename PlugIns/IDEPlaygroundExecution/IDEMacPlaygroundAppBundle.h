//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEPlaygroundExecution/IDEPlaygroundAppBundle-Protocol.h>

@class DVTFilePath, NSString;

@interface IDEMacPlaygroundAppBundle : NSObject <IDEPlaygroundAppBundle>
{
    NSString *_containerIdentifier;
    DVTFilePath *_appBundlePath;
    NSString *_executableSubpath;
    NSString *_bundleIdentifier;
    DVTFilePath *_resourcesDirectoryPath;
}

@property(readonly) DVTFilePath *resourcesDirectoryPath; // @synthesize resourcesDirectoryPath=_resourcesDirectoryPath;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy) NSString *executableSubpath; // @synthesize executableSubpath=_executableSubpath;
@property(readonly) DVTFilePath *appBundlePath; // @synthesize appBundlePath=_appBundlePath;
- (void).cxx_destruct;
- (BOOL)cleanUpAppBundle:(id *)arg1;
- (id)containerIdentifier;
@property(readonly) DVTFilePath *containerPath;
- (id)initWithAppBundlePath:(id)arg1 executableSubpath:(id)arg2 bundleIdentifier:(id)arg3 resourcesDirectoryPaths:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

