//
//  ImageModel.h
//  InfiniteLoopView
//
//  Created by YouXianMing on 16/5/5.
//  Copyright © 2016年 YouXianMing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InfiniteLoopViewProtocol.h"
#import "InfiniteLoopCellClassProtocol.h"

@interface ImageModel : NSObject <InfiniteLoopViewProtocol, InfiniteLoopCellClassProtocol>

@property (nonatomic, copy) NSString *imageUrl;

+ (instancetype)imageModelWithImageUrl:(NSString *)url;

@property (nonatomic, copy) NSString *infiniteLoopCellReuseIdentifier;
@property (nonatomic)       Class     infiniteLoopCellClass;

@end
