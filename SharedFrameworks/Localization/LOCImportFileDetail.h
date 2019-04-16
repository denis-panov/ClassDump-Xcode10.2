//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class LOCFileDescription, LOCPropertyInternalGlossary, NSDictionary, NSString;

@interface LOCImportFileDetail : NSObject
{
    NSString *_path;
    NSString *_importPath;
    NSString *_sourceLocale;
    NSString *_targetLocale;
    NSDictionary *_translations;
    LOCPropertyInternalGlossary *_glossary;
    LOCFileDescription *_sourceFile;
}

+ (id)importFileDetailWithPath:(id)arg1 importPath:(id)arg2 sourceLocale:(id)arg3 targetLocale:(id)arg4 glossary:(id)arg5 sourceFile:(id)arg6;
@property(readonly) LOCFileDescription *sourceFile; // @synthesize sourceFile=_sourceFile;
@property(readonly) LOCPropertyInternalGlossary *glossary; // @synthesize glossary=_glossary;
@property(readonly) NSDictionary *translations; // @synthesize translations=_translations;
@property(readonly) NSString *targetLocale; // @synthesize targetLocale=_targetLocale;
@property(readonly) NSString *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(readonly) NSString *importPath; // @synthesize importPath=_importPath;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 importPath:(id)arg2 sourceLocale:(id)arg3 targetLocale:(id)arg4 glossary:(id)arg5 sourceFile:(id)arg6;

@end

