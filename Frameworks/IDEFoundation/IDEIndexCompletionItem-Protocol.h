//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceCodeSymbolKind, NSAttributedString, NSString;

@protocol IDEIndexCompletionItem <NSObject>
@property(readonly) BOOL notRecommended;
@property(nonatomic) double fuzzyMatchingScore;
@property(readonly) double priority;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *parentText;
@property(readonly) NSString *completionText;
@property(readonly) NSString *displayType;
@property(readonly) NSString *displayText;
@property(readonly) NSString *name;
@end

