//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GPUDebuggerGLSupport/GPUGLVertexAttributesProtocol-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLTransformFeedbackVaryings : NSObject <GPUGLVertexAttributesProtocol>
{
    NSMutableArray *_attributes;
    int _minNumberOfVertices;
    int _maxNumberOfVertices;
}

@property(nonatomic) int maxNumberOfVertices; // @synthesize maxNumberOfVertices=_maxNumberOfVertices;
@property(nonatomic) int minNumberOfVertices; // @synthesize minNumberOfVertices=_minNumberOfVertices;
- (void).cxx_destruct;
- (void)populateObjectFromResource:(id)arg1;
- (id)formattedAttributeData:(int)arg1 forComponent:(int)arg2 forIndex:(int)arg3;
- (unsigned int)attributeFormat:(int)arg1 forComponent:(int)arg2;
- (id)attributeName:(int)arg1 forComponent:(int)arg2;
- (unsigned int)attribDivisor:(int)arg1;
- (id)attributeName:(int)arg1;
- (int)numberOfComponentsForAttribute:(int)arg1;
@property(readonly, nonatomic) int attributeCount;
- (id)initWithResource:(id)arg1;
- (id)init;
- (id)getAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) int elementCount;
@property(readonly, nonatomic) unsigned int elementType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isIndexed) BOOL indexed;
@property(readonly, nonatomic, getter=isInstanced) BOOL instanced;
@property(readonly, nonatomic) int primitiveCount;
@property(readonly, nonatomic, getter=isPrimitiveRestartEnabled) BOOL primitiveRestartEnabled;
@property(readonly) Class superclass;

@end

