//
//  Kitchen.h
//  PizzaRestaurant
//
//  Created by Steven Masuch on 2014-07-19.
//  Copyright (c) 2014 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"
#import "DeliveryDelegate.h"
@class  Kitchen;

NS_ASSUME_NONNULL_BEGIN

@protocol KitchenDelegate <NSObject>

- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings;
- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen;

@optional
- (void)kitchenDidMakePizza:(Pizza *)pizza;

@end

@interface Kitchen : NSObject

@property (nonatomic, weak) id<KitchenDelegate> kitchenDelegate;
@property (nonatomic, weak) id<DeliveryDelegate> deliveryDelegate;

- (Pizza *)makePizzaWithSize:(PizzaSize)size toppings:(NSArray *)toppings;
- (Pizza *)makeCustomPizza:(PizzaSize)size customtype:(NSString *) customPizza;
+ (NSString *)waiter: (NSString *) promt;


@end

NS_ASSUME_NONNULL_END
