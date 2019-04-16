//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DVTByteBuffer : NSObject
{
    char *_bytes;
    unsigned long long _capacity;
    unsigned long long _length;
    unsigned long long _position;
    BOOL _ownsBytes;
    BOOL _isClosed;
}

- (void)printf:(const char *)arg1;
- (void)printf:(const char *)arg1 arguments:(struct __va_list_tag [1])arg2;
- (void)writePropertyList:(id)arg1;
- (void)writeUnsignedAsciiInteger:(unsigned long long)arg1;
- (void)writeString:(id)arg1;
- (void)writeUTF8String:(const char *)arg1;
- (void)writeLEB128:(long long)arg1;
- (void)writeUnsignedLEB128:(unsigned long long)arg1;
- (void)writeInt64:(long long)arg1;
- (void)writeUnsignedInt64:(unsigned long long)arg1;
- (void)writeInt32:(int)arg1;
- (void)writeUnsignedInt32:(unsigned int)arg1;
- (void)writeInt16:(short)arg1;
- (void)writeUnsignedInt16:(unsigned short)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeUnsignedInt8:(unsigned char)arg1;
- (unsigned long long)readHexBytes:(void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeHexBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)writeByte:(unsigned char)arg1;
- (id)readPropertyList;
- (unsigned long long)readUnsignedAsciiInteger;
- (unsigned long long)peekUTF8StringLength;
- (id)readString;
- (id)readUTF8String;
- (long long)readLEB128;
- (unsigned long long)readUnsignedLEB128;
- (long long)readInt64;
- (unsigned long long)readUnsignedInt64;
- (int)readInt32;
- (unsigned int)readUnsignedInt32;
- (short)readInt16;
- (unsigned short)readUnsignedInt16;
- (BOOL)readInt8;
- (unsigned char)readUnsignedInt8;
- (unsigned long long)readBytes:(void *)arg1 length:(unsigned long long)arg2;
- (unsigned char)readByte;
- (unsigned char)peekByte;
- (BOOL)isAtEnd;
- (unsigned long long)seek:(unsigned long long)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (unsigned long long)position;
- (unsigned long long)length;
- (const char *)bytes;
- (BOOL)isClosed;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(char *)arg1 length:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ownsBytes:(BOOL)arg4;

@end

