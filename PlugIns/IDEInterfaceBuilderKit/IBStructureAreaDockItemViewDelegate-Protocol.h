//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBStructureAreaDockItemView, NSEvent;

@protocol IBStructureAreaDockItemViewDelegate <NSObject>
- (BOOL)structureAreaDockItemView:(IBStructureAreaDockItemView *)arg1 handleMouseDragged:(NSEvent *)arg2 mouseDown:(NSEvent *)arg3;
- (void)structureAreaDockItemView:(IBStructureAreaDockItemView *)arg1 noteMouseDown:(NSEvent *)arg2;
- (void)structureAreaDockItemView:(IBStructureAreaDockItemView *)arg1 noteClick:(NSEvent *)arg2;
@end

