//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTStackView_AppKitAutolayout, NSArray, NSLayoutConstraint;

@interface IDEDistributionOptionsStepViewController : IDEDistributionStepViewController
{
    BOOL canGoNext;
    BOOL _loading;
    NSArray *_optionsViewControllers;
    DVTStackView_AppKitAutolayout *_optionsStackView;
    NSLayoutConstraint *_heightConstraint;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) DVTStackView_AppKitAutolayout *optionsStackView; // @synthesize optionsStackView=_optionsStackView;
@property(retain, nonatomic) NSArray *optionsViewControllers; // @synthesize optionsViewControllers=_optionsViewControllers;
@property(nonatomic) BOOL canGoNext; // @synthesize canGoNext;
- (void).cxx_destruct;
- (id)helpID;
- (void)willGoNext;
- (id)title;
- (id)nibName;
- (void)primitiveInvalidate;
- (BOOL)canGoPrevious;
- (void)_updateCanGoNext;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 assistantWindowController:(id)arg2;

@end

