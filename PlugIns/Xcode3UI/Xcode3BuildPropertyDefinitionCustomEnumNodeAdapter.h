//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3BuildPropertyDefinitionNodeAdapter.h>

@class NSMutableSet;

@interface Xcode3BuildPropertyDefinitionCustomEnumNodeAdapter : Xcode3BuildPropertyDefinitionNodeAdapter
{
    NSMutableSet *_cellsToBeReEnabledFollowingPreProcessing;
}

+ (id)_maybePerformOneTimePreprocessingWithOutlineView:(id)arg1;
+ (void)performOneTimePreprocessing;
+ (BOOL)requiresPreprocessingBeforeAddingMenuItemsToPopUpCell;
- (void).cxx_destruct;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (BOOL)_isPopUpButtonCell:(id)arg1 inTableColumn:(id)arg2;
- (id)_loadingPlaceholderMenuItem;
- (id)menuItemForUnknownValue:(id)arg1 existingItems:(id)arg2;
- (void)addMenuItemsToPopUpCell:(id)arg1;
- (void)assignCell;

@end

