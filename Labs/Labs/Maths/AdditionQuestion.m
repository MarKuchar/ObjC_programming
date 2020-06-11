//
//  AdditionQuestion.m
//  Maths
//
//  Created by Martin Kuchar on 2020-06-09.
//  Copyright © 2020 Martin Kuchar. All rights reserved.
//

#import "AdditionQuestion.h"
#import "UserInput.h"

@implementation AdditionQuestion

- (instancetype)init {
if (self = [super init]) {
    NSUInteger firstNumber = arc4random_uniform(100);
    NSUInteger secondNumber = arc4random_uniform(100);
    _question = [NSString stringWithFormat:@"%lu + %lu = ?", firstNumber, secondNumber];
    _answer = firstNumber + secondNumber;
    _startTime = [NSDate date];
}
return self;
}

- (NSUInteger)answer {
    _endTime = [NSDate date];
    return _answer;
}

- (bool) compareAnswer: (NSString *) answer andResult: (NSString *) result {
    if ([answer isEqualToString:result]) {
        NSLog(@"Correct");
        return true;
    } else {
        NSLog(@"Wrong!");
        return false;
    }
}

- (NSTimeInterval) answerTime {
    NSTimeInterval timeInterval = [_endTime timeIntervalSinceDate: _startTime];
    return timeInterval;
}

@end
