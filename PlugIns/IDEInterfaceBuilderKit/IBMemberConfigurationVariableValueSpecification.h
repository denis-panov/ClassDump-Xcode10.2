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

@interface IBMemberConfigurationVariableValueSpecification : NSObject
{
    NSString *_value;
    NSString *_title;
    NSString *_abbreviation;
    double _presentationOrder;
}

+ (id)unspecifiedValueSpecificationWithTitle:(id)arg1 abbreviation:(id)arg2;
+ (id)defaultUnspecifiedValueSpecification;
@property(readonly) double presentationOrder; // @synthesize presentationOrder=_presentationOrder;
@property(readonly) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 title:(id)arg2 abbreviation:(id)arg3 presentationOrder:(double)arg4;

@end

