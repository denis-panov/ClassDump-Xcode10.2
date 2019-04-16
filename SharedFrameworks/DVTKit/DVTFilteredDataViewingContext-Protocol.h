//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/NSObject-Protocol.h>

@class NSArray, NSSet;

@protocol DVTFilteredDataViewingContext <NSObject>
- (void)showMatches:(NSSet *)arg1 added:(NSSet *)arg2 removed:(NSSet *)arg3;
@property(nonatomic, readonly) long long filterProgress;

@optional
@property(nonatomic, copy) NSArray *highlightFragments;
@end
