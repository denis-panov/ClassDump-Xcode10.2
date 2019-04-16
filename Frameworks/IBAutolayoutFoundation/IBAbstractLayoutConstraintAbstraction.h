//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBLayoutConstraint, NSString;

@interface IBAbstractLayoutConstraintAbstraction : NSObject <IBBinaryArchiving>
{
}

@property(readonly, nonatomic) double priority;
- (id)makeRepresentingConstraintWithProvider:(id)arg1;
@property(readonly, nonatomic) IBLayoutConstraint *constraintInDocument;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)numberOfDrawableInstances;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

