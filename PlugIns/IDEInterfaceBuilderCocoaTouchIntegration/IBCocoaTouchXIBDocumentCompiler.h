//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBXIBDocumentCompiler.h>

@interface IBCocoaTouchXIBDocumentCompiler : IBXIBDocumentCompiler
{
}

+ (BOOL)shouldCopyDeviceSpecificStringsFilesForDocument:(id)arg1;
+ (BOOL)shouldCompileDeviceSpecificTopLevelPackagesForDocument:(id)arg1;
- (id)compileWithOptions:(id)arg1 error:(id *)arg2;
- (id)compiledPackageWithOptions:(id)arg1 marshallingContext:(id)arg2 archivingContext:(id)arg3 diagnosticsBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)compiledKeyedObjectsDataWithMarshallingContext:(id)arg1 archivingContext:(id)arg2 diagnosticsBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

