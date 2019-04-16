//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTGraphKit/DTTimelineDecorator.h>

@class GPUTimelineGraphDataSource;
@protocol GPUTimelineGraphTheme;

@interface GPUTimelineDecorator : DTTimelineDecorator
{
    BOOL _decorateAsLineGraph;
    GPUTimelineGraphDataSource *_dataSource;
    unsigned long long _plane;
    id <GPUTimelineGraphTheme> _theme;
    unsigned long long _scalingPlane;
    unsigned long long _selectedIndex;
}

@property(nonatomic) BOOL decorateAsLineGraph; // @synthesize decorateAsLineGraph=_decorateAsLineGraph;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long scalingPlane; // @synthesize scalingPlane=_scalingPlane;
@property(retain, nonatomic) id <GPUTimelineGraphTheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) unsigned long long plane; // @synthesize plane=_plane;
@property(readonly, nonatomic) GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
@property(readonly, nonatomic) long long maxValue;
@property(readonly, nonatomic) unsigned long long duration;
- (void)setDataSource:(id)arg1 plane:(unsigned long long)arg2;
- (id)init;

@end

