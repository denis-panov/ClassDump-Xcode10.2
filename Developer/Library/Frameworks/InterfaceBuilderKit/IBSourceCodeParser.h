//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IBSourceCodeParser : NSObject
{
    BOOL usesStrictParsing;
}

+ (id)supportedFileExtensions;
- (id)orderedRelationsOfRelationshipType:(long long)arg1 inClassDescription:(id)arg2;
- (id)parseData:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)parseFile:(id)arg1 errors:(id *)arg2;
- (void)setUsesStrictParsing:(BOOL)arg1;
- (BOOL)usesStrictParsing;
- (id)init;

@end
