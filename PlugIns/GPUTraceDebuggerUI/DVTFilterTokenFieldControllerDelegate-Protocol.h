//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class DVTFilterToken, DVTFilterTokenFieldController, NSArray, NSString;

@protocol DVTFilterTokenFieldControllerDelegate <NSObject>

@optional
- (NSArray *)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 tokensForTokensFromPasteboard:(NSArray *)arg2;
- (NSArray *)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 completionTokensForString:(NSString *)arg2;
- (int)filterTokenFieldControllerDefaultGlobalOperatorType:(DVTFilterTokenFieldController *)arg1;
- (void)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 globalOperatorDidChange:(int)arg2;
- (void)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 editingStringDidUpdate:(NSString *)arg2;
- (void)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 tokensDidUpdate:(NSArray *)arg2;
- (void)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 tokensDidUpdate:(NSArray *)arg2 editingString:(NSString *)arg3 globalOperator:(int)arg4;
- (NSArray *)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 menuItemsFor:(DVTFilterToken *)arg2;
- (NSArray *)filterTokenFieldController:(DVTFilterTokenFieldController *)arg1 tokenFor:(NSString *)arg2;
@end

