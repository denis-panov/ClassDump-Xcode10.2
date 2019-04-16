//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTMutableOrderedDictionary, IBDocument, NSImage;
@protocol IBPrimarySceneObject;

@interface IBStoryboardSceneTreeDragImageNode : NSObject
{
    struct CGSize _sizeOfSubtree;
    struct CGSize _frameImageSize;
    struct CGRect _contentRect;
    BOOL _hasReceivedLayout;
    NSObject<IBPrimarySceneObject> *_representedViewController;
    DVTMutableOrderedDictionary *_relationshipKeyPathToChildNodeMap;
    IBDocument *_document;
    NSImage *_frameImage;
    IBStoryboardSceneTreeDragImageNode *_parent;
    struct CGPoint _offsetFromParent;
}

@property(nonatomic) struct CGSize sizeOfSubtree; // @synthesize sizeOfSubtree=_sizeOfSubtree;
@property __weak IBStoryboardSceneTreeDragImageNode *parent; // @synthesize parent=_parent;
@property BOOL hasReceivedLayout; // @synthesize hasReceivedLayout=_hasReceivedLayout;
@property struct CGPoint offsetFromParent; // @synthesize offsetFromParent=_offsetFromParent;
@property(readonly) NSImage *frameImage; // @synthesize frameImage=_frameImage;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly) DVTMutableOrderedDictionary *relationshipKeyPathToChildNodeMap; // @synthesize relationshipKeyPathToChildNodeMap=_relationshipKeyPathToChildNodeMap;
@property(readonly) NSObject<IBPrimarySceneObject> *representedViewController; // @synthesize representedViewController=_representedViewController;
- (void).cxx_destruct;
- (struct CGRect)frameContentRectInAbsoluteSpace;
- (struct CGRect)frameViewFrameInAbsoluteSpace;
- (struct CGPoint)convertNodePointToAbsoluteSpace:(struct CGPoint)arg1;
- (void)layout;
- (id)allChildren;
- (unsigned long long)countOfChildren;
- (void)preLayout;
- (id)initWithRepresentedViewController:(id)arg1 relationshipKeyPathToChildNodeMap:(id)arg2 document:(id)arg3;

@end

