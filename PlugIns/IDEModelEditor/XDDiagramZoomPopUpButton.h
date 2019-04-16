//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSPopUpButton.h>

@class DVTNotificationToken, XDDiagramView;

@interface XDDiagramZoomPopUpButton : NSPopUpButton
{
    XDDiagramView *_diagramView;
    DVTNotificationToken *_zoomFactorChangedToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_diagramViewDidChangeZoomFactor:(id)arg1;
- (id)diagramView;
- (void)_setDiagramView:(id)arg1;
- (void)_updatePopUpButtonItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
