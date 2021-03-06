//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsFoundation/DTTapDataMemo.h>

@class NSData, NSValue;
@protocol DTKPDatastream;

@interface DTKTraceTapMemo : DTTapDataMemo
{
    BOOL _isSession;
    unsigned int _triggerCount;
    NSData *_triggerIDs;
    id <DTKPDatastream> _datastream;
    NSValue *_containers;
}

@property(retain, nonatomic) NSValue *containers; // @synthesize containers=_containers;
@property(retain, nonatomic) id <DTKPDatastream> datastream; // @synthesize datastream=_datastream;
@property(retain, nonatomic) NSData *triggerIDs; // @synthesize triggerIDs=_triggerIDs;
@property(nonatomic) unsigned int triggerCount; // @synthesize triggerCount=_triggerCount;
@property(nonatomic) BOOL isSession; // @synthesize isSession=_isSession;
- (void).cxx_destruct;

@end

