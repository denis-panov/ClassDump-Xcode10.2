//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBAssetScannerNodeType, NSArray, NSDictionary, NSMutableSet, NSSet, NSString;

@interface IBAssetScannerNode : NSObject
{
    NSMutableSet *_possibleTagSets;
    IBAssetScannerNodeType *_typeInfo;
    NSString *_fullyQualifiedName;
    NSSet *_tags;
    NSArray *_children;
    NSDictionary *_contentReference;
    IBAssetScannerNode *_parent;
    long long _propagationProgress;
}

@property long long propagationProgress; // @synthesize propagationProgress=_propagationProgress;
@property(readonly) __weak IBAssetScannerNode *parent; // @synthesize parent=_parent;
@property(readonly) NSDictionary *contentReference; // @synthesize contentReference=_contentReference;
@property(readonly) NSArray *children; // @synthesize children=_children;
@property(readonly) NSSet *possibleTagSets; // @synthesize possibleTagSets=_possibleTagSets;
@property(readonly) NSSet *tags; // @synthesize tags=_tags;
@property(readonly) NSString *fullyQualifiedName; // @synthesize fullyQualifiedName=_fullyQualifiedName;
@property(readonly) IBAssetScannerNodeType *typeInfo; // @synthesize typeInfo=_typeInfo;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)propagateTagsFromNode:(id)arg1 withCertanty:(long long)arg2;
- (id)initWithTypeInfo:(id)arg1 fullyQualifiedName:(id)arg2 tags:(id)arg3 children:(id)arg4 contentReference:(id)arg5;

@end

