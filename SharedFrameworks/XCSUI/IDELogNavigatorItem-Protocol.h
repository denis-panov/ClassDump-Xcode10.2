//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSUI/NSObject-Protocol.h>

@class IDENavigableItem, NSImage, NSString;

@protocol IDELogNavigatorItem <NSObject>
@property(readonly, nonatomic) NSString *toolTip;
@property(readonly, nonatomic) long long progressValue;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@optional
@property(readonly, nonatomic) NSString *textStatus;
@property(copy, nonatomic) CDUnknownBlockType statusViewUpdateBlock;
@property(nonatomic) __weak IDENavigableItem *navigableItem;
@end

