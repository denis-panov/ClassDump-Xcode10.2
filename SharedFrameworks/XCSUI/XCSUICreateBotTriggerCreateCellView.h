//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@protocol XCSUICreateBotTriggerCreateCellViewDelegate;

@interface XCSUICreateBotTriggerCreateCellView : NSTableCellView
{
    BOOL _isPostIntegration;
    id <XCSUICreateBotTriggerCreateCellViewDelegate> _delegate;
}

@property BOOL isPostIntegration; // @synthesize isPostIntegration=_isPostIntegration;
@property __weak id <XCSUICreateBotTriggerCreateCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addSendEmailTrigger:(id)arg1;
- (void)addRunScriptTrigger:(id)arg1;

@end

