//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDESpriteKitParticleEditor/NSSecureCoding-Protocol.h>

@class NSImage, NSString;

@interface SKObjectLibraryCustomAssetHelper : NSObject <NSSecureCoding>
{
    id _skObject;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSImage *_image;
    NSString *_typeIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)objectLibraryAssetWithUID:(id)arg1;

@end
