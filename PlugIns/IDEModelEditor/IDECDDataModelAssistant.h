//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistant.h>

@class DVTNotificationToken, DVTObservingToken, NSArray;

@interface IDECDDataModelAssistant : IDEAssistant
{
    NSArray *_availibleImportItems;
    BOOL _animateProgressIndicator;
    DVTObservingToken *_workspaceValidObservationToken;
    DVTNotificationToken *_indexDidChangeNotificationObserver;
}

@property BOOL animateProgressIndicator; // @synthesize animateProgressIndicator=_animateProgressIndicator;
@property(retain) NSArray *availibleImportItems; // @synthesize availibleImportItems=_availibleImportItems;
- (void).cxx_destruct;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)itemsToImportChanged:(id)arg1;
- (void)_setContextForTemplateInstantiation;
- (void)_setupAvailibleImportItems;
- (BOOL)_shouldIncludeIndexSymbol:(id)arg1;
- (id)nibBundle;
- (id)nibName;

@end
