//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DTActivityTraceTapMemo, NSMutableArray, NSMutableData, NSString, XRConstantEngineeringValue;

@interface DTActivityTapTableDecoder : NSObject
{
    NSMutableArray *_memos;
    DTActivityTraceTapMemo *_currentChunk;
    NSMutableData *_stack;
    struct unique_ptr<DTTableRowDecoder, std::__1::default_delete<DTTableRowDecoder>> _tableRowDecoder;
    struct unique_ptr<DTStateActionDecoder, std::__1::default_delete<DTStateActionDecoder>> _decoder;
    unsigned char _osLogTableID;
    char _buffer[1024];
    struct {
        unsigned char time;
        unsigned char category;
        unsigned char subsystem;
        unsigned char format;
        unsigned char message;
        unsigned char backtrace;
    } _columns;
    BOOL _outOfData;
    BOOL _failed;
}

@property(readonly, nonatomic, getter=hasFailed) BOOL failed; // @synthesize failed=_failed;
@property(readonly, nonatomic, getter=isOutOfData) BOOL outOfData; // @synthesize outOfData=_outOfData;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) XRConstantEngineeringValue *message;
@property(readonly, nonatomic) XRConstantEngineeringValue *backtrace;
@property(readonly, nonatomic) NSString *format;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) unsigned long long time;
- (BOOL)next;
- (void)addMemo:(id)arg1;
- (id)init;

@end
