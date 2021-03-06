//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class NSString, Xcode3LegacyLocalizationUpgrade;

@interface _Xcode3ProjectLegacyLocalizationUpgradeAssistantTableCellView : NSTableCellView
{
}

+ (id)keyPathsForValuesAffectingReplaceModernItem;
+ (id)keyPathsForValuesAffectingUseExistingModernItem;
+ (id)keyPathsForValuesAffectingReplaceModernItemTitle;
+ (id)keyPathsForValuesAffectingUseExistingModernItemTitle;
+ (id)keyPathsForValuesAffectingCanChooseBetweenItems;
+ (id)keyPathsForValuesAffectingRepresentedUpgrade;
@property BOOL replaceModernItem;
@property BOOL useExistingModernItem;
@property(readonly, copy) NSString *replaceModernItemTitle;
@property(readonly, copy) NSString *useExistingModernItemTitle;
@property(readonly) BOOL canChooseBetweenItems;
@property(retain) Xcode3LegacyLocalizationUpgrade *representedUpgrade;

@end

