//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTRolloverTrackingButton.h>

@class NSImage;

@interface DVTRolloverImageButton : DVTRolloverTrackingButton
{
    NSImage *_image;
    NSImage *_alternateImage;
    BOOL _settingRolloverImage;
    NSImage *_rolloverImage;
    NSImage *_alternateRolloverImage;
}

+ (id)closeButtonImage;
@property(retain, nonatomic) NSImage *alternateRolloverImage; // @synthesize alternateRolloverImage=_alternateRolloverImage;
@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
- (void).cxx_destruct;
- (void)configureAsCloseButton;
- (void)_updateImages;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)setImage:(id)arg1;

@end

