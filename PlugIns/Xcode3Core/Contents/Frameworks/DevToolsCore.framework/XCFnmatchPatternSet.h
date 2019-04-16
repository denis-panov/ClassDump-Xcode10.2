//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableData;

@interface XCFnmatchPatternSet : NSObject
{
    NSArray *_patterns;
    unsigned long long _options;
    NSMutableData *_patternFSReps;
}

+ (id)fnmatchPatternSetWithPatterns:(id)arg1;
+ (id)fnmatchPatternSetWithPatterns:(id)arg1 options:(unsigned long long)arg2;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) NSArray *patterns; // @synthesize patterns=_patterns;
- (void).cxx_destruct;
- (id)description;
- (BOOL)matchesString:(id)arg1;
- (id)init;
- (id)initWithPatternStrings:(id)arg1 options:(unsigned long long)arg2;

@end
