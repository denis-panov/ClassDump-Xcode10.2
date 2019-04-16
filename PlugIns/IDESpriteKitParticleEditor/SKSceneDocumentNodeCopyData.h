//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDESpriteKitParticleEditor/NSPasteboardReading-Protocol.h>
#import <IDESpriteKitParticleEditor/NSPasteboardWriting-Protocol.h>
#import <IDESpriteKitParticleEditor/NSSecureCoding-Protocol.h>

@class NSString, NSValue, SKNode;

@interface SKSceneDocumentNodeCopyData : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    SKNode *_node;
    NSValue *_parentUID;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)copyDataForNavNode:(id)arg1;
@property(readonly, nonatomic) NSValue *parentUID; // @synthesize parentUID=_parentUID;
@property(readonly, nonatomic) SKNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_generateNodeCopy:(id)arg1;
- (id)initForNavNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

