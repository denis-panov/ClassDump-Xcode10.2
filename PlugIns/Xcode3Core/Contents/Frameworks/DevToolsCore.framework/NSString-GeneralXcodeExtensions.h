//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSString.h>

@interface NSString (GeneralXcodeExtensions)
+ (id)stringWithHexRepresentationOfMD5:(CDUnion_221be8ec)arg1;
+ (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithNewlyGeneratedUUID;
+ (id)stringWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
@end

