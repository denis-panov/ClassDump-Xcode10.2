//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC17XCSAdministration15XCSBuildVersion : NSObject
{
    // Error parsing type: , name: major
    // Error parsing type: , name: train
    // Error parsing type: , name: minor
    // Error parsing type: , name: seed
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithExtendedGraphemeClusterLiteral:(id)arg1;
- (id)initWithUnicodeScalarLiteral:(id)arg1;
- (id)initWithStringLiteral:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithMajor:(long long)arg1 train:(id)arg2 minor:(long long)arg3 seed:(id)arg4;
@property(nonatomic, readonly) NSString *seed; // @synthesize seed;
@property(nonatomic, readonly) long long minor; // @synthesize minor;
@property(nonatomic, readonly) NSString *train; // @synthesize train;
@property(nonatomic, readonly) long long major; // @synthesize major;

@end
