//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3UpgradeTask.h>

@class IDEScheme;

@interface Xcode3UpgradeDebugger : Xcode3UpgradeTask
{
    IDEScheme *_scheme;
    BOOL _upgradeLaunch;
    BOOL _upgradeTest;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
- (BOOL)upgrade;

@end

