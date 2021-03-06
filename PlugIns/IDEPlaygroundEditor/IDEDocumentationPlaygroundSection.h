//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEPlaygroundEditor/IDEPlaygroundDocumentSection.h>

@class DVTFilePath, NSString;

@interface IDEDocumentationPlaygroundSection : IDEPlaygroundDocumentSection
{
    NSString *_documentationContents;
    DVTFilePath *_filePath;
}

+ (id)contentPathsToPreserveOnSave;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *documentationContentsWithoutComments;
@property(readonly, copy) NSString *documentationContents;
- (id)content;
- (id)viewControllerForDisplayingPlaygroundSectionInEditor:(id)arg1;
- (id)initWithFilePath:(id)arg1 inPlaygroundDocument:(id)arg2;
- (id)initWithDocumentationContents:(id)arg1 identifier:(id)arg2 inPlaygroundDocument:(id)arg3;

@end

