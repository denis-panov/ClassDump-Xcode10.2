//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface DVTLineOffsetAwareStringWrapper : NSObject <NSSecureCoding>
{
    struct _DVTTextLineOffsetTable _lineOffsets;
    NSString *_string;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)dealloc;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
- (id)convertLocationToUTF8EncodedLocation:(id)arg1;
- (id)convertLocationToNativeNSStringEncodedLocation:(id)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;

@end

