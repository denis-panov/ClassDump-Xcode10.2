//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFileDataType, NSString;

@interface _IDEPathAndFileType : NSObject
{
    NSString *_pathString;
    DVTFileDataType *_fileDataType;
}

+ (id)pathAndFileTypeWithFileReference:(id)arg1 fileReferencePath:(id)arg2;
@property(retain) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property(retain) NSString *pathString; // @synthesize pathString=_pathString;
- (void).cxx_destruct;
- (id)documentLocation;
- (long long)caseInsensitiveCompare:(id)arg1;
- (id)description;
- (id)initWithPathString:(id)arg1 fileDataType:(id)arg2;

@end

