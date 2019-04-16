//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEPlaygroundExecution/NSObject-Protocol.h>

@class DVTFilePath, DVTSDK, NSArray, NSString, NSUUID;
@protocol IDEPlaygroundAppBundle;

@protocol IDEPlaygroundAppBundleCreator <NSObject>
@property(readonly) DVTSDK *sdk;
@property(readonly, copy) NSArray *auxiliarySourceFrameworkLocations;
@property(readonly, copy) NSArray *frameworkSearchPaths;
@property(readonly) NSArray *resourceSearchPaths;
@property(readonly, copy) DVTFilePath *symlinkedResourcesPath;
@property(readonly, copy) NSString *uniquingString;
@property(readonly, copy) NSUUID *playgroundUUID;
@property(readonly, copy) NSString *playgroundName;
- (id <IDEPlaygroundAppBundle>)constructPlaygroundAppBundleInDirectoryAtPath:(DVTFilePath *)arg1 error:(id *)arg2;
- (id)initWithPlaygroundName:(NSString *)arg1 UUID:(NSUUID *)arg2 uniquingString:(NSString *)arg3 symlinkedResourcesPath:(DVTFilePath *)arg4 resourceSearchPaths:(NSArray *)arg5 frameworkSearchPaths:(NSArray *)arg6 auxiliarySourceFrameworkLocations:(NSArray *)arg7 sdk:(DVTSDK *)arg8;
@end
