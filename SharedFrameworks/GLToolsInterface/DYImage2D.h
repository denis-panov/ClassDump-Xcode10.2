//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GLToolsInterface/NSCopying-Protocol.h>

@class NSData;

@interface DYImage2D : NSObject <NSCopying>
{
    BOOL _flipped;
    unsigned int _pixelFormat;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _sampleCount;
    unsigned long long _bytesPerRow;
    NSData *_data;
}

@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) BOOL flipped; // @synthesize flipped=_flipped;
@property(nonatomic) unsigned long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void).cxx_destruct;
-     // Error parsing type: {DYPixelValue=I(?=[4c][4C][4s][4S][4i][4I][4q][4Q][4 ][4f][4d])}40@0:8Q16Q24Q32, name: pixelAtX:y:sample:
- (BOOL)isPixelInRenderMaskNotZeroAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRenderBuffer:(id)arg1;
- (id)initWithTextureImage:(id)arg1 flipped:(BOOL)arg2 textureImageGroupComponent:(unsigned long long)arg3;
- (id)initWithTexture:(id)arg1 level:(int)arg2 layer:(int)arg3 textureImageGroupComponent:(unsigned long long)arg4;
- (id)initWithResource:(id)arg1 level:(int)arg2 layer:(int)arg3 textureImageGroupComponent:(unsigned long long)arg4;

@end

