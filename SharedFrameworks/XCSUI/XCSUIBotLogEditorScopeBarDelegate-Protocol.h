//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSUI/NSObject-Protocol.h>

@class NSString, XCSIntegration, XCSUIBotLogScopeBar;

@protocol XCSUIBotLogEditorScopeBarDelegate <NSObject>
- (XCSIntegration *)integrationForLogDownloading;
- (void)logEditorScopeBar:(XCSUIBotLogScopeBar *)arg1 searchTextChanged:(NSString *)arg2;
- (void)logEditorScopeBar:(XCSUIBotLogScopeBar *)arg1 showAllResultsChanged:(BOOL)arg2;
- (void)logEditorScopeBar:(XCSUIBotLogScopeBar *)arg1 stateChanged:(int)arg2;
@end

