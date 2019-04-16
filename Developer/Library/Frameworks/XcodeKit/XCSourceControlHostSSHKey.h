//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <XcodeKit/NSCopying-Protocol.h>
#import <XcodeKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCSourceControlHostSSHKey : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_publicKey;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *keyComponent;
- (id)initWithPublicKey:(id)arg1;

@end

