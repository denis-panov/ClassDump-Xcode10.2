//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEImageMediaResource.h>

#import <IDEInterfaceBuilderKit/IBICVariantObject-Protocol.h>

@class IBICImageResizingBehavior, IBICImageSetRep, NSString;

@interface IBICImageMediaResource : IDEImageMediaResource <IBICVariantObject>
{
    IBICImageSetRep *_imageSetRep;
    IBICImageResizingBehavior *_resizingBehavior;
    NSString *_variantSetName;
}

+ (id)resourceWithImageSetRep:(id)arg1;
@property(retain, nonatomic) NSString *variantSetName; // @synthesize variantSetName=_variantSetName;
@property(retain, nonatomic) IBICImageResizingBehavior *resizingBehavior; // @synthesize resizingBehavior=_resizingBehavior;
@property(retain, nonatomic) IBICImageSetRep *imageSetRep; // @synthesize imageSetRep=_imageSetRep;
- (void).cxx_destruct;
- (long long)compareForVariantMatching:(id)arg1;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
@property(readonly, copy) NSString *description;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (id)generateContentForFilePath:(id)arg1 contentType:(id)arg2;
- (id)documentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

