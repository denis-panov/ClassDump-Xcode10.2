//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class NSTrackingArea;

@interface IDEDownloadsPrefToolchainItemTableCellView : NSTableCellView
{
    BOOL _showContextButton;
    NSTrackingArea *_trackingArea;
}

+ (id)keyPathsForValuesAffectingShowWarningIcon;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL showContextButton; // @synthesize showContextButton=_showContextButton;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)showWarningIcon;
- (void)updateTrackingAreas;

@end

