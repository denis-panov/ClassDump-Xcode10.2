//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerDropTargetResolver.h>

@class NSString;

@interface IBUIStoryboardTabBarControllerDropTargetResolver : IBUIViewControllerDropTargetResolver
{
    NSString *_uniquePasteboardType;
}

- (void).cxx_destruct;
- (id)chooseDestinationForDragInfo:(id)arg1;
- (struct CGRect)dragAlignmentRectForRelatedObject:(id)arg1;
- (struct CGRect)insertionPolicy:(id)arg1 confinementRectForRepresentedObject:(id)arg2;
- (void)populatePolicies:(id)arg1;
@property(readonly, nonatomic) NSString *uniquePasteboardType;

@end

