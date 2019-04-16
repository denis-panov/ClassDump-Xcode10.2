//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser;

@interface IBDocumentXMLArchiveTypeDescriptionReader : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    BOOL _encounteredMainDocumentTag;
    BOOL _encounteredLastSavedInterfaceBuilderVersion;
    BOOL _extractLastSavedInterfaceBuilderVersion;
    BOOL _collectingLastSavedInterfaceBuilderVersion;
    NSString *_extractedLastSavedInterfaceBuilderVersion;
    long long _extractedKind;
    NSString *_extractedVersion;
    NSString *_extractedType;
}

+ (id)typeDescriptionForPath:(id)arg1 options:(unsigned long long)arg2;
+ (id)typeDescriptionForData:(id)arg1 options:(unsigned long long)arg2;
+ (id)typeDescriptionForContentsOfURL:(id)arg1 options:(unsigned long long)arg2;
+ (id)xibKindForElementName:(id)arg1 attributes:(id)arg2;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)abortParsingIfComplete;
- (id)determineTypeOfArchive;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2;
- (void)configureXMLParser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

