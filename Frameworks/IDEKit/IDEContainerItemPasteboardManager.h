//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEContainerItemPasteboardManager : NSObject
{
}

+ (id)sharedPasteboardManager;
- (id)fileURLsForDraggingInfo:(id)arg1;
- (void)containerItems:(id *)arg1 orFileURLs:(id *)arg2 forDraggingInfo:(id)arg3;
- (BOOL)writeItems:(id)arg1 toPasteboard:(id)arg2;

@end

