//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEBatchFindAbstractOperatorOperandPredicate.h>

@class NSString;

@interface IDEBatchFindDataTypePredicate : IDEBatchFindAbstractOperatorOperandPredicate
{
}

+ (id)propertyListIdentifier;
+ (id)operatorToString:(long long)arg1;
+ (long long)operatorFromString:(id)arg1;
- (CDUnknownBlockType)filterBoundToWorkspace:(id)arg1;
@property(readonly) NSString *fileDataTypeIdentifier;
@property(readonly) long long dataTypeOperator;
- (id)initWithOperator:(long long)arg1 operand:(id)arg2;

@end

