//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBBuildSupport/IDEFilePathCachedValueProducer-Protocol.h>

@class IBAssetScannerNode, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IBICPropagatingAssetCatalogTagScanner : NSObject <IDEFilePathCachedValueProducer>
{
    NSDictionary *_allTypeInfo;
    IBAssetScannerNode *_root;
    NSMutableDictionary *_itemsIndexedByTypeThenFullyQualifiedName;
    NSMutableArray *_allNodes;
    NSMutableDictionary *_definitAdornersByAndornees;
    NSMutableDictionary *_maybeAdornersByAndornees;
    NSSet *_allTagSets;
}

+ (id)scanContentsOfPath:(id)arg1 error:(id *)arg2;
+ (BOOL)shouldOverrideScanningForCatalogAtPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)propagateAllTags;
- (BOOL)detectCyclesWhilePropagatingTagsToItem:(id)arg1;
- (void)enumeratePropagationSourcesOfNode:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (void)indexAdornersByAdornees;
- (void)enumeratePropagationTargetsOfNode:(id)arg1 enumerator:(CDUnknownBlockType)arg2;
- (id)buildEntryForFilePath:(id)arg1 withLocalNamespace:(id)arg2 isIsolated:(BOOL)arg3 error:(id *)arg4;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

