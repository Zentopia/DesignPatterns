//
//  Mocha.h
//  DecoratorPattern
//
//  Created by Utopia on 16/9/2.
//  Copyright © 2016年 Utopia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Beverage.h"

@interface Mocha : NSObject<Beverage>

@property (strong, nonatomic)id<Beverage> beverage;

- (instancetype)initWithBeverage:(id<Beverage>) beverage;
@end
