//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBFoundation/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IBICFileType : NSObject <NSCopying>
{
    BOOL _renderThumbnailWithImageIO;
    BOOL _supportsAnimation;
    NSString *_title;
    NSString *_identifier;
    double _displayOrder;
    NSArray *_extensions;
}

+ (id)fileTypeWithIdentifier:(id)arg1 title:(id)arg2 extensions:(id)arg3 displayOrder:(double)arg4 renderThumbnailWithImageIO:(BOOL)arg5 supportsAnimation:(BOOL)arg6;
@property(readonly, nonatomic) BOOL supportsAnimation; // @synthesize supportsAnimation=_supportsAnimation;
@property(readonly, nonatomic) BOOL renderThumbnailWithImageIO; // @synthesize renderThumbnailWithImageIO=_renderThumbnailWithImageIO;
@property(readonly, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileType:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)comparePrecedence:(id)arg1;
- (id)description;
- (id)preferredExtension;
- (BOOL)isValidFileExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 extensions:(id)arg3 displayOrder:(double)arg4 renderThumbnailWithImageIO:(BOOL)arg5 supportsAnimation:(BOOL)arg6;

@end

