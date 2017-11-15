//
//  YelpTableViewCell.h
//  myYelpStudy
//
//  Created by CAO YUE on 5/30/17.
//  Copyright © 2017 ZHANG YUE. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface YelpTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
