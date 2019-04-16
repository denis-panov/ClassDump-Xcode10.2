//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Localization/LOCPropertyAttributedFile.h>

@class NSArray, NSDictionary;

@interface LOCPropertyRTFFile : LOCPropertyAttributedFile
{
    NSDictionary *docAttributes;
    NSArray *attributeRuns;
    id reserved11;
    id reserved22;
    id reserved33;
}

+ (unsigned long long)segmentOptions;
+ (BOOL)isIDStringForText:(id)arg1;
+ (id)sortedTranslationKeys:(id)arg1;
+ (id)sentencePositionKeysOrganizedByParagraphNumber:(id)arg1;
+ (id)linkKeys:(id)arg1;
+ (id)sentencePositionKeys:(id)arg1;
@property(retain) NSArray *attributeRuns; // @synthesize attributeRuns;
@property(retain) NSDictionary *docAttributes; // @synthesize docAttributes;
- (void).cxx_destruct;
- (id)sentenceRangesPerParagraphWithSegmentedNodes:(id)arg1;
- (id)sentenceRanges;
- (id)paragraphRanges;
- (id)sentenceRangesPerParagraph;
- (id)transUnitsForText:(id)arg1;
- (id)sortedTransUnitIDsForText:(id)arg1;
- (void)setAttributesToAttributedString:(id)arg1 range:(struct _NSRange)arg2 resolvedAttributes:(id)arg3;
- (id)localizedAttributedStringWithGlossary:(id)arg1 forLocale:(id)arg2 segmentRangesPerParagraph:(id)arg3 error:(id *)arg4;
- (id)localizedAttributedStringWithGlossary:(id)arg1 forLocale:(id)arg2 error:(id *)arg3;
- (BOOL)writeTo:(id)arg1 withTranslation:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)obtainAttributes:(id)arg1 fromTextNodesInElement:(id)arg2 latestAttributes:(id)arg3;
- (id)underlineTagForAttributeRun:(id)arg1;
- (id)description;
- (id)documentAttributesAsPlistObject;
- (id)newLocContentsTextFromOldBase:(id)arg1 oldLoc:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)colorFromColorAttributeString:(id)arg1;
- (id)blackColorInRGB;
- (id)blackColorStringInRGB;
- (id)colorAttributeStringFromNSColor:(id)arg1;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 relativeTo:(id)arg2 error:(id *)arg3;
- (id)createInternalGlossaryWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)createInternalGlossaryWithSegmentRangesOrganizedPerParagraph:(id)arg1 options:(unsigned long long)arg2 relativeTo:(id)arg3 error:(id *)arg4;
- (id)createInternalGlossaryWithSegmentRangesOrganizedPerParagraph:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)linksInElement:(id)arg1;
- (void)addStyleInlineElementsTo:(id)arg1 attributes:(id)arg2 previousStyle:(id)arg3 previousStyleForNonWhiteSpaceText:(id)arg4 identifier:(id)arg5 paragraphNumber:(unsigned long long)arg6;
- (id)linkAttributes;
- (id)localizableAttributesText;
- (id)contentsText;
- (id)localizedFileContentsDataWithGlossary:(id)arg1 forLocale:(id)arg2 error:(id *)arg3;
- (id)initWithAttributedString:(id)arg1 locale:(id)arg2 documentAttributes:(id)arg3 error:(id *)arg4;
- (id)initWithBase64String:(id)arg1 locale:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 locale:(id)arg2 error:(id *)arg3;

@end

