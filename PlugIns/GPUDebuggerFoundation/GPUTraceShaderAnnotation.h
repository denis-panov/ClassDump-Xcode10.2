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

@interface GPUTraceShaderAnnotation : NSObject
{
    float _percentage;
    unsigned int _severity;
    NSString *_message;
    NSString *_messageTooltip;
    long long _line;
}

@property(nonatomic) unsigned int severity; // @synthesize severity=_severity;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(nonatomic) long long line; // @synthesize line=_line;
@property(retain, nonatomic) NSString *messageTooltip; // @synthesize messageTooltip=_messageTooltip;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithLine:(long long)arg1 percentage:(float)arg2;

@end

