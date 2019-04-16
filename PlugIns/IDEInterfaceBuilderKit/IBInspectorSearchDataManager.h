//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IBInspectorSearchDataManager : NSObject
{
    NSMutableDictionary *_sliceIdentifierToKeyPaths;
    NSMutableDictionary *_sliceIdentifierToKeyPathToPropertyDescriptions;
    NSMutableDictionary *_contentTypeCategoryIdentifierToSliceIdentifiers;
}

+ (id)dataManagerWithPlistRepresentation:(id)arg1;
- (void).cxx_destruct;
- (void)registerPropertyDescriptions:(id)arg1 forInspectorCategoryIdentifier:(id)arg2 sliceIdentifier:(id)arg3 contentType:(id)arg4;
- (id)keyPathsForSliceIdentifier:(id)arg1;
- (id)propertyDescriptionsForKeyPath:(id)arg1 withSliceIdentifier:(id)arg2;
- (id)sliceIdentifiersForCategoryIdentifier:(id)arg1 contentType:(id)arg2;
- (id)plistRepresentation;

@end

