//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSColor.h>

#import <IDEInterfaceBuilderKit/IBBinaryArchivableColor-Protocol.h>
#import <IDEInterfaceBuilderKit/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface NSColor (IBBinaryArchivingAdditions) <IBBinaryArchiving, IBBinaryArchivableColor>
+ (id)ibColorWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3 unarchiveAsColorWrapper:(BOOL)arg4;
+ (id)ibColorWithPatternBitmap:(id)arg1 colorSpace:(struct CGColorSpace *)arg2;
+ (id)ibColorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ibColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ibColorWithGenericGamma22White:(double)arg1 alpha:(double)arg2;
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (const char *)cStringClassNameForBinaryArchiver:(id)arg1;
- (id)ibArchivedSystemKeyPathForBinaryArchiver:(id)arg1;
- (BOOL)ibGetColorName:(id *)arg1 bundleID:(id *)arg2 fallbackColor:(id *)arg3 unarchiveAsColorWrapper:(char *)arg4;
- (BOOL)ibGetDisplayP3Red:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)ibGetSRGBRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)ibGetGenericGamma22White:(double *)arg1 alpha:(double *)arg2;
- (void)encodeWithBinaryArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

