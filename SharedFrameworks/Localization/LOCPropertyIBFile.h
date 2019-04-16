//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Localization/LOCProperty.h>

@class NSDictionary, NSString;

@interface LOCPropertyIBFile : LOCProperty
{
    NSString *ibfilePath;
    NSString *ibtoolErrorInfo;
    NSString *ibtoolLaunchPath;
    NSDictionary *ibtoolLoadmoduleOptions;
    NSDictionary *ibtoolLaunchOptions;
    NSDictionary *frameworkAndLibraryOptions;
    BOOL ibtoolSucceeded;
    NSDictionary *ibtoolOutputPlist;
    NSDictionary *ibtoolOutputStrings;
    NSDictionary *keyCommentDictionary;
}

@property(retain) NSDictionary *keyCommentDictionary; // @synthesize keyCommentDictionary;
@property(retain) NSDictionary *ibtoolOutputStrings; // @synthesize ibtoolOutputStrings;
@property(retain) NSDictionary *ibtoolOutputPlist; // @synthesize ibtoolOutputPlist;
@property BOOL ibtoolSucceeded; // @synthesize ibtoolSucceeded;
@property(retain) NSDictionary *frameworkAndLibraryOptions; // @synthesize frameworkAndLibraryOptions;
@property(retain) NSDictionary *ibtoolLaunchOptions; // @synthesize ibtoolLaunchOptions;
@property(retain) NSDictionary *ibtoolLoadmoduleOptions; // @synthesize ibtoolLoadmoduleOptions;
@property(retain) NSString *ibtoolLaunchPath; // @synthesize ibtoolLaunchPath;
@property(retain) NSString *ibtoolErrorInfo; // @synthesize ibtoolErrorInfo;
@property(retain) NSString *ibfilePath; // @synthesize ibfilePath;
- (void).cxx_destruct;
- (void)deleteTempFiles;
- (id)metainfoDictionaryForStrings;
- (id)createInternalGlossaryRelativeTo:(id)arg1 withError:(id *)arg2;
- (id)createInternalGlossaryWithError:(id *)arg1;
- (id)flattenGlotStringsDictionaryFromExportSection:(id)arg1;
- (id)stringsInExportSectionInOutputPlist;
- (id)stringsInStringsFile;
- (BOOL)obtainInfoFromIBToolOperation:(id)arg1;
- (id)initWithLOCIBToolOperation:(id)arg1;
- (BOOL)obtainInfoFromCacheFile:(id)arg1;
- (id)initWithContentsOfCacheFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolLoadModuleOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5 cacheDirectory:(id)arg6;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5 cacheDirectory:(id)arg6;
- (id)initWithContentsOfFile:(id)arg1 IBToolPath:(id)arg2 IBToolOptions:(id)arg3 otherOptions:(id)arg4 suppressIBToolErrorMessage:(BOOL)arg5 cacheDirectory:(id)arg6 cacheFile:(id)arg7 IBToolOperation:(id)arg8;

@end
