//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEEntitlementsMerger : NSObject
{
}

+ (id)genericallyDefinedAppKeysToCopyFromProfile;
+ (id)keysToAlwaysCopyFromProfile;
+ (id)sharedMerger;
- (id)entitlementsByMergingProfileEntitlements:(id)arg1 appEntitlements:(id)arg2 bundleIdentifier:(id)arg3 appName:(id)arg4 profileName:(id)arg5 warnings:(id *)arg6 error:(id *)arg7;

@end
