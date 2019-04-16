//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol IDEOnDiskLogStoreFoundationServicesProviding <NSObject>
- (BOOL)writeData:(NSData *)arg1 toFile:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (NSData *)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(out id *)arg4;
- (id)propertyListWithData:(NSData *)arg1 options:(unsigned long long)arg2 format:(unsigned long long *)arg3 error:(out id *)arg4;
- (NSData *)dataWithContentsOfFile:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)copyItemAtPath:(NSString *)arg1 toPath:(NSString *)arg2 error:(id *)arg3;
- (BOOL)createDirectoryAtPath:(NSString *)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(NSDictionary *)arg3 error:(id *)arg4;
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1 error:(id *)arg2;
- (BOOL)fileExistsAtPath:(NSString *)arg1;
- (BOOL)removeItemAtPath:(NSString *)arg1 error:(id *)arg2;
@end

