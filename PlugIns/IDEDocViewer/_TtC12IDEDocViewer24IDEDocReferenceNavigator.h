//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEDocViewer/IDEDocNavigator.h>

@class IDENavigableItem, NSString;

@interface _TtC12IDEDocViewer24IDEDocReferenceNavigator : IDEDocNavigator
{
    // Error parsing type: , name: _delayedUpdater
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
@property(nonatomic, retain) IDENavigableItem *rootNavigableItem;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
@property(nonatomic, readonly) NSString *domainIdentifier;
- (id)nameArraysForItems:(id)arg1;
- (id)itemsForNameArrays:(id)arg1;
- (void)revealNavigableItems:(id)arg1;
- (void)viewWillAppear;
- (void)primitiveInvalidate;
- (void)loadView;

@end
