//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTFilePathField, NSTextField;

@interface IDEPOInfoViewController : IDEViewController
{
    DVTBorderedView *_infoHeader;
    DVTBorderedView *_secondaryHeader;
    NSTextField *_projectName;
    NSTextField *_locationTitle;
    DVTFilePathField *_locationField;
    NSTextField *_statusTitle;
    NSTextField *_statusField;
}

- (void).cxx_destruct;
- (void)_deleteBuildArenaAlertDidEndWithReturnCode:(long long)arg1;
- (void)deleteDerivedData:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)dvt_extraBindings;

@end

