//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSegmentedCell.h>

@interface _DVTSegmentedCell : NSSegmentedCell
{
    BOOL _useMenuDelay;
    BOOL _useMenuDelayForSelectedSegment;
}

@property BOOL useMenuDelayForSelectedSegment; // @synthesize useMenuDelayForSelectedSegment=_useMenuDelayForSelectedSegment;
@property BOOL useMenuDelay; // @synthesize useMenuDelay=_useMenuDelay;
- (double)_menuDelayTimeForSegment:(long long)arg1;
- (id)init;

@end
