//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTFontValue : NSObject
{
    int _type;
    int _displayType;
    id _value;
    NSString *_unitTestKey;
}

@property(readonly, nonatomic) NSString *unitTestKey; // @synthesize unitTestKey=_unitTestKey;
@property(readonly, nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (BOOL)represents:(id)arg1;
- (id)fontValue;
- (id)displayName;
- (id)displayNameWithType:(int *)arg1;
- (id)initWithValue:(id)arg1 type:(int)arg2 displayType:(int)arg3 unitTestKey:(id)arg4;

@end

