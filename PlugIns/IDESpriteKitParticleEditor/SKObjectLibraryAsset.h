//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLibraryAsset.h>

#import <IDESpriteKitParticleEditor/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKObjectLibraryAsset : DVTLibraryAsset <NSSecureCoding>
{
    NSString *_typeIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)assetWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6;
+ (id)assetWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6 withUDID:(id)arg7;
@property(retain, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSKObject:(id)arg1 title:(id)arg2 subTitle:(id)arg3 summary:(id)arg4 image:(id)arg5 typeIdentifier:(id)arg6 withUDID:(id)arg7;

@end

