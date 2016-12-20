//
//  RPSTurn.h
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, Move) {
    Rock,
    Paper,
    Scissors
};

@interface RPSTurn : NSObject

@property (nonatomic) Move move;

-(instancetype)initWithMove:(Move) move;

@end
