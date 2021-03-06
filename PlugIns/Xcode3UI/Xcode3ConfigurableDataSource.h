//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEConfigurableDataSource.h>

#import <Xcode3UI/DVTOutlineViewDelegate-Protocol.h>

@class NSString;

@interface Xcode3ConfigurableDataSource : IDEConfigurableDataSource <DVTOutlineViewDelegate>
{
}

- (Class)outlineView:(id)arg1 groupRowCellClassForDataCell:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineViewGroupRowFont:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 shouldMouseHoverForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

