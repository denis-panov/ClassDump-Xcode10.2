//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEUpgradeTaskHandler-Protocol.h>

@class IDEUpgradeContext, NSString;
@protocol Xcode3UpgradeContext;

@interface Xcode3UpgradeBaseInternationalizationHandler : NSObject <IDEUpgradeTaskHandler>
{
    IDEUpgradeContext<Xcode3UpgradeContext> *_context;
}

@property(readonly) IDEUpgradeContext<Xcode3UpgradeContext> *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_presentErrors:(id)arg1;
- (void)_enableBaseInternationalizationForProject:(id)arg1 workspaceTabController:(id)arg2 task:(id)arg3;
- (void)upgradeWorkspace:(id)arg1 withTasks:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

