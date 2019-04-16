//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBDocument, NSArray;

@interface IBPredecessorRepresentation : NSObject
{
    NSArray *_displayValues;
    IBDocument *_document;
    id _endPoint;
}

@property(readonly) id endPoint; // @synthesize endPoint=_endPoint;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly, copy) NSArray *displayValues; // @synthesize displayValues=_displayValues;
- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)canDisconnect;
- (id)initWithEndPoint:(id)arg1 displayValues:(id)arg2 document:(id)arg3;

@end
