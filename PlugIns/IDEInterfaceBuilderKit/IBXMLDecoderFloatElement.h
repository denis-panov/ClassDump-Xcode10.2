//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderAbstractValueElement.h>

@interface IBXMLDecoderFloatElement : IBXMLDecoderAbstractValueElement
{
    float _value;
}

+ (id)elementName;
- (double)interpretedDoubleValue;
- (float)interpretedFloatValue;
- (BOOL)acceptsData;
- (BOOL)interpretDataReturningError:(id *)arg1;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

