//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXArchivingBinding.h>

@interface PBXConditionalArchivingBinding : PBXArchivingBinding
{
    SEL _shouldArchiveSelector;
    CDUnknownFunctionPointerType _shouldArchiveMethod;
}

- (void)writeValueForObject:(id)arg1 toPListArchiver:(id)arg2;
- (id)initWithKeyBinding:(id)arg1 archiveMask:(int)arg2 shouldArchiveSelector:(SEL)arg3;

@end

