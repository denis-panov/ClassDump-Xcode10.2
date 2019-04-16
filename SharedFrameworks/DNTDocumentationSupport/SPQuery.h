//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPIndex;

@interface SPQuery : NSObject
{
    BOOL _cancelled;
    int _flags;
    NSString *_spotlightQueryString;
    NSString *_queryString;
    NSArray *_attributes;
    NSArray *_languages;
    NSArray *_rankingQueries;
    NSString *_searchField;
    unsigned long long _resultCount;
    CDUnknownBlockType _foundItemsHandler;
    CDUnknownBlockType _foundAttributesHandler;
    CDUnknownBlockType _completionHandler;
    SPIndex *_index;
    struct __SIJobRef *_job;
    NSArray *_foundAttributes;
}

@property(retain, nonatomic) NSArray *foundAttributes; // @synthesize foundAttributes=_foundAttributes;
@property(nonatomic) struct __SIJobRef *job; // @synthesize job=_job;
@property(retain, nonatomic) SPIndex *index; // @synthesize index=_index;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) CDUnknownBlockType foundAttributesHandler; // @synthesize foundAttributesHandler=_foundAttributesHandler;
@property(copy) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
@property(readonly, nonatomic) unsigned long long resultCount; // @synthesize resultCount=_resultCount;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
@property(readonly, nonatomic) NSString *spotlightQueryString; // @synthesize spotlightQueryString=_spotlightQueryString;
- (void)completed:(id)arg1;
- (void)handleAttributes;
- (void)foundAttributes:(id)arg1;
- (void)foundOids:(long long *)arg1 count:(unsigned long long)arg2 valueList:(id)arg3;
- (id)initWithIndex:(id)arg1 query:(id)arg2 attributes:(id)arg3;
- (id)escapedQueryString:(id)arg1;

@end
