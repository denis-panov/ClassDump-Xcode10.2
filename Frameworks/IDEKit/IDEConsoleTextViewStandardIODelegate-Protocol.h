//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class NSString;

@protocol IDEConsoleTextViewStandardIODelegate <NSObject>
@property(readonly) BOOL tracksInputHistoryForDebugger;
- (void)showNextCommandFromHistory:(id)arg1;
- (void)showPreviousCommandFromHistory:(id)arg1 currentStringAfterPrompt:(NSString *)arg2;
- (void)consoleView:(id)arg1 didEndText:(NSString *)arg2 forDebugger:(BOOL)arg3 trackHistory:(BOOL)arg4;
@end

