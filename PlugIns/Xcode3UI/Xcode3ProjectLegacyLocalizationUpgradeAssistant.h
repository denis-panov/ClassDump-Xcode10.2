//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistant.h>

#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class NSArrayController, NSString, NSTableView, Xcode3ProjectLegacyLocalizationUpgradeAssistantContext;

@interface Xcode3ProjectLegacyLocalizationUpgradeAssistant : IDEAssistant <NSTableViewDelegate>
{
    NSArrayController *_upgradesController;
    NSTableView *_upgradeTable;
}

+ (id)keyPathsForValuesAffectingCanFinish;
@property __weak NSTableView *upgradeTable; // @synthesize upgradeTable=_upgradeTable;
@property __weak NSArrayController *upgradesController; // @synthesize upgradesController=_upgradesController;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)finishButtonTitle;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (id)assistantTitle;
@property(retain) Xcode3ProjectLegacyLocalizationUpgradeAssistantContext *context;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
