//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface IBAutolayoutIssueTableViewItem : NSObject
{
    BOOL _selected;
    BOOL _wantsBottomSeparator;
    NSString *_primaryLabel;
    NSImage *_image;
    NSString *_secondaryLabel;
    id _representedObject;
}

@property(nonatomic) BOOL wantsBottomSeparator; // @synthesize wantsBottomSeparator=_wantsBottomSeparator;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (id)initWithPrimaryLabel:(id)arg1 image:(id)arg2 representedObject:(id)arg3 secondaryLabel:(id)arg4;

@end

