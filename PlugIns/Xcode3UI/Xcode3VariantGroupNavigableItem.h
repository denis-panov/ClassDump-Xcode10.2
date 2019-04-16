//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

#import <Xcode3UI/IDENavigableItemFileReferenceProxy-Protocol.h>

@class IDENavigableItem, NSString;

@interface Xcode3VariantGroupNavigableItem : IDEKeyDrivenNavigableItem <IDENavigableItemFileReferenceProxy>
{
}

+ (id)keyPathsForValuesAffectingPrimaryChildItem;
+ (id)keyPathsForValuesAffectingDefaultReference;
+ (id)keyPathsForValuesAffectingVariantGroup;
- (BOOL)showSubitems;
- (id)_navigableItemForExternalDrag;
@property(readonly) IDENavigableItem *primaryChildItem;
- (id)contentDocumentLocation;
- (id)documentType;
- (id)textColor;
- (id)accessibleImageDescription;
- (id)image;
- (id)defaultReference;
- (id)variantGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
