//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDESourceKitVariantDictionaryWrapper.h>

@class DVTFilePath, IDESourceKitResponseDocumentLocation, IDESourceKitResponseSymbol, NSString;

@interface IDESourceKitResponseSymbolOccurrence : IDESourceKitVariantDictionaryWrapper
{
}

@property(readonly) BOOL symbolIsSystem;
@property(readonly) BOOL isVirtual;
@property(readonly) BOOL isInProject;
@property(readonly) NSString *symbolModuleName;
@property(readonly) NSString *displayName;
@property(readonly) IDESourceKitResponseSymbol *symbol;
@property(readonly) NSString *moduleUrlOpt;
@property(readonly) DVTFilePath *file;
@property(readonly) long long indexerColumn;
@property(readonly) long long lineNumber;
@property(readonly) IDESourceKitResponseDocumentLocation *location;
@property(readonly) long long role;
- (id)ide_collectionItem:(id)arg1;

@end

