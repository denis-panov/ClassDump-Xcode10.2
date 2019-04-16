//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTrackingArea;

@interface IBAutolayoutIssueCategoryHeaderCellView : NSTableCellView
{
    NSTrackingArea *_trackingArea;
    NSButton *_actionButton;
    NSButton *_infoButton;
    CDUnknownBlockType _actionButtonClickHandler;
    CDUnknownBlockType _infoButtonClickHandler;
}

@property(copy, nonatomic) CDUnknownBlockType infoButtonClickHandler; // @synthesize infoButtonClickHandler=_infoButtonClickHandler;
@property(copy, nonatomic) CDUnknownBlockType actionButtonClickHandler; // @synthesize actionButtonClickHandler=_actionButtonClickHandler;
@property(retain, nonatomic) NSButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)didPressInfoButton:(id)arg1;
- (void)didPressActionButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (void)_commonInit_IBAutolayoutIssueCategoryHeaderCellView;

@end
