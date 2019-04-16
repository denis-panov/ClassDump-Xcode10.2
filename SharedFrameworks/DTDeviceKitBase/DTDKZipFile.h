//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface DTDKZipFile : NSObject
{
    NSURL *_zipFileURL;
    struct unz_internal *_archive;
    NSMutableDictionary *_attributes;
}

+ (id)zipFileWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)zipFileWithContentsOfURL:(id)arg1;
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy) NSURL *zipFileURL; // @synthesize zipFileURL=_zipFileURL;
- (void).cxx_destruct;
- (_Bool)extractEntireArchiveTo:(id)arg1 error:(id *)arg2;
- (_Bool)extractEntireArchiveTo:(id)arg1 error:(id *)arg2 withProgressHandler:(CDUnknownBlockType)arg3;
- (_Bool)enumerateFileDataWithError:(id *)arg1 andBlock:(CDUnknownBlockType)arg2;
- (_Bool)enumerateFilesWithError:(id *)arg1 andBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)expandedSizeWithError:(id *)arg1;
- (unsigned long long)countOfFilesWithError:(id *)arg1;
- (id)extractPropertyListWithInternalPath:(id)arg1 error:(id *)arg2;
- (id)attributesForFileWithInternalPath:(id)arg1 error:(id *)arg2;
- (id)attributesForAllFilesWithError:(id *)arg1;
- (id)extractFileWithInternalPath:(id)arg1 error:(id *)arg2;
- (id)_extractCurrentFileWithError:(id *)arg1;
- (id)_attributesDictionaryForCurrentFileWithError:(id *)arg1;
- (id)_attributesDictionaryFromInternalFields:(const struct unz_file_info_s *)arg1 withInternalName:(id)arg2;
- (_Bool)fileExistsAtInternalPath:(id)arg1;
- (_Bool)canOpenWithError:(id *)arg1;
- (_Bool)canOpen;
- (_Bool)_openWithError:(id *)arg1;
@property(nonatomic) struct unz_internal *archive;
- (void)invalidate;

@end

