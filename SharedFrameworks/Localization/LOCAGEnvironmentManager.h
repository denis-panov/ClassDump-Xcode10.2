//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class LOCAGCommandOptions, NSDictionary, NSString;

@interface LOCAGEnvironmentManager : NSObject
{
    NSString *_environmentFolderPath;
    LOCAGCommandOptions *_commandOptions;
    NSDictionary *_glotFolderNames;
}

+ (BOOL)makeEnvironmentAtPath:(id)arg1 error:(id *)arg2;
+ (id)folderNames;
+ (id)optionalFolderNames;
+ (id)optionalFolderMap;
+ (id)mandatoryFolderNames;
+ (id)mandatoryFolderMap;
@property(retain) NSDictionary *glotFolderNames; // @synthesize glotFolderNames=_glotFolderNames;
@property(retain) LOCAGCommandOptions *commandOptions; // @synthesize commandOptions=_commandOptions;
@property(retain) NSString *environmentFolderPath; // @synthesize environmentFolderPath=_environmentFolderPath;
- (void).cxx_destruct;
- (void)mkbomAtPath:(id)arg1;
- (id)dntPath;
- (id)itsrulesPath;
- (id)logsPath;
- (id)temporaryPath;
- (id)translationsPath;
- (id)projectsPath;
- (id)oldlocPath;
- (id)oldbasePath;
- (id)newlocPath;
- (id)newbasePath;
- (id)pathForMethodName:(id)arg1;
- (id)pathForGlotFolderNameSymbol:(id)arg1;
- (void)createMissingFolders;
- (BOOL)mandatoryFoldersExist;
- (BOOL)valid;
- (id)environmentFolderURL;
- (id)initWithEnvironmentFolderPath:(id)arg1 commandOptions:(id)arg2 error:(id *)arg3;

@end

