//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <QTKit/QTMovieView.h>

@class NSString;

@interface QTMovieView (IBQTMovieViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedMoviePath;
+ (id)keyPathsForValuesAffectingDesignableMovieURLString;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedMoviePath:(id)arg1;
- (id)ibInspectedMoviePath;
@property(retain) NSString *designableMovieURLString;
- (void)setDesignableZoomButtonsVisible:(BOOL)arg1;
- (void)setDesignableStepButtonsVisible:(BOOL)arg1;
- (BOOL)designableZoomButtonsVisible;
- (BOOL)designableStepButtonsVisible;
- (id)ibLocalAttributeKeyPaths;
@end
