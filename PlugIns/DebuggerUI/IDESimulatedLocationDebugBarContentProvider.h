//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, IDESimulateLocationMenuController, NSPopover;

@interface IDESimulatedLocationDebugBarContentProvider : IDEDebugBarContentProvider
{
    DVTObservingToken *_locationSimulatorStateToken;
    DVTObservingToken *_locationSimulatorToken;
    DVTGradientImagePopUpButton *_locationPopUpButton;
    DVTGradientImageButton *_locationPopoverButton;
    IDESimulateLocationMenuController *_simulateLocationMenuController;
    NSPopover *_popover;
}

+ (id)iconAlternateImage_locationSimulation;
+ (id)iconImage_locationSimulation;
+ (id)assetBundle;
+ (void)initialize;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (id)_imageForState:(long long)arg1;
- (void)_configureLocationMenu;
- (void)_updateButtonDisplay;
- (void)_currentLaunchSessionLocationSimulatorChanged;
- (long long)_cellStateForSimulatorState;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (id)_buttonToPresent;
- (void)showPopover:(id)arg1;
- (id)init;

@end

