//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCTestExpectation.h>

#import "XCTAsyncActivity.h"

@class NSError, NSString;

@interface XCTAsyncActivity : XCTestExpectation <XCTAsyncActivity>
{
    NSError *_error;
    _Bool _timedOut;
}

@property _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)dealloc;
- (void)finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

