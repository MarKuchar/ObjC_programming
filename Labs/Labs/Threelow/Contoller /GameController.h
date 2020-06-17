//
//  GameController.h
//  Threelow
//
//  Created by Martin Kuchar on 2020-06-15.
//  Copyright © 2020 Martin Kuchar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dice.h"

NS_ASSUME_NONNULL_BEGIN

@interface GameController : NSObject

@property (nonatomic) NSArray *dice;
@property (nonatomic) NSMutableArray *heldDice;
@property (nonatomic) NSMutableSet *setHeldDice;

- (void) holdDie: (NSInteger) dice;


@end

NS_ASSUME_NONNULL_END
