//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <SymbolicationDT/DVT_VMUAbstractSerializer.h>

__attribute__((visibility("hidden")))
@interface DVT_VMUSimpleSerializer : DVT_VMUAbstractSerializer
{
    void *_map;
    unsigned int _internCursor;
}

- (id)copyContiguousData;
- (void)_serializeValues:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;
- (unsigned int)serializeString:(id)arg1;
- (void)serialize64:(unsigned long long)arg1;
- (void)serialize32:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

