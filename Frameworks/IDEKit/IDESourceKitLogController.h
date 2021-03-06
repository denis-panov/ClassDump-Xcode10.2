//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>
#import <IDEKit/NSWindowDelegate-Protocol.h>

@class IDESourceKitConnection, NSFileHandle, NSPopUpButton, NSString, NSTextView;

@interface IDESourceKitLogController : NSWindowController <IDECommandHandlerVendor, IDECommandHandler, NSWindowDelegate>
{
    IDESourceKitConnection *_conn;
    CDUnknownBlockType _logOutputHandler;
    NSFileHandle *_logFile;
    NSPopUpButton *_logLevelPopUp;
    NSTextView *_logTextView;
}

+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
@property(retain, nonatomic) NSTextView *logTextView; // @synthesize logTextView=_logTextView;
@property(retain, nonatomic) NSPopUpButton *logLevelPopUp; // @synthesize logLevelPopUp=_logLevelPopUp;
- (void).cxx_destruct;
- (void)logLevelPopUpDidChange:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)loadSourceKitLog:(id)arg1;
- (void)_handleLogMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

