//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEDataModelVersioningManager : NSObject
{
}

+ (void)createVersionedDataModelAtPath:(id)arg1 forDocumentAtPath:(id)arg2 context:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
+ (id)addedItemsForPath:(id)arg1;
+ (void)createUnversionedDataModelAtPath:(id)arg1 instantiatedPath:(id)arg2 representedFilePath:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
+ (void)moveAndDuplicateModel:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

