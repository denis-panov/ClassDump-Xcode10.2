//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSTableView, NSView;
@protocol GTFInspectorComponentListContentViewDelegate;

@interface GTFInspectorComponentListContentView : DVTLayoutView_ML
{
    NSTableView *_tableView;
    NSView *_menuView;
    id <GTFInspectorComponentListContentViewDelegate> _delegate;
}

@property(retain, nonatomic) id <GTFInspectorComponentListContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutBottomUp;

@end

