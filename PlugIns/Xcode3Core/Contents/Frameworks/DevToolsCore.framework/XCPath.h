//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@interface XCPath : NSObject <NSCopying>
{
    unsigned short _length;
    unsigned char _bytes[0];
}

+ (id)pathWithPath:(id)arg1 relativeToPath:(id)arg2;
+ (id)pathWithPathComponents:(id)arg1;
+ (id)pathWithBasePath:(id)arg1 pathComponents:(id)arg2;
+ (id)pathWithPrefixPath:(id)arg1 basePath:(id)arg2 pathComponents:(id)arg3;
+ (id)pathWithPrefixPath:(id)arg1 basePath:(id)arg2 pathComponents:(const id *)arg3 count:(unsigned long long)arg4;
+ (id)pathWithString:(id)arg1;
+ (id)pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)pathWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)stringRepresentation;
- (id)pathByRemovingPathSuffix;
- (id)pathSuffix;
- (id)pathByRemovingLastPathComponent;
- (id)lastPathComponent;
- (BOOL)isAbsolutePath;
- (const char *)unretainedFileSystemRepresentation;
- (unsigned long long)length;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isPathSuffixEqualToFileSystemRepresentation:(const char *)arg1;
- (BOOL)isPathSuffixEqualToFileSystemRepresentation:(const char *)arg1 caseInsensitive:(BOOL)arg2;
- (BOOL)isLastPathComponentEqualToFileSystemRepresentation:(const char *)arg1;
- (BOOL)isLastPathComponentEqualToFileSystemRepresentation:(const char *)arg1 caseInsensitive:(BOOL)arg2;

@end

