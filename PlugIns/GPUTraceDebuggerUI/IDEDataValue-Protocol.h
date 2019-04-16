//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class IDEStackFrame, NSArray, NSString;

@protocol IDEDataValue <NSObject>
@property(readonly) BOOL isMemoryFault;
@property(readonly) BOOL childValuesCountValid;
@property(readonly, copy) NSArray *childValues;
@property(readonly) BOOL hasChildValues;
@property(readonly) BOOL inScope;
@property(readonly) BOOL itemDescriptionHasChanged;
@property(readonly, copy) NSString *itemDescription;
@property(readonly) BOOL typeHasChanged;
@property(readonly, copy) NSString *type;
@property(readonly, copy) NSString *primitiveLogicalValue;
@property(readonly) BOOL logicalValueHasChanged;
@property(readonly, copy) NSString *logicalValue;
@property(readonly) BOOL valueHasChanged;
@property(readonly) BOOL isValueEditable;
@property(copy) NSString *pointeeAddress;
@property(copy) NSString *address;
@property(copy) NSString *value;
@property(readonly, copy) NSString *name;
@property(readonly) IDEStackFrame *stackFrame;
@end

