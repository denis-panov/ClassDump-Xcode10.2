//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBXMLDecoder, NSString;

@protocol IBXMLDecoderDelegate <NSObject>
- (Class)xmlDecoder:(IBXMLDecoder *)arg1 overridingClassForClassName:(NSString *)arg2;
- (Class)xmlDecoder:(IBXMLDecoder *)arg1 cannotDecodeObjectOfClassName:(NSString *)arg2;
@end

