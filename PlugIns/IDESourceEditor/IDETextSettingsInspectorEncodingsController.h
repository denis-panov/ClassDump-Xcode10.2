//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESourceEditor/IDETextSettingsInspectorPopupController.h>

@class IDEInspectorKeyPath, NSNumber, NSString;

@interface IDETextSettingsInspectorEncodingsController : IDETextSettingsInspectorPopupController
{
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_noExplicitEncodingTitle;
    NSNumber *_proposedNewEncoding;
}

- (void).cxx_destruct;
- (void)_encodingSheetDidDismiss:(id)arg1 returnCode:(long long)arg2;
- (void)_applyNewEncodingShouldConvert:(BOOL)arg1;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)configurePopUpButton;

@end
