//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/Xcode3LibraryGroup.h>

@class Xcode3SDK;

@interface Xcode3SDKLibraryGroup : Xcode3LibraryGroup
{
    Xcode3SDK *_sdk;
    BOOL _hasDisambiguated;
}

+ (id)libraryGroupForSDK:(id)arg1;
@property BOOL _hasDisambiguated; // @synthesize _hasDisambiguated;
@property(retain) Xcode3SDK *_sdk; // @synthesize _sdk;
- (void).cxx_destruct;
- (id)name;
- (id)libraries;
- (id)initWithSDK:(id)arg1;

@end

