//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTStructuredLayoutView.h>

@class NSProgressIndicator;

@interface IDENavigatorProgressStatusView : DVTStructuredLayoutView
{
    NSProgressIndicator *_progressIndicator;
    long long _progress;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (BOOL)hasDisplayableStatus;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)setNilValueForKey:(id)arg1;
- (id)init;

@end

