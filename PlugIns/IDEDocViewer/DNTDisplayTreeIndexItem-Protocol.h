//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEDocViewer/NSCopying-Protocol.h>

@class NSString;
@protocol DNTDisplayTreeIndexItem;

@protocol DNTDisplayTreeIndexItem <NSCopying>
@property(nonatomic, readonly) long long languageEntityKind;
@property(nonatomic, readonly) unsigned int availabilityItemID;
@property(nonatomic, readonly) unsigned int platformAvailabilityMask;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *partialAppleReferenceURL;
@property(nonatomic, readonly) id <DNTDisplayTreeIndexItem> parent;
- (BOOL)isGroup;
@property(nonatomic, readonly) int rawLanguage;
@property(nonatomic, readonly) unsigned char type;

// Remaining properties
@property(nonatomic, readonly) BOOL group;
@end
