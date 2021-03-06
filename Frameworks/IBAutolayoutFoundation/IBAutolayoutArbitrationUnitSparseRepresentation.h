//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBAutolayoutFoundation/IBBinaryArchiving-Protocol.h>

@class IBSparseAutolayoutInfo, NSString;

@interface IBAutolayoutArbitrationUnitSparseRepresentation : NSObject <IBBinaryArchiving>
{
    id _rootObject;
    IBSparseAutolayoutInfo *_sparseInfo;
}

@property(readonly) IBSparseAutolayoutInfo *sparseInfo; // @synthesize sparseInfo=_sparseInfo;
@property(readonly) id rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
@property(readonly) Class arbitrationUnitClass;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithRootObject:(id)arg1 sparseInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

