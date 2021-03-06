//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class DVTFilterMatchFormatter, NSArray, NSBox, NSColor, NSTextField;

@interface IDEDocSearchResultTableCellView : NSTableCellView
{
    DVTFilterMatchFormatter *_formatter;
    NSColor *_defaultOwnerColor;
    NSColor *_defaultAbstractColor;
    NSColor *_defaultCollectionNameColor;
    NSColor *_defaultCollectionBoxColor;
    NSTextField *_ownerNameTextField;
    NSTextField *_collectionNamesField;
    NSBox *_collectionNamesBox;
    NSTextField *_abstractTextField;
}

@property(retain) NSTextField *abstractTextField; // @synthesize abstractTextField=_abstractTextField;
@property(retain) NSBox *collectionNamesBox; // @synthesize collectionNamesBox=_collectionNamesBox;
@property(retain) NSTextField *collectionNamesField; // @synthesize collectionNamesField=_collectionNamesField;
@property(retain) NSTextField *ownerNameTextField; // @synthesize ownerNameTextField=_ownerNameTextField;
- (void).cxx_destruct;
- (BOOL)_isSelected;
- (void)_updateColors;
- (void)_update;
- (void)viewDidChangeEffectiveAppearance;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *searchStrings;
- (void)awakeFromNib;

@end

