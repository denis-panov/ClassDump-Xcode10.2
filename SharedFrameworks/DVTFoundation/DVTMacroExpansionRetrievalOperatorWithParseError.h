//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTMacroExpansionRetrievalOperator.h>

@class NSError;

@interface DVTMacroExpansionRetrievalOperatorWithParseError : DVTMacroExpansionRetrievalOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (void).cxx_destruct;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithParseError:(id)arg1;

@end

