//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTPropertyListEncoding-Protocol.h>

@class NSPredicate, NSString;

@interface DVTActivationRule : NSObject <DVTPropertyListEncoding>
{
    NSString *_kind;
    NSString *_identifier;
    NSString *_versionString;
    NSPredicate *_query;
}

+ (long long)integerValueForVersionString:(id)arg1;
+ (id)keyPathsForValuesAffectingPredicate;
@property(copy) NSPredicate *query; // @synthesize query=_query;
@property(copy) NSString *versionString; // @synthesize versionString=_versionString;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
@property(readonly) NSPredicate *predicate;
- (id)_predicateWithIdentifier:(id)arg1 versionString:(id)arg2 query:(id)arg3;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

