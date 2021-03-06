//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class NSButton, NSLayoutConstraint, NSString;
@protocol IDEProductsInspectableVending;

@interface IDEProductsSingleButtonUtilityPane : IDEProductsUtilityPane
{
    BOOL _highlighted;
    BOOL _removeBottomMargin;
    NSString *_buttonTitle;
    NSString *_buttonTitleKeyPath;
    NSString *_buttonEnabledKeyPath;
    NSString *_buttonAction;
    NSButton *_button;
    id <IDEProductsInspectableVending> _vendor;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_contentHeightConstraint;
}

@property(retain) NSLayoutConstraint *contentHeightConstraint; // @synthesize contentHeightConstraint=_contentHeightConstraint;
@property(retain) NSLayoutConstraint *centeringConstraint; // @synthesize centeringConstraint=_centeringConstraint;
@property(retain) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property __weak id <IDEProductsInspectableVending> vendor; // @synthesize vendor=_vendor;
@property(retain) NSButton *button; // @synthesize button=_button;
@property(nonatomic) BOOL removeBottomMargin; // @synthesize removeBottomMargin=_removeBottomMargin;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSString *buttonAction; // @synthesize buttonAction=_buttonAction;
@property(retain, nonatomic) NSString *buttonEnabledKeyPath; // @synthesize buttonEnabledKeyPath=_buttonEnabledKeyPath;
@property(retain, nonatomic) NSString *buttonTitleKeyPath; // @synthesize buttonTitleKeyPath=_buttonTitleKeyPath;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (void)bindButtonEnabledKeyPath;
- (void)bindButtonTitleKeyPath;
- (void)buttonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithInspectable:(id)arg1 vendor:(id)arg2;
- (id)initWithInspectable:(id)arg1;

@end

