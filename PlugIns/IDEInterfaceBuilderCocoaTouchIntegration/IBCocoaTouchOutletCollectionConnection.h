//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAbstractToManyOutletConnection.h>

@class NSString;

@interface IBCocoaTouchOutletCollectionConnection : IBAbstractToManyOutletConnection
{
    BOOL _addsContentToExistingCollection;
    NSString *_lastKnownRuntimeCollectionName;
}

+ (BOOL)isOrderedRelativeToUniformInstances;
+ (BOOL)isObjectValidOutletCollectionDestination:(id)arg1;
+ (BOOL)isObjectValidOutletCollectionSource:(id)arg1;
@property(retain, nonatomic) NSString *lastKnownRuntimeCollectionName; // @synthesize lastKnownRuntimeCollectionName=_lastKnownRuntimeCollectionName;
@property(nonatomic) BOOL addsContentToExistingCollection; // @synthesize addsContentToExistingCollection=_addsContentToExistingCollection;
- (void).cxx_destruct;
- (id)_descriptionSubstringForLabel;
- (BOOL)canHaveDestinationSeparatedWithSeparationType:(int)arg1;
- (BOOL)canHaveSourceSeparatedWithSeparationType:(int)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(readonly) NSString *designtimeCollectionClassName;
@property(readonly) NSString *runtimeCollectionClassName;
- (void)updateLastKnownRuntimeCollectionClassName;
- (id)documentOfSource;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;

@end

