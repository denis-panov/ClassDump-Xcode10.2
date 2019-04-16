//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/XDDrawingStyle.h>

@class NSColor, NSShadow;

@interface XDShadowStyle : XDDrawingStyle
{
    NSShadow *_shadow;
    struct _XDShadowStyleFlags _ssFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)drawGraphic:(id)arg1 inView:(id)arg2;
@property(copy) NSColor *shadowColor;
@property double shadowBlurRadius;
@property struct CGSize shadowOffset;
@property BOOL drawsShadow;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithGraphic:(id)arg1;

@end
