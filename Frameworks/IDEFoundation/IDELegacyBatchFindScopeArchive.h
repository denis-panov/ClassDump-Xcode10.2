//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IDELegacyBatchFindScopeArchive : NSObject
{
    NSMutableArray *_unarchivedScopes;
}

@property(readonly) NSArray *unarchivedScopes; // @synthesize unarchivedScopes=_unarchivedScopes;
- (void).cxx_destruct;
- (void)addScope:(id)arg1 fromXMLUnarchiver:(id)arg2;

@end

