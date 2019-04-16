//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTDeviceKitBase/DTDKApplicationFileBase.h>

@interface DTDKApplicationDirectory : DTDKApplicationFileBase
{
}

+ (id)itemWithParent:(id)arg1 andName:(id)arg2 error:(id *)arg3;
+ (id)itemWithParent:(id)arg1 fromLocalDirectory:(id)arg2 error:(id *)arg3;
- (void)refresh;
- (_Bool)isLeaf;
- (id)sandboxFileBases;
- (_Bool)downloadOptimizationProfilesToFile:(id)arg1 error:(id *)arg2;
- (_Bool)downloadToFile:(id)arg1 error:(id *)arg2;
- (_Bool)removeFromDeviceWithError:(id *)arg1;

@end

