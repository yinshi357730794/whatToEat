//
//  CollectionViewCell.h
//  WhatToEat
//
//  Created by YinShi on 16/10/25.
//  Copyright © 2016年 YS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WWFoodBaseModel.h"

@interface CollectionViewCell : UICollectionViewCell

-(void)refreshCellWithMyFavouriteFood:(WWFoodBaseModel*)theFood;

@end
