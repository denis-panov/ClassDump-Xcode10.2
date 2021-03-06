//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEQuickHelp/NSObject-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, NSArray, NSXMLElement;
@protocol IDEIndexSymbol;

@protocol IDEQuickHelpDataContext <NSObject>
@property(readonly, nonatomic) DVTSourceCodeLanguage *preferredLanguage;
@property(readonly, nonatomic) NSArray *usrs;
@property(readonly, nonatomic) char *documentationJSON;
@property(readonly, nonatomic) BOOL symbolKindRepresentsAModule;
@property(readonly, nonatomic) DVTSourceCodeSymbolKind *documentationSymbolKind;
@property(readonly, nonatomic) NSXMLElement *documentationMarkup;
@property(readonly, nonatomic) NSXMLElement *declarationSymbolMarkup;
@property(readonly, nonatomic) id <IDEIndexSymbol> indexSymbol;
- (void)enumerateRelatedDeclarationsUsingBlock:(void (^)(NSXMLElement *, char *))arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(void (^)(NSString *, char *))arg1;
@end

