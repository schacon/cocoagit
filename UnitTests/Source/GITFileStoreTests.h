//
//  GITFileStoreTests.h
//  CocoaGit
//
//  Created by Geoffrey Garside on 13/10/2008.
//  Copyright 2008 ManicPanda.com. All rights reserved.
//

#import "GITTestHelper.h"

@class GITFileStore;
@interface GITFileStoreTests : GHTestCase {
    GITFileStore * store;
}

@property(readwrite,retain) GITFileStore * store;

- (void)testStoreRootIsCorrect;
- (void)testExpandHashIntoFilePath;
- (void)testDataWithContentsOfObject;
- (void)testLoadObjectWithSha1;
@end
