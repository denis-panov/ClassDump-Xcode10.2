//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDELocalizationTaskOperation.h>

@class NSArray, NSMutableArray, NSString;

@interface IDELocalizationExtractLocStringsOperation : IDELocalizationTaskOperation
{
    NSString *_argumentsPlistPath;
    NSMutableArray *_outputStringsFiles;
    NSArray *_sourceFiles;
    NSArray *_macroBaseNames;
    NSString *_outputDirectory;
}

@property(readonly, copy) NSString *outputDirectory; // @synthesize outputDirectory=_outputDirectory;
@property(readonly, copy) NSArray *macroBaseNames; // @synthesize macroBaseNames=_macroBaseNames;
@property(readonly, copy) NSArray *sourceFiles; // @synthesize sourceFiles=_sourceFiles;
@property(readonly, copy) NSArray *outputStringsFiles; // @synthesize outputStringsFiles=_outputStringsFiles;
- (void).cxx_destruct;
- (void)taskDidFinish;
- (BOOL)startTask:(id *)arg1;
- (id)initWithSourceFiles:(id)arg1 macroBaseNames:(id)arg2 outputDirectory:(id)arg3;

@end

