//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSDictionary, NSMutableDictionary;

@interface Xcode3ProjectDocumentLocation : DVTDocumentLocation
{
    NSMutableDictionary *_selection;
}

@property(readonly) NSDictionary *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selection:(id)arg3;

@end
