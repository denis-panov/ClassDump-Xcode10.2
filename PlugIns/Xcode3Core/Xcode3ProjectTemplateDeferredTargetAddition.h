//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSString, PBXReference;

@interface Xcode3ProjectTemplateDeferredTargetAddition : NSObject
{
    PBXReference *_reference;
    NSArray *_targetIdentifiers;
    NSString *_extension;
    NSArray *_buildAttributes;
}

@property(copy) NSArray *buildAttributes; // @synthesize buildAttributes=_buildAttributes;
@property(copy) NSString *extension; // @synthesize extension=_extension;
@property(copy) NSArray *targetIdentifiers; // @synthesize targetIdentifiers=_targetIdentifiers;
@property(retain) PBXReference *reference; // @synthesize reference=_reference;
- (void).cxx_destruct;
- (id)initWithReference:(id)arg1 targetIdentifiers:(id)arg2 extension:(id)arg3 buildAttributes:(id)arg4;

@end

