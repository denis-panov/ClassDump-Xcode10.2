//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTOperation.h>

@class DVTFilePath, NSArray;

@interface IDETemplateTextSubstitutionOperation : DVTOperation
{
    NSArray *_paths;
    DVTFilePath *_primaryPath;
}

@property(copy) DVTFilePath *primaryPath; // @synthesize primaryPath=_primaryPath;
@property(copy) NSArray *paths; // @synthesize paths=_paths;
- (void).cxx_destruct;

@end

