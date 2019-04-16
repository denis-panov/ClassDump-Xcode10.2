//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DVTIconSetComponent : NSObject
{
    BOOL _faultedImage;
    id _image;
    long long _scale;
    NSURL *_fileURL;
    struct CGSize _size;
}

@property(readonly) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly) long long scale; // @synthesize scale=_scale;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)image;
@property(readonly) struct CGImage *cgImage;
- (id)description;
- (long long)compare:(id)arg1;
@property(readonly) NSString *fileName;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 scale:(long long)arg3;

@end

