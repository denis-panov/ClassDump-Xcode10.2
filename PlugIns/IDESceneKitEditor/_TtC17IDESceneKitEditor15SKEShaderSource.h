//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUndoManager;
@protocol _TtP17IDESceneKitEditor23SKEShaderSourceDelegate_;

__attribute__((visibility("hidden")))
@interface _TtC17IDESceneKitEditor15SKEShaderSource : NSObject
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: helpSource
    // Error parsing type: , name: helpCode
    // Error parsing type: , name: delegate
    // Error parsing type: , name: annotations
}

- (void).cxx_destruct;
- (void)removeAllAnnotations;
@property(nonatomic, copy) NSArray *annotations; // @synthesize annotations;
- (id)init;
@property(nonatomic, readonly) NSUndoManager *undoManager;
@property(nonatomic) __weak id <_TtP17IDESceneKitEditor23SKEShaderSourceDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSString *helpCode; // @synthesize helpCode;
@property(nonatomic, copy) NSString *sourceCode;

@end
