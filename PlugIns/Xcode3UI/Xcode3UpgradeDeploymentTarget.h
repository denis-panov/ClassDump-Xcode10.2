//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3UpgradeTargetTask.h>

@class NSArray, NSString;

@interface Xcode3UpgradeDeploymentTarget : Xcode3UpgradeTargetTask
{
    NSString *_settingToUpgrade;
    NSString *_settingValue;
    NSArray *_configurationsToUpgrade;
}

+ (id)analyzeInContext:(id)arg1;
- (void).cxx_destruct;
- (BOOL)upgrade;

@end

