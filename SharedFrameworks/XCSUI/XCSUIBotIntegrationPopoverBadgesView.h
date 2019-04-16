//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class XCSUIBotIntegrationPopoverStatusBadgeView;

@interface XCSUIBotIntegrationPopoverBadgesView : NSView
{
    unsigned long long _errors;
    unsigned long long _warnings;
    unsigned long long _issues;
    XCSUIBotIntegrationPopoverStatusBadgeView *_errorsBadgeView;
    XCSUIBotIntegrationPopoverStatusBadgeView *_warningsBadgeView;
    XCSUIBotIntegrationPopoverStatusBadgeView *_issuesBadgeView;
}

@property __weak XCSUIBotIntegrationPopoverStatusBadgeView *issuesBadgeView; // @synthesize issuesBadgeView=_issuesBadgeView;
@property __weak XCSUIBotIntegrationPopoverStatusBadgeView *warningsBadgeView; // @synthesize warningsBadgeView=_warningsBadgeView;
@property __weak XCSUIBotIntegrationPopoverStatusBadgeView *errorsBadgeView; // @synthesize errorsBadgeView=_errorsBadgeView;
- (void).cxx_destruct;
- (void)updateBadgesWithErrors:(unsigned long long)arg1 warnings:(unsigned long long)arg2 issues:(unsigned long long)arg3;

@end

