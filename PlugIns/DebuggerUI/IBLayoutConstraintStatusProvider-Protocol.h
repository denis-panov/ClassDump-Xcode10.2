//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerUI/NSObject-Protocol.h>

@class IBLayoutConstraint;

@protocol IBLayoutConstraintStatusProvider <NSObject>
- (BOOL)isSelectableConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isSelectedConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isConflictingConstraint:(IBLayoutConstraint *)arg1;
@end
