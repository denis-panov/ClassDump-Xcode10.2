//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDELocalizationComparison : NSObject
{
    NSArray *_filesWithChanges;
}

+ (void)initialize;
+ (id)comparisonWithLocalizationFrameworkComparison:(id)arg1 projectDirectory:(id)arg2 localizedContentsDirectory:(id)arg3 sourceLocale:(id)arg4;
@property(readonly, copy) NSArray *filesWithChanges; // @synthesize filesWithChanges=_filesWithChanges;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFilesWithChanges:(id)arg1;

@end
