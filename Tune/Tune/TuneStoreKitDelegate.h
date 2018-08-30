//
//  TuneStoreKitDelegate.h
//  Tune
//
//  Created by Harshal Ogale on 4/20/15.
//  Copyright (c) 2015 TUNE. All rights reserved.
//

#if !TARGET_OS_WATCH

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>


@interface TuneStoreKitDelegate : NSObject

+ (void)startObserver;
+ (void)stopObserver;

@end

#endif
