//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/NSObject-Protocol.h>

@class DVTFileDataType, DVTFilePath, DVTLocale, IDEContainer, IDEFileReference, NSArray;
@protocol IDEBlueprint, IDELocalizedContainer;

@protocol IDELocalizedGroup <NSObject>
- (void)addToTargetDefaultResourcesBuildPhase:(id <IDEBlueprint>)arg1;
- (void)addNewReferenceForLocale:(DVTLocale *)arg1 filePath:(DVTFilePath *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (DVTFilePath *)proposedFilePathForLocalization:(DVTLocale *)arg1 fileType:(DVTFileDataType *)arg2;
- (IDEFileReference *)subitemForLocale:(DVTLocale *)arg1;
- (IDEContainer<IDELocalizedContainer> *)localizedContainer;
- (NSArray *)subitems;
@end

