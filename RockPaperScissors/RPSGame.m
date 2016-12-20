//
//  RPSGame.m
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import "RPSGame.h"

@implementation RPSGame

-(instancetype)initWithFirstTurn:(RPSTurn*)firstTurn
                      secondTurn:(RPSTurn*)secondTurn {
    self = [super init];
    if(self) {
        _firstTurn = firstTurn;
        _secondTurn = secondTurn;
    }
    return self;
}


@end
