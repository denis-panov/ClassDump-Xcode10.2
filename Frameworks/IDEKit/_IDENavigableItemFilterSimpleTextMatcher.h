//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/_IDENavigableItemFilterMatcher.h>

@class NSString;

@interface _IDENavigableItemFilterSimpleTextMatcher : _IDENavigableItemFilterMatcher
{
    NSString *_text;
}

@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_matchesRepresentedObject:(id)arg1;
- (BOOL)_matchesNavigableItem:(id)arg1;
- (id)_initWithText:(id)arg1;

@end

