//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTSourceControl/DVTSourceControlAuthor.h>

@class ABPerson, NSImage;

@interface DVTSourceControlAuthor (IDEKitAdditions)
@property(readonly, copy) NSImage *avatarImage;
- (id)_imageFromContact:(id)arg1;
- (id)defaultImage;

// Remaining properties
@property(retain) ABPerson *pairedPerson;
@end

