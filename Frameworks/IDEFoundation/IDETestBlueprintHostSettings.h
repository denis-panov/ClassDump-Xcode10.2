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

@interface IDETestBlueprintHostSettings : NSObject
{
    BOOL _hasBundleLoader;
    NSString *_hostBlueprintIdentifier;
}

@property(readonly) BOOL hasBundleLoader; // @synthesize hasBundleLoader=_hasBundleLoader;
@property(readonly) NSString *hostBlueprintIdentifier; // @synthesize hostBlueprintIdentifier=_hostBlueprintIdentifier;
- (void).cxx_destruct;
- (id)initWithHostBlueprintIdentifier:(id)arg1 hasBundleLoader:(BOOL)arg2;

@end

