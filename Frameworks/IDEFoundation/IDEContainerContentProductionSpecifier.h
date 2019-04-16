//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class IDEContainer, NSSet;
@protocol IDEContainerContentProducer;

@interface IDEContainerContentProductionSpecifier : NSObject <NSCopying>
{
    IDEContainer *_container;
    NSSet *_types;
    id <IDEContainerContentProducer> _producer;
}

@property(readonly) id <IDEContainerContentProducer> producer; // @synthesize producer=_producer;
@property(readonly) NSSet *types; // @synthesize types=_types;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContentProductionSpecifier:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithContainer:(id)arg1 types:(id)arg2 producer:(id)arg3;

@end

