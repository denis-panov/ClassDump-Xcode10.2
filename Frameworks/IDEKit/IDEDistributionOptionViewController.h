//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class IDEDistributionOption, IDEDistributionOptionViewControllerConfiguration;

@interface IDEDistributionOptionViewController : IDEViewController
{
    BOOL _needsInteraction;
    BOOL _showAdditionalOptionsGroupLabel;
    IDEDistributionOptionViewControllerConfiguration *_configuration;
    IDEDistributionOption *_option;
}

@property(nonatomic) BOOL showAdditionalOptionsGroupLabel; // @synthesize showAdditionalOptionsGroupLabel=_showAdditionalOptionsGroupLabel;
@property(readonly, nonatomic) BOOL needsInteraction; // @synthesize needsInteraction=_needsInteraction;
@property(readonly, nonatomic) IDEDistributionOption *option; // @synthesize option=_option;
@property(retain, nonatomic) IDEDistributionOptionViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isInAdditionalOptionsGroup;
- (id)loadContent;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)willGoNext;
@property(readonly, nonatomic) BOOL canGoNext;
- (id)initWithOption:(id)arg1;

@end
