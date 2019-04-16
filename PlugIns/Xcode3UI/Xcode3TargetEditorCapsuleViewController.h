//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleViewController-Protocol.h>
#import <Xcode3UI/IDECapsuleViewDelegate-Protocol.h>

@class NSColor, NSImage, NSString;

@interface Xcode3TargetEditorCapsuleViewController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
}

@property(readonly) BOOL canDrag;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *titleForDisplay;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

