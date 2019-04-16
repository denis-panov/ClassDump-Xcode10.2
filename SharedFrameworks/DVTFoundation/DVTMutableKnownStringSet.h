//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSMutableSet.h>

@class DVTKnownStringMapping;

@interface DVTMutableKnownStringSet : NSMutableSet
{
    DVTKnownStringMapping *_knownStringMapping;
    CDUnknownFunctionPointerType _stringToIndexFn;
    CDUnknownFunctionPointerType _indexToStringFn;
    unsigned long long _maxKnownStringIndex;
    unsigned long long _knownStringCount;
    char *_knownStringBits;
    NSMutableSet *_unknownStringSet;
}

+ (id)setWithKnownStringMapping:(id)arg1;
- (void).cxx_destruct;
- (id)longDescription;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)knownStringMapping;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithKnownStringMapping:(id)arg1;

@end

