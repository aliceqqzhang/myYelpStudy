//
//  YelpDataStore.h
//  myYelpStudy
//
//  Created by CAO YUE on 6/3/17.
//  Copyright © 2017 ZHANG YUE. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "YelpDataModel.h"
@import CoreLocation;
@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end
