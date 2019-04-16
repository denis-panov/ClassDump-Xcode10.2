//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

@class DVTDevice, NSButton, NSProgressIndicator, NSString, NSTextField;
@protocol DVTDeviceAction;

@interface DVTDeviceAddressSheetController : DVTViewController
{
    BOOL _cancelled;
    NSString *_prompt;
    DVTDevice *_device;
    NSTextField *_promptLabel;
    NSProgressIndicator *_addressProgressIndicator;
    NSTextField *_addressTextField;
    NSButton *_connectButton;
    NSTextField *_errorLabel;
    id <DVTDeviceAction> _connectAction;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain) id <DVTDeviceAction> connectAction; // @synthesize connectAction=_connectAction;
@property(retain) NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain) NSButton *connectButton; // @synthesize connectButton=_connectButton;
@property(retain) NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
@property(retain) NSProgressIndicator *addressProgressIndicator; // @synthesize addressProgressIndicator=_addressProgressIndicator;
@property(retain) NSTextField *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain) DVTDevice *device; // @synthesize device=_device;
@property(retain) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;
- (void)connect:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewWillAppear;

@end

