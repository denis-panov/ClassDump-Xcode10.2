//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTBorderedView, NSTableView, SKShaderAttributesInspector;

@interface SKShaderAttributesInspectorLayoutView : DVTLayoutView_ML
{
    NSTableView *_tableView;
    DVTBorderedView *_bottomBar;
    SKShaderAttributesInspector *_inspector;
}

@property(retain, nonatomic) SKShaderAttributesInspector *inspector; // @synthesize inspector=_inspector;
@property(retain, nonatomic) DVTBorderedView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)preferredTableViewSize;

@end

