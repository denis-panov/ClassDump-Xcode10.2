//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBMenuItemView : NSView <IBDocumentArchiving>
{
    BOOL _showsSubmenuIndicator;
    NSString *_title;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) BOOL showsSubmenuIndicator; // @synthesize showsSubmenuIndicator=_showsSubmenuIndicator;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRect;
- (struct CGRect)submenuIndicatorRect;
- (struct CGSize)submenuIndicatorSize;
- (struct CGRect)bodyRect;
- (BOOL)isSeparatorItem;
- (id)effectiveAttributedTitle;
- (id)effectiveAttributes;
- (id)itemShadow;
- (BOOL)isFlipped;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

