//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DBGSummaryPart : NSObject
{
    NSString *_wholeString;
    struct _NSRange _partRange;
    struct _NSRange _contentRange;
    NSArray *_children;
    NSArray *_valuePathParts;
    NSArray *_expressionParts;
}

+ (BOOL)_containsKnownInvalidStrings:(id)arg1;
+ (id)formatterForString:(id)arg1;
+ (id)changedPropertyPathForField:(int)arg1;
+ (id)propertyPathForField:(int)arg1;
+ (int)dataFieldForString:(id)arg1;
@property(readonly) NSArray *children; // @synthesize children=_children;
@property(readonly) NSString *wholeString; // @synthesize wholeString=_wholeString;
@property(readonly) struct _NSRange contentRange; // @synthesize contentRange=_contentRange;
@property(readonly) struct _NSRange partRange; // @synthesize partRange=_partRange;
- (void).cxx_destruct;
@property(readonly) BOOL requiresExpressionPath;
@property(readonly) NSArray *expressionParts;
@property(readonly) NSArray *valuePathParts;
- (id)stringForValuePaths:(id)arg1 expressionValues:(id)arg2 andDataValue:(id)arg3;
@property(readonly) NSString *contentString;
@property(readonly) NSString *partString;
- (BOOL)_parse;
- (id)description;
- (id)_initWithString:(id)arg1 partRange:(struct _NSRange)arg2 andContentRange:(struct _NSRange)arg3;

@end

