//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsUtilities/XRXMLElementParser.h>

@class NSString;

@interface _XREngineeringTypeEncodingParser : XRXMLElementParser
{
    NSString *_sentinel;
    long long _bitWidth;
}

+ (id)_elementNameToKVCMap;
+ (id)_elementNameToClassMap;
@property(nonatomic) long long bitWidth; // @synthesize bitWidth=_bitWidth;
@property(retain, nonatomic) NSString *sentinel; // @synthesize sentinel=_sentinel;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;

@end

