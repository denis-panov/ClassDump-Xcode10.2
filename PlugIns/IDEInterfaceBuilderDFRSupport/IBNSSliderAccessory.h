//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import "IBDocumentArchiving-Protocol.h"
#import "NSCoding-Protocol.h"

@class IBNSSliderAccessoryBehavior, NSImage, NSString;

@interface IBNSSliderAccessory : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _encodeAsRuntimeInstance;
    BOOL _enabled;
    IBNSSliderAccessoryBehavior *_behavior;
    NSImage *_image;
    id _target;
    SEL _action;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) IBNSSliderAccessoryBehavior *behavior; // @synthesize behavior=_behavior;
- (void).cxx_destruct;
- (id)runtimeSliderAccessory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

