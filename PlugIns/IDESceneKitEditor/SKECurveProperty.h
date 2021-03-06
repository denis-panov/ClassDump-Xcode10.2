//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSPopover, NSString, NSTextField, SKECurveViewController;

@interface SKECurveProperty : IDEInspectorProperty
{
    NSButton *_button;
    NSTextField *_label;
    SKECurveViewController *_curveViewController;
    IDEInspectorKeyPath *_valueKeyPath;
    NSPopover *_popover;
}

- (void).cxx_destruct;
- (void)showEditor:(id)arg1;
- (void)updateLabel;
@property(readonly) NSString *curveTitle;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
@property(readonly) IDEInspectorKeyPath *valueKeyPath;
@property(readonly) SKECurveViewController *curveViewController;
- (id)makeCurveViewController;
- (double)baseline;
- (void)primitiveInvalidate;
- (id)nibName;

@end

