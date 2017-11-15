//
//  MapTableViewCell.h
//  myYelpStudy
//
//  Created by CAO YUE on 6/3/17.
//  Copyright © 2017 ZHANG YUE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"
#import "YelpAnnotation.h"

@interface MapTableViewCell : UITableViewCell

- (void)upBasedOnDataModel:(YelpDataModel *)dataModel;

@end
