//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTDisclosureHeaderView.h>

@class IBConnectionInterfaceStyle, IBImageButton;

@interface IBConnectionDisclosureHeaderView : DVTDisclosureHeaderView
{
    IBImageButton *_disclosureImageButton;
    IBConnectionInterfaceStyle *_connectionInterfaceStyle;
}

@property(readonly) IBConnectionInterfaceStyle *connectionInterfaceStyle; // @synthesize connectionInterfaceStyle=_connectionInterfaceStyle;
- (void).cxx_destruct;
- (void)disclosureClicked:(id)arg1;
- (void)layoutBottomUp;
- (double)preferredHeight;
- (struct CGRect)titleFrame;
- (struct CGRect)disclosureButtonFrame;
- (void)setDisclosed:(BOOL)arg1;
- (id)frameView;
- (id)initWithFrame:(struct CGRect)arg1 andInterfaceStyle:(id)arg2;

@end

