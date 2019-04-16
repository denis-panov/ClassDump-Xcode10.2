//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTTableView, NSScrollView, NSView;

@interface IDEInspectorArrayView : DVTLayoutView_ML
{
    NSView *_bottomBar;
    DVTTableView *_tableView;
    NSScrollView *_scrollView;
}

@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (BOOL)isFlipped;
- (void)layoutTopDown;
- (void)awakeFromNib;

@end

