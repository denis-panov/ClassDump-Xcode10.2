//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTAnalyticsPointAbstractClass, IDEWorkspace, NSMutableDictionary, NSSet;

@interface IDEAnalyticsPointTranslationContext : NSObject
{
    DVTAnalyticsPointAbstractClass *_analyticsPoint;
    IDEWorkspace *_workspace;
    NSSet *_binaryUUIDs;
    NSMutableDictionary *_fileNameToFilePathMap;
    NSMutableDictionary *_codeModulesByName;
}

@property(retain) NSMutableDictionary *codeModulesByName; // @synthesize codeModulesByName=_codeModulesByName;
@property(retain) NSMutableDictionary *fileNameToFilePathMap; // @synthesize fileNameToFilePathMap=_fileNameToFilePathMap;
@property(retain) NSSet *binaryUUIDs; // @synthesize binaryUUIDs=_binaryUUIDs;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, nonatomic) DVTAnalyticsPointAbstractClass *analyticsPoint; // @synthesize analyticsPoint=_analyticsPoint;
- (void).cxx_destruct;
- (id)codeModuleForName:(id)arg1;
- (void)updateWithLoadedBinaries:(id)arg1 executablePath:(id)arg2;
- (void)setCodeModule:(id)arg1 forName:(id)arg2 passesBuildProductDirFallback:(BOOL)arg3;
- (BOOL)containsBinaryUUID:(id)arg1;
- (id)filePathForFileName:(id)arg1;
- (void)updateWithProductVersion:(id)arg1;
- (id)initWithAnalyticsPoint:(id)arg1 workspace:(id)arg2 productVersion:(id)arg3;
- (id)initWithAnalyticsPoint:(id)arg1 workspace:(id)arg2 binaryUUIDs:(id)arg3;
- (id)initWithAnalyticsPoint:(id)arg1 workspace:(id)arg2;

@end

