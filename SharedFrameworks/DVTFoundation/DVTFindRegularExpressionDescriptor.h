//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTFindDescriptor.h>

@class NSRegularExpression;

@interface DVTFindRegularExpressionDescriptor : DVTFindDescriptor
{
    NSRegularExpression *_regularExpression;
}

@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (void).cxx_destruct;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 passingTest:(CDUnknownBlockType)arg5 docLocationCreationBlock:(CDUnknownBlockType)arg6;
- (BOOL)caseSensitive;
- (id)displayString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithRegularExpression:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

