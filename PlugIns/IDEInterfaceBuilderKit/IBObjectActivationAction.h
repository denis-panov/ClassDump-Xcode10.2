//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IBObjectActivationAction : NSObject
{
    BOOL _clearSelection;
    BOOL _shouldSelectDeepestObjectOnNextMouseUp;
    BOOL _shouldPruneToSingleSelectionOnNextMouseUp;
    NSObject *_objectToActivate;
    NSObject *_objectToSelect;
}

@property(nonatomic) BOOL shouldPruneToSingleSelectionOnNextMouseUp; // @synthesize shouldPruneToSingleSelectionOnNextMouseUp=_shouldPruneToSingleSelectionOnNextMouseUp;
@property(nonatomic) BOOL shouldSelectDeepestObjectOnNextMouseUp; // @synthesize shouldSelectDeepestObjectOnNextMouseUp=_shouldSelectDeepestObjectOnNextMouseUp;
@property(nonatomic) BOOL clearSelection; // @synthesize clearSelection=_clearSelection;
@property(retain, nonatomic) NSObject *objectToSelect; // @synthesize objectToSelect=_objectToSelect;
@property(retain, nonatomic) NSObject *objectToActivate; // @synthesize objectToActivate=_objectToActivate;
- (void).cxx_destruct;
- (id)initWithObjectToActivate:(id)arg1 clearSelection:(BOOL)arg2 objectToSelect:(id)arg3 shouldSelectDeepestObjectOnNextMouseUp:(BOOL)arg4 shouldPruneToSingleSelectionOnNextMouseUp:(BOOL)arg5;

@end

