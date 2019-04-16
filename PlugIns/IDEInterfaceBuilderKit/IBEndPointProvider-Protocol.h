//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBCancellationToken, IBDocument, IBDragConnectionContext, NSArray, NSDictionary, NSView;

@protocol IBEndPointProvider <NSObject>
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (IBCancellationToken *)showTargetIdentifierForEndPoint:(id)arg1;
- (NSArray *)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(NSView *)arg2 withContext:(IBDragConnectionContext *)arg3 forDocument:(IBDocument *)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(NSDictionary *)arg1;
- (NSDictionary *)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(NSView *)arg2 withContext:(IBDragConnectionContext *)arg3 forDocument:(IBDocument *)arg4;

@optional
- (void)endPointConsumerDidFinishConnecting;
- (void)endPointConsumerWillStartConnecting;
@end

