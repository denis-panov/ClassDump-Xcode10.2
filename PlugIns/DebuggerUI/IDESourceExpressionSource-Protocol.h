//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerUI/DVTSourceExpressionSource-Protocol.h>

@class DVTSourceExpression, DVTTextDocumentLocation, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol IDESourceExpressionSource <DVTSourceExpressionSource>
- (BOOL)isExpressionModuleImport:(DVTSourceExpression *)arg1;
- (BOOL)isExpressionPoundImport:(DVTSourceExpression *)arg1;
- (BOOL)expressionContainsExecutableCode:(DVTSourceExpression *)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(DVTSourceExpression *)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(DVTSourceExpression *)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(DVTSourceExpression *)arg1;
- (BOOL)isExpressionInPlainCode:(DVTSourceExpression *)arg1;
- (void)symbolsForExpression:(DVTSourceExpression *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(IDEIndexCollection *, NSDictionary *))arg3;

@optional
- (BOOL)isLocationInFunctionOrMethodBody:(DVTTextDocumentLocation *)arg1;
- (NSString *)importStringInExpression:(DVTSourceExpression *)arg1;
@end

