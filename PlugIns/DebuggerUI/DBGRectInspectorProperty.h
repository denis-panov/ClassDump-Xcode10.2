//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

@class DBGRectInspectorPropertyView, IDEInspectorKeyPath, NSTextField;

@interface DBGRectInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    BOOL _originAtTop;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    DBGRectInspectorPropertyView *_propertyView;
}

@property __weak DBGRectInspectorPropertyView *propertyView; // @synthesize propertyView=_propertyView;
@property __weak NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property __weak NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property __weak NSTextField *yLabel; // @synthesize yLabel=_yLabel;
@property __weak NSTextField *xLabel; // @synthesize xLabel=_xLabel;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (double)baseline;
- (void)refresh;

@end

