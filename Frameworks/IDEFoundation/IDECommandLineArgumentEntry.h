//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface IDECommandLineArgumentEntry : NSObject
{
    BOOL _enabled;
    NSString *_argument;
}

+ (id)argumentEntriesForLegacyValues:(id)arg1;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy) NSString *argument; // @synthesize argument=_argument;
- (void).cxx_destruct;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setArgumentFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithArgument:(id)arg1 enabled:(BOOL)arg2;

@end

