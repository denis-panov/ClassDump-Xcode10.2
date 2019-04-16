//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface LOCITSRulesFile : NSObject
{
    NSArray *rules;
    NSSet *nonXMLFileExtensions;
    NSSet *unwantedFiles;
    NSSet *unwantedSuffixes;
    struct _xmlDoc *rulesDoc;
}

@property(retain) NSSet *unwantedSuffixes; // @synthesize unwantedSuffixes;
@property(retain) NSSet *unwantedFiles; // @synthesize unwantedFiles;
@property(retain) NSSet *nonXMLFileExtensions; // @synthesize nonXMLFileExtensions;
@property(retain) NSArray *rules; // @synthesize rules;
@property struct _xmlDoc *rulesDoc; // @synthesize rulesDoc;
- (void).cxx_destruct;
- (void *)libxml2RulesDoc;
- (id)applicableFilesExcludingEnglishInDirectory:(id)arg1 skipOption:(unsigned long long)arg2 allowNoXMLDecl:(BOOL)arg3;
- (BOOL)fileToBeSkipped:(id)arg1;
- (id)applicableFilesInDirectory:(id)arg1 skipOption:(unsigned long long)arg2 allowNoXMLDecl:(BOOL)arg3;
- (id)pathStringForlastSeveralPathComponents:(id)arg1 numberOfPathComponents:(int)arg2;
- (void *)ITSRulesNodeIfApplicableFile:(id)arg1 targetDoc:(void *)arg2 skipOption:(unsigned long long)arg3 allowNoXMLDecl:(BOOL)arg4;
- (BOOL)validXML:(struct _xmlDoc *)arg1 withDTDPath:(id)arg2 error:(id *)arg3;
- (id)fetchRules;
- (void)dealloc;
- (id)initWithRulesString:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfRulesURL:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfRulesFile:(id)arg1 error:(id *)arg2;

@end

