//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTDefaultPolicyCacheDeleteExtensionItem-Protocol.h>

@class DVTFilePath, NSDate, NSString;

@interface DVTFileBasedCacheDeleteItem : NSObject <DVTDefaultPolicyCacheDeleteExtensionItem>
{
    DVTFilePath *_path;
}

@property(readonly) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)deleteWithError:(id *)arg1;
@property(readonly) BOOL isOrphaned;
@property(readonly) unsigned long long size;
@property(readonly) DVTFilePath *volume;
@property(readonly) NSDate *lastAccessedDate;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

