//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTPagingSheetWindowController.h>

@class DVTBorderedView, DVTDevice, DVTGradientImageButton, DVTTableView, NSArray, NSArrayController;

@interface DVTDeviceProvisioningProfilesSheetController : DVTPagingSheetWindowController
{
    DVTDevice *_device;
    DVTTableView *_profileTable;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    DVTBorderedView *_tableBorder;
    DVTBorderedView *_buttonBorder;
    NSArrayController *_profilesArrayController;
    NSArray *_provisioningProfiles;
}

@property(retain) NSArray *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(retain) NSArrayController *profilesArrayController; // @synthesize profilesArrayController=_profilesArrayController;
@property(retain) DVTBorderedView *buttonBorder; // @synthesize buttonBorder=_buttonBorder;
@property(retain) DVTBorderedView *tableBorder; // @synthesize tableBorder=_tableBorder;
@property(retain) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain) DVTTableView *profileTable; // @synthesize profileTable=_profileTable;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)removeProfiles:(id)arg1;
- (void)delete:(id)arg1;
- (void)addProfile:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)done:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)windowDidLoad;
- (id)initWithDevice:(id)arg1;

@end

