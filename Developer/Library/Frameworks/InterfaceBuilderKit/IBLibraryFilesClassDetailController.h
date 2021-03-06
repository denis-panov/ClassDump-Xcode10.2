//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBLibraryClassDetailController.h>

@class IBIconAndTextCell, NSArray, NSMapTable, NSMutableDictionary, NSMutableIndexSet, NSTableView;

@interface IBLibraryFilesClassDetailController : IBLibraryClassDetailController
{
    IBIconAndTextCell *sourceCell;
    NSTableView *filesTableView;
    NSMapTable *classDescriptionSourceToPartialDescriptionTable;
    NSMutableDictionary *sourceCategories;
    NSArray *rowToSourceCategoryKeyTable;
    unsigned long long numberOfRowsInTableView;
    NSMutableIndexSet *groupRows;
}

@property(retain, nonatomic) NSMapTable *classDescriptionSourceToPartialDescriptionTable; // @synthesize classDescriptionSourceToPartialDescriptionTable;
@property(retain, nonatomic) NSArray *rowToSourceCategoryKeyTable; // @synthesize rowToSourceCategoryKeyTable;
@property(retain, nonatomic) IBIconAndTextCell *sourceCell; // @synthesize sourceCell;
@property(retain, nonatomic) NSMutableDictionary *sourceCategories; // @synthesize sourceCategories;
@property(retain, nonatomic) NSMutableIndexSet *groupRows; // @synthesize groupRows;
@property(retain, nonatomic) NSTableView *filesTableView; // @synthesize filesTableView;
- (void)removeSelectedClassDescriptionSource:(id)arg1;
- (void)openSourceFileForSource:(id)arg1;
- (id)classDescriptionSourceForClickedRow;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)sourceForIndex:(long long)arg1;
- (id)sourceCategoryKeyForIndex:(long long)arg1;
- (BOOL)isGroupRow:(long long)arg1;
- (BOOL)sourceCategoryWithKeyIsVisible:(id)arg1;
- (id)sourceCategoryListOrder;
- (id)lineContentForSource:(id)arg1 constrainedToWidth:(double)arg2;
- (id)linkTitleAttributes;
- (id)thirdLineTitleAttributes;
- (id)secondLineTitleAttributes;
- (id)firstLineTitleAttributes;
- (id)briefHumanReadableContentsForPartialClassDescription:(id)arg1;
- (id)verboseHumanReadableContentsForPartialClassDescription:(id)arg1;
- (BOOL)classDescriptionSourceIsRemovable:(id)arg1;
- (id)bannerTitleForClassDescriptionSourceKey:(id)arg1;
- (id)classDescriptionSourceKey:(id)arg1;
- (BOOL)sourceHasFileToOpen:(id)arg1;
- (id)absolutePathForSource:(id)arg1;
- (void)refreshWithClassName:(id)arg1;
- (id)viewNibName;
- (id)label;
- (void)dealloc;

@end

