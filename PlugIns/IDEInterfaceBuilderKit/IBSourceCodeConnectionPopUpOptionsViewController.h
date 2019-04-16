//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

@class IBDocument, IBSourceCodeConnectionContext;

@interface IBSourceCodeConnectionPopUpOptionsViewController : DVTViewController
{
    BOOL _connectionContextConnectionIsValid;
    IBSourceCodeConnectionContext *_connectionContext;
    IBDocument *_document;
}

@property BOOL connectionContextConnectionIsValid; // @synthesize connectionContextConnectionIsValid=_connectionContextConnectionIsValid;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(readonly) IBSourceCodeConnectionContext *connectionContext; // @synthesize connectionContext=_connectionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didCancelInsertingRepresentedConnectionContext;
- (void)willInsertRepresentedConnectionContext;
- (id)initWithSourceCodeConnectionContext:(id)arg1 document:(id)arg2;

@end

