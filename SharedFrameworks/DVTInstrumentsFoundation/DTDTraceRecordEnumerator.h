//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DTDTraceTapMemo, DTDTraceTapRecordDecoder;

@interface DTDTraceRecordEnumerator : NSObject
{
    DTDTraceTapRecordDecoder *_recordDecoder;
    DTDTraceTapMemo *_memo;
}

@property(retain, nonatomic) DTDTraceTapMemo *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) DTDTraceTapRecordDecoder *recordDecoder; // @synthesize recordDecoder=_recordDecoder;
- (void).cxx_destruct;
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;

@end

