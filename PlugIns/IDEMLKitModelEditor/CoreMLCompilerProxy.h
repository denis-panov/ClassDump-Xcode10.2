//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSURL;

@interface CoreMLCompilerProxy : NSObject
{
    NSURL *_compilerURL;
}

@property(readonly) NSURL *compilerURL; // @synthesize compilerURL=_compilerURL;
- (void).cxx_destruct;
- (id)executeCommand:(id)arg1 inputFile:(id)arg2 outputFilename:(id)arg3 arguments:(id)arg4 error:(id *)arg5;
- (int)executeWithNSArray:(id)arg1 output:(id *)arg2 errOutput:(id *)arg3 error:(id *)arg4;
- (id)readMetadataFromModelURL:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithFileURL:(id)arg1;

@end

