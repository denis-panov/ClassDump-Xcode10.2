//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTDocumentLocation, DVTFileDataType, NSImage, NSString;

@interface _TtC18IDESourceControlUI24SourceControlStashHolder : NSObject
{
    // Error parsing type: , name: stash
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: name
    // Error parsing type: , name: identifier
    // Error parsing type: , name: documentLocation
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) BOOL navigableItem_isLeaf;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) NSImage *navigableItem_image;

@end

