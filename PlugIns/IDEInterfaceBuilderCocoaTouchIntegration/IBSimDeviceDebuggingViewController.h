//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSStreamDelegate-Protocol.h>

@class NSImage, NSImageView, NSLayoutConstraint, NSString, NSTextView;
@protocol IBSimDeviceDebuggingViewControllerDelegate;

@interface IBSimDeviceDebuggingViewController : NSViewController <NSStreamDelegate>
{
    NSLayoutConstraint *_deviceImageAspectRatioConstraint;
    unsigned long long _lastReadConsoleOffset;
    id <IBSimDeviceDebuggingViewControllerDelegate> _delegate;
    NSImage *_deviceImage;
    NSImageView *_deviceImageView;
    NSTextView *_deviceConsoleTextView;
}

@property(retain) NSTextView *deviceConsoleTextView; // @synthesize deviceConsoleTextView=_deviceConsoleTextView;
@property(retain) NSImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(retain, nonatomic) NSImage *deviceImage; // @synthesize deviceImage=_deviceImage;
@property(nonatomic) __weak id <IBSimDeviceDebuggingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openScreenshotInPreview:(id)arg1;
- (void)resetDataMigration:(id)arg1;
- (void)saveDiagnostics:(id)arg1;
- (void)_teardownConsole;
- (void)_setupConsole;
- (void)_updateConsoleTextFromFilePath:(id)arg1;
- (void)_updateWindowTitle;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)deviceSystemLogPath;
- (id)deviceLogPath;
- (id)executionContext;
- (id)device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

