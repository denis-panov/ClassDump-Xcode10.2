//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class NSBundle, NSString;

@interface MDLBundleAssetResolver : NSObject <MDLAssetResolver>
{
    NSBundle *_bundle;
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)canResolveAssetNamed:(id)arg1;
- (id)resolveAssetNamed:(id)arg1;
- (id)initWithBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

