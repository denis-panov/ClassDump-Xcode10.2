//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSWindow.h>

@protocol DVTTextCompletionListDataSource;

@interface DVTTextCompletionWindow : NSWindow
{
    id <DVTTextCompletionListDataSource> _dataSource;
}

@property(retain) id <DVTTextCompletionListDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)accessibilityParent;
- (id)accessibilityTitle;
- (BOOL)isAccessibilityElement;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;

@end

