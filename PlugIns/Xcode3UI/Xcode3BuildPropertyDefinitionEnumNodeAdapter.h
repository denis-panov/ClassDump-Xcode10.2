//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3BuildPropertyDefinitionNodeAdapter.h>

@class NSMenu, NSMenuItem;

@interface Xcode3BuildPropertyDefinitionEnumNodeAdapter : Xcode3BuildPropertyDefinitionNodeAdapter
{
    NSMenuItem *_commonMenuItem;
    NSMenu *_commonMenu;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)updateForTrackingPopUpCell:(id)arg1;
- (id)menuItemForUnknownValue:(id)arg1 existingItems:(id)arg2;
- (void)dataNode:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (void)configureMenuItem:(id)arg1 forDefinitionString:(id)arg2;
- (void)configureMenuItem:(id)arg1 forObjectValue:(id)arg2;
- (void)addMenuItemsToPopUpCell:(id)arg1;
- (id)commonMenuItem;
- (void)assignCell;

@end
