//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTDiffDataSource.h>

@class DVTDispatchLock;

@interface DVTDiffLineDataSource : DVTDiffDataSource
{
    DVTDispatchLock *_tokenStorageLock;
}

- (void).cxx_destruct;
- (struct _NSRange)tokenRangeForCharacterRange:(struct _NSRange)arg1;
- (long long)numberOfDiffTokensInDiffDescriptor:(id)arg1;
- (void)getDiffTokens:(CDStruct_3dd9eb72 *)arg1 inDiffDescriptor:(id)arg2 inRange:(struct _NSRange)arg3;
- (CDStruct_3dd9eb72)diffTokenInDiffDescriptor:(id)arg1 atIndex:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1;

@end

