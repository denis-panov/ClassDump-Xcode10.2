//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEProducts/NSCopying-Protocol.h>

@class IDEProductIdentifier, NSString;

@interface IDEProductVersionIdentifier : NSObject <NSCopying>
{
    IDEProductIdentifier *_productIdentifier;
    NSString *_version;
    NSString *_buildNumber;
}

+ (id)productVersionIdentifierForArchive:(id)arg1;
@property(readonly) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) IDEProductIdentifier *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithProductIdentifier:(id)arg1 version:(id)arg2 buildNumber:(id)arg3;

@end

