//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTGraphKit/DTObjectGraphIndex.h>

@class XRMemoryGraphDebugger;

@interface XRMemoryGraphDebuggerIndex : DTObjectGraphIndex
{
    XRMemoryGraphDebugger *_graphDebugger;
}

+ (id)indexWithGraph:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) XRMemoryGraphDebugger *graphDebugger; // @synthesize graphDebugger=_graphDebugger;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
