//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSView;

@interface DTFirstResponderDrawingStrategy : NSObject
{
    NSView *view;
    BOOL viewIsFirstResponder;
    BOOL windowIsKey;
}

- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowDidChangeKeyStatus:(id)arg1;
- (void)resignedFirstResponder;
- (void)becameFirstResponder;
- (BOOL)viewSouldDrawLikeFirstResponder;
- (void)setWindowIsKey:(BOOL)arg1;
- (void)setViewIsFirstResponder:(BOOL)arg1;
- (void)dispose;
- (void)finishObservingWindow:(id)arg1;
- (void)beginObservingWindow:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

