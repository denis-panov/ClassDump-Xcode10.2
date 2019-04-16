//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>
#import <GPUToolsShaderProfiler/NSSecureCoding-Protocol.h>

@class NSArray;

@interface DYShaderBinaryRangeInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_disassembledLineInfo;
    NSArray *_callStackInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *callStackInfo; // @synthesize callStackInfo=_callStackInfo;
@property(retain, nonatomic) NSArray *disassembledLineInfo; // @synthesize disassembledLineInfo=_disassembledLineInfo;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

