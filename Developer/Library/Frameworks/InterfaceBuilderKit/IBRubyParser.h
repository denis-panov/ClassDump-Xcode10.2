//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBTaskBasedParser.h>

@class IBCFMutableDictionary;

@interface IBRubyParser : IBTaskBasedParser
{
    IBCFMutableDictionary *descriptionsToRelationshipTypesToOrderedRelations;
}

+ (id)supportedFileExtensions;
+ (void)initialize;
- (id)orderedRelationsOfRelationshipType:(long long)arg1 inClassDescription:(id)arg2;
- (id)processParserOutput:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)parserLaunchPathForFile:(id)arg1;
- (id)parserLaunchArgumentsForFile:(id)arg1;
- (void)dealloc;
- (id)init;

@end

