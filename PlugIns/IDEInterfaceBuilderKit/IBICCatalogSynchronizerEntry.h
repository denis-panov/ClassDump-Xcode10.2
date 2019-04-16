//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBICCatalogSynchronizer;

@interface IBICCatalogSynchronizerEntry : NSObject
{
    IBICCatalogSynchronizer *_catalogSynchronizer;
    long long _numberOfReferences;
}

@property(readonly) long long numberOfReferences; // @synthesize numberOfReferences=_numberOfReferences;
@property(readonly) IBICCatalogSynchronizer *catalogSynchronizer; // @synthesize catalogSynchronizer=_catalogSynchronizer;
- (void).cxx_destruct;
- (void)removeReference;
- (id)addReference;
- (id)initWithImageCatalogSynchronizer:(id)arg1;

@end

