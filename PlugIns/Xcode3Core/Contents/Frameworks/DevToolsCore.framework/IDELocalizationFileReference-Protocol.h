//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/NSObject-Protocol.h>

@class DVTLocale;
@protocol IDEBlueprint;

@protocol IDELocalizationFileReference <NSObject>
- (void)addToTargetDefaultResourcesBuildPhase:(id <IDEBlueprint>)arg1;
- (void)wrapInVariantGroupForLocalization:(DVTLocale *)arg1 completionBlock:(void (^)(BOOL, NSError *, DVTFilePath *))arg2;
@end

