//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>
#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTObservingToken, DVTStackBacktrace, DVTTableView, IDENavigatorDataCell, NSArrayController, NSMutableDictionary, NSString, NSViewController;

@interface Xcode3IconListInspectorCoordinator : NSObject <DVTInvalidation, NSTableViewDelegate, NSTableViewDataSource>
{
    DVTTableView *_table;
    NSArrayController *_arrayController;
    NSViewController *_viewController;
    DVTBorderedView *_glassBar;
    DVTBorderedView *_outsideBorderedView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    IDENavigatorDataCell *_iconCell;
    NSMutableDictionary *_contentsDictionary;
    DVTObservingToken *_inspectorControllerToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)add:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)rowCountChanged;
- (void)primitiveInvalidate;
- (void)setup;
- (void)awakeFromNib;
- (void)_syncViewSizes;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

