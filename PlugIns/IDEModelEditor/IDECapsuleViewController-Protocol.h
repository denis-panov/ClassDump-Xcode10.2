//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/NSObject-Protocol.h>

@class NSColor, NSImage, NSString;

@protocol IDECapsuleViewController <NSObject>
@property(readonly, copy) NSString *titleForDisplay;

@optional
@property(retain) NSColor *backgroundColor;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canUndisclose;
@property BOOL canRemoveItems;
@property BOOL canAddItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canSelect;
@property(readonly) NSImage *icon;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)remove:(id)arg1;
@end

