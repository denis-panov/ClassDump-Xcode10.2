//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PBXTSEnumeration : NSObject
{
    Class _enumeratedValueClass;
    NSMutableArray *_enumeratedValues;
    BOOL _sorted;
}

+ (void)setEnumeration:(id)arg1 forClass:(Class)arg2;
+ (id)enumerationForClass:(Class)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)enumeratedValues;
- (void)addEnumeratedValue:(id)arg1;
- (id)enumeratedValueForIntValue:(long long)arg1;
- (void)addEnumeratedValueWithIntValue:(int)arg1 shortDescription:(id)arg2 fullDescription:(id)arg3;
- (Class)enumeratedValueClass;
- (void)setEnumeratedValueClass:(Class)arg1;
- (id)init;

@end
