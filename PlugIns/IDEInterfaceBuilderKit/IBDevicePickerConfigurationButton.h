//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSButton.h>

@class IBDeviceConfiguration;

@interface IBDevicePickerConfigurationButton : NSButton
{
    BOOL _inBranchMode;
    IBDeviceConfiguration *_deviceConfiguration;
}

@property(nonatomic, getter=isInBranchMode) BOOL inBranchMode; // @synthesize inBranchMode=_inBranchMode;
@property(retain, nonatomic) IBDeviceConfiguration *deviceConfiguration; // @synthesize deviceConfiguration=_deviceConfiguration;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

