//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEQuickHelp/IDEIndexSymbolOccurrence-Protocol.h>

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexCollection, NSString, _TtC13DVTFoundation9DVTSymbol;
@protocol IDEIndexContainerSymbol, IDEIndexSymbol, IDEIndexSymbolOccurrence;

@protocol IDEIndexSymbol <IDEIndexSymbolOccurrence>
@property(readonly) BOOL navigationPrefersDefinition;
@property(readonly) BOOL hasOccurrence;
@property(readonly) BOOL isSystem;
@property(readonly) BOOL isVirtual;
@property(readonly) NSString *moduleName;
@property(readonly) _TtC13DVTFoundation9DVTSymbol *identifier;
@property(readonly) NSString *resolution;
@property(readonly) DVTSourceCodeLanguage *symbolLanguage;
@property(readonly) DVTSourceCodeSymbolKind *symbolKind;
@property(readonly) NSString *name;
- (NSString *)completionString;
- (NSString *)qualifiedDisplayName;
- (NSString *)displayName;
- (id <IDEIndexSymbol>)ibRelationClass;
- (IDEIndexCollection *)references;
- (IDEIndexCollection *)referencingFiles;
- (id <IDEIndexContainerSymbol>)containerSymbol;
- (IDEIndexCollection *)containerSymbols;
- (IDEIndexCollection *)definitions;
- (IDEIndexCollection *)declarations;
- (IDEIndexCollection *)occurrences;
- (id <IDEIndexSymbolOccurrence>)occurrence;
- (id <IDEIndexSymbolOccurrence>)modelOccurrence;
- (BOOL)isInProject;
@end

