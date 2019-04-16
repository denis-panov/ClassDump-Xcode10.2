//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSColor.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSColor (IBDocumentArchiving) <IBDocumentArchiving>
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (CDUnion_4a127b1b)unarchiveWhiteValueWithDocumentUnarchiver:(id)arg1;
+ (CDUnion_24d33b01)unarchiveRGBValueWithDocumentUnarchiver:(id)arg1;
+ (CDUnion_b8f7e27c)unarchiveCMYKValueWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWhiteComponentsWithDocumentArchiver:(id)arg1;
- (void)archiveRGBComponentsWithDocumentArchiver:(id)arg1;
- (void)archiveCMYKComponentsWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

