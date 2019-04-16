//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface LOCTextSegment : NSObject
{
    NSString *text;
    NSString *localeCode;
    NSArray *segments;
    NSArray *segmentCategoryWhiteSpaceOnlyOrNot;
    NSArray *nonWhiteSpaceSegments;
    NSArray *segmentLocations;
    NSArray *segmentSizes;
    NSArray *nonWhiteSpaceSegmentLocations;
    NSArray *nonWhiteSpaceSegmentSizes;
    NSMutableArray *leverageStatusForNonWhiteSpaceSegment;
    unsigned long long segmentUnit;
    id reserved1;
    id reserved2;
    id reserved3;
}

+ (id)whitespaceCharacterSet;
+ (BOOL)sentenceSeparationCharactersNotRequiringSpace:(unsigned short)arg1;
+ (BOOL)whiteSpaceOnlyText:(id)arg1;
@property unsigned long long segmentUnit; // @synthesize segmentUnit;
@property(retain) NSMutableArray *leverageStatusForNonWhiteSpaceSegment; // @synthesize leverageStatusForNonWhiteSpaceSegment;
@property(retain) NSArray *nonWhiteSpaceSegmentSizes; // @synthesize nonWhiteSpaceSegmentSizes;
@property(retain) NSArray *nonWhiteSpaceSegmentLocations; // @synthesize nonWhiteSpaceSegmentLocations;
@property(retain) NSArray *nonWhiteSpaceSegments; // @synthesize nonWhiteSpaceSegments;
@property(retain) NSArray *segmentSizes; // @synthesize segmentSizes;
@property(retain) NSArray *segmentLocations; // @synthesize segmentLocations;
@property(retain) NSArray *segmentCategoryWhiteSpaceOnlyOrNot; // @synthesize segmentCategoryWhiteSpaceOnlyOrNot;
@property(retain) NSArray *segments; // @synthesize segments;
@property(retain) NSString *localeCode; // @synthesize localeCode;
@property(retain) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)description;
- (BOOL)whiteSpaceOnlyText:(id)arg1;
- (BOOL)whiteSpaceOnlyTextSegment:(unsigned long long)arg1;
- (id)whiteSpaceStringAfterNonWhiteSpaceSegmentIndex:(unsigned long long)arg1;
- (id)nonWhiteSpaceSegmentTextForNonWhiteSpaceSegmentIndex:(unsigned long long)arg1;
- (id)mappedSegmentsWith:(id)arg1;
- (id)newLocTextWithTranslations:(id)arg1;
- (id)newLocTextSegmentFromOldBaseSegment:(id)arg1 oldLocSegment:(id)arg2 options:(unsigned long long)arg3;
- (id)escapedString:(id)arg1 prefix:(id)arg2 serialNumber:(unsigned long long)arg3;
- (id)initWithString:(id)arg1 locale:(id)arg2 unit:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (id)initWithSegments:(id)arg1 locale:(id)arg2 unit:(unsigned long long)arg3 error:(id *)arg4;

@end

