//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionLibrary, GTFActionTimelineModel, NSString;

@protocol GTFActionLibraryReferenceLookupSourceDelegate <NSObject>
- (void)actionLibraryForceLookupUpdate:(GTFActionLibrary *)arg1;
- (GTFActionTimelineModel *)timelineModelForActionLibrary:(GTFActionLibrary *)arg1 forActionNamed:(NSString *)arg2;
@end

