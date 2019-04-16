//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

#import <GameToolsFoundation/NSPopoverDelegate-Protocol.h>

@class GTFActionModelGroupLoop, GTFActionTimelineModel, NSButton, NSPopover, NSString;
@protocol GTFActionLoopPopoverDelegate;

@interface GTFActionLoopPopoverController : DVTViewController <NSPopoverDelegate>
{
    BOOL _invalidateAfterClose;
    BOOL _hasInstalled;
    int _lastLoopCount;
    id <GTFActionLoopPopoverDelegate> _delegate;
    GTFActionModelGroupLoop *_loop;
    GTFActionTimelineModel *_timelineModel;
    NSPopover *_popover;
    NSButton *_infinityButton;
    NSButton *_minusButton;
    NSButton *_addButton;
    NSButton *_removeButton;
}

@property __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSButton *minusButton; // @synthesize minusButton=_minusButton;
@property __weak NSButton *infinityButton; // @synthesize infinityButton=_infinityButton;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) GTFActionTimelineModel *timelineModel; // @synthesize timelineModel=_timelineModel;
@property(retain, nonatomic) GTFActionModelGroupLoop *loop; // @synthesize loop=_loop;
@property(nonatomic) __weak id <GTFActionLoopPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)buttonPressed:(id)arg1;
- (void)refreshButtonStates;
- (void)closePopover;
- (void)showPopoverRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 forLoop:(id)arg3 inTimelineModel:(id)arg4;
- (void)viewWillAppear;
- (void)viewDidInstall;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initUsingDefaultNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

