//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Localization/LOCProperty.h>

@class NSDictionary, NSError, NSMutableArray;

@interface LOCPropertyStringsFile : LOCProperty
{
    NSDictionary *stringDictionaryWithStandardAPI;
    NSDictionary *stringKeyValueCommentDictionary;
    NSDictionary *legacyKeyMapping;
    NSError *parseError;
    NSError *errorFromPropertyListFromStringsFileFormat;
    BOOL allowMinorError;
    BOOL processedAsXMLFormatStringsFile;
    unsigned long long plistFormat;
    NSMutableArray *tokens;
}

@property unsigned long long plistFormat; // @synthesize plistFormat;
@property BOOL processedAsXMLFormatStringsFile; // @synthesize processedAsXMLFormatStringsFile;
@property BOOL allowMinorError; // @synthesize allowMinorError;
@property(retain) NSMutableArray *tokens; // @synthesize tokens;
@property(retain) NSError *errorFromPropertyListFromStringsFileFormat; // @synthesize errorFromPropertyListFromStringsFileFormat;
@property(retain) NSError *parseError; // @synthesize parseError;
@property(retain) NSDictionary *legacyKeyMapping; // @synthesize legacyKeyMapping;
@property(retain) NSDictionary *stringKeyValueCommentDictionary; // @synthesize stringKeyValueCommentDictionary;
@property(retain) NSDictionary *stringDictionaryWithStandardAPI; // @synthesize stringDictionaryWithStandardAPI;
- (void).cxx_destruct;
- (id)mergedStringKeyValueCommentDictionaryPreferring:(id)arg1;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 relativeTo:(id)arg2 error:(id *)arg3;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)internalGlossaryWithError:(id *)arg1;
- (id)escapeForDoubleQuotedString:(id)arg1;
- (id)translatePureStringsFileWithTranslation:(id)arg1 writeTo:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)writeTransUnitsOfPureStringsFileWithTranslations:(id)arg1 writeTo:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)translateXMLFormatStringsFileWithTranslation:(id)arg1 writeTo:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)writeTo:(id)arg1 withTranslation:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)fileContentsForNoStringEntryStringsFile;
- (id)stringKeyOrderDictionary;
- (id)stringKeyCommentDictionary;
- (id)stringKeyValueDictionary;
- (BOOL)validStringsFile;
- (BOOL)flatStringDictionary:(id)arg1;
- (void)traversePlistTree:(id)arg1 path:(id)arg2 backwardCompatiblePath:(id)arg3 extractedStringDictionary:(id)arg4 backwardCompatibleExtractedStringDictionary:(id)arg5;
- (void)processXMLFormatStringsFile:(id)arg1;
- (void)parseStringsFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 allowMinorError:(BOOL)arg2 error:(id *)arg3;

@end

