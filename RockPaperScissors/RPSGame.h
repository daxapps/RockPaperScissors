//
//  RPSGame.h
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSTurn.h"

@interface RPSGame : NSObject

@property (nonatomic) RPSTurn *firstTurn;
@property (nonatomic) RPSTurn *secondTurn;

-(instancetype)initWithFirstTurn:(RPSTurn*)firstTurn
                      secondTurn:(RPSTurn*)secondTurn;

@end
