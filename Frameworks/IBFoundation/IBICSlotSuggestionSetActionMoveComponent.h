//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICSlotSuggestionSetAction.h>

@class NSSet;

@interface IBICSlotSuggestionSetActionMoveComponent : IBICSlotSuggestionSetAction
{
    NSSet *_sourceSlotComponents;
    NSSet *_destinationSlotComponents;
}

@property(readonly) NSSet *destinationSlotComponents; // @synthesize destinationSlotComponents=_destinationSlotComponents;
@property(readonly) NSSet *sourceSlotComponents; // @synthesize sourceSlotComponents=_sourceSlotComponents;
- (void).cxx_destruct;
- (void)ibic_generateSubNodes:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithSourceSlotComponents:(id)arg1 destinationSlotComponents:(id)arg2;

@end

