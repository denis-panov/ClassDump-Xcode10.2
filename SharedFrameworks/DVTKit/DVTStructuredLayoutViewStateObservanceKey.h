//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTKit/NSCopying-Protocol.h>

@class NSString;

@interface DVTStructuredLayoutViewStateObservanceKey : NSObject <NSCopying>
{
    id object;
    NSString *keyPath;
}

+ (id)observanceKeyWithObject:(id)arg1 andKeyPath:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToObservanceKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1 andKeyPath:(id)arg2;

@end

