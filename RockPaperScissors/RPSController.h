//
//  RPSController.h
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/21/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSGame.h"

@interface RPSController : NSObject

@property (nonatomic) RPSGame *game;

-(void)throwDown:(Move) playersMove;
-(NSString*)messageForGame:(RPSGame*)game;
    //-(RPSTurn*)winner;
-(NSString*)resultString:(RPSGame*)game;

@end
