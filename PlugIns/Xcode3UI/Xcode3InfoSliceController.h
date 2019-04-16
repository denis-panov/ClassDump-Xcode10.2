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

@class NSColor, NSImage, NSString, Xcode3InfoEditor;

@interface Xcode3InfoSliceController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
    NSString *_sliceIdentifier;
    Xcode3InfoEditor *_infoEditor;
    BOOL _disclosedByDefault;
}

+ (id)keyPathsForValuesAffectingTitleForDisplay;
@property BOOL disclosedByDefault; // @synthesize disclosedByDefault=_disclosedByDefault;
@property(readonly) Xcode3InfoEditor *infoEditor; // @synthesize infoEditor=_infoEditor;
@property(readonly) NSString *sliceIdentifier; // @synthesize sliceIdentifier=_sliceIdentifier;
- (void).cxx_destruct;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
@property(readonly) BOOL hasContent;
@property(readonly, copy) NSString *titleForDisplay;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSliceIdentifier:(id)arg1 infoEditor:(id)arg2;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(copy) id info; // @dynamic info;
@property(readonly) Class superclass;

@end

