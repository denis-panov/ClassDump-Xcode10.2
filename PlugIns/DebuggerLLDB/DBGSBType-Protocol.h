//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBType, DBGSBTypeMember;

@protocol DBGSBType <NSObject>
- (BOOL)IsReferenceType;
- (const char *)GetDisplayTypeName;
- (id <DBGSBTypeMember>)GetDirectBaseClassAtIndex:(unsigned int)arg1;
- (unsigned int)GetNumberOfDirectBaseClasses;
- (const char *)GetName;
- (id <DBGSBType>)GetPointeeType;
- (unsigned int)GetTypeClass;
- (_Bool)IsPointerType;
- (_Bool)IsValid;
@end

