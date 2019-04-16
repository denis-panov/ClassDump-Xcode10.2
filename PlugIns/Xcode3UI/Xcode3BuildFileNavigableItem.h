//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class IDENavigableItem;

@interface Xcode3BuildFileNavigableItem : IDEKeyDrivenNavigableItem
{
    BOOL _hasInitializedNavItem;
    IDENavigableItem *_realNavigableItem;
}

+ (id)keyPathsForValuesAffectingContentDocumentLocation;
+ (id)keyPathsForValuesAffectingImage;
@property(retain) IDENavigableItem *realNavigableItem; // @synthesize realNavigableItem=_realNavigableItem;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)textColor;
- (id)contentDocumentLocation;
- (id)image;
- (BOOL)checkNavigableItem;
- (id)_buildFile;

@end
