//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IBAutoAttachLaunchActionOptionsViewController : IDELaunchActionOptionViewController
{
    NSButton *_autoAttachToRemoteToolsCheckBox;
}

+ (BOOL)availableForScheme:(id)arg1;
@property(retain) NSButton *autoAttachToRemoteToolsCheckBox; // @synthesize autoAttachToRemoteToolsCheckBox=_autoAttachToRemoteToolsCheckBox;
- (void).cxx_destruct;
- (void)didToggleAutoAttachToRemoteTools:(id)arg1;
- (void)loadView;

@end

