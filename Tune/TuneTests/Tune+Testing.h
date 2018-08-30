//
//  Tune+Testing.h
//  TuneMarketingConsoleSDK
//
//  Created by Charles Gilliam on 9/25/15.
//  Copyright © 2015 Tune. All rights reserved.
//

#import "Tune.h"
#import "Tune+Internal.h"

@interface Tune (Testing)

+ (void)setPluginName:(NSString *)pluginName;
+ (void)resetTuneTrackerSharedInstance;
+ (void)setAllowDuplicateRequests:(BOOL)allowDup;

+ (void)waitUntilAllOperationsAreFinishedOnQueue;

@end
