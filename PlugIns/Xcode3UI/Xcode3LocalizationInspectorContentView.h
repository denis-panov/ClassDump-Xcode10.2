//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTLayoutView_ML.h>

@class DVTTableView, NSView, Xcode3LocalizationsInspector;

@interface Xcode3LocalizationInspectorContentView : DVTLayoutView_ML
{
    NSView *makeLocalizedView;
    Xcode3LocalizationsInspector *_inspector;
    DVTTableView *_localizationsTableView;
}

@property(retain) DVTTableView *localizationsTableView; // @synthesize localizationsTableView=_localizationsTableView;
@property(retain) Xcode3LocalizationsInspector *inspector; // @synthesize inspector=_inspector;
@property NSView *makeLocalizedView; // @synthesize makeLocalizedView;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)awakeFromNib;

@end

