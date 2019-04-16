//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol DVTUserDefaults <NSObject>
- (void)setObject:(id)arg1 forKeyedSubscript:(NSString *)arg2;
- (id)objectForKeyedSubscript:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (NSURL *)URLForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (NSArray *)stringArrayForKey:(id)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (BOOL)boolForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
@end
