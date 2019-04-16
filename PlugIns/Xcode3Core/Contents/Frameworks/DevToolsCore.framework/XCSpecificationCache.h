//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface XCSpecificationCache : NSObject
{
    NSString *_path;
    int _fd;
    struct _NSRange _payloadByteRange;
    NSDictionary *_identsToSpecs;
}

+ (id)createCacheFileAtPath:(id)arg1 fromSpecificationsInSearchPaths:(id)arg2 error:(id *)arg3;
+ (BOOL)isCacheEnabled;
+ (unsigned short)xcodeBuildNumber;
+ (unsigned short)xcodeMinorVersionNumber;
+ (unsigned short)xcodeMajorVersionNumber;
- (void).cxx_destruct;
- (void)close;
- (id)readPropertyListAtByteRange:(struct _NSRange)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1 forSpecificationsInSearchPaths:(id)arg2 error:(id *)arg3;
- (BOOL)_loadCacheAndValidateUsingSearchPaths:(id)arg1 error:(id *)arg2;
- (BOOL)_loadSpecificationProxiesFromTableOfContents:(id)arg1 error:(id *)arg2;

@end

