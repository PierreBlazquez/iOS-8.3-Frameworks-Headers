//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCapture/ICCameraFolder.h>

@interface MSCameraFolder : ICCameraFolder
{
    void *_msCameraFolderProperties;
}

- (void)finalize;
- (id)itemMatchingName:(id)arg1 fsSN:(unsigned long long)arg2 fsCreationTime:(struct timespec *)arg3 fsSize:(long long)arg4;
@property(readonly) struct timespec fsModificationTime;
- (id)folderMatchingPath:(id)arg1;
@property(readonly) long long fsSize;
@property(readonly) struct timespec fsCreationTime;
@property(readonly) unsigned long long fsSN;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(struct timespec)arg5 fsModificationTime:(struct timespec)arg6 fsSize:(long long)arg7 fsFlags:(unsigned int)arg8;
- (BOOL)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (void)dealloc;

@end

