//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

@protocol DTFileBrowserServiceAuthorizedAPI <DTXAllowedRPC>
- (NSMutableDictionary *)updateAttributesForItem:(NSMutableDictionary *)arg1;
- (NSArray *)contentsOfDirectoryAtPath:(NSString *)arg1;
- (NSData *)dataFromFileAtPath:(NSString *)arg1;
- (NSArray *)entriesInPathsArray:(NSArray *)arg1;
- (NSArray *)entriesAtPath:(NSString *)arg1;
@end
