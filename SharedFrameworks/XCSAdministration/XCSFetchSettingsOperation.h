//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class XCSSettings;

@interface XCSFetchSettingsOperation : XCSInitializationOperation
{
    XCSSettings *_settings;
}

@property(retain, nonatomic) XCSSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end

