//
//  RPSTurn.m
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import "RPSTurn.h"

@implementation RPSTurn

-(instancetype)initWithMove:(Move) move {
    
    self = [super init];
    
    if (self){
        move = move;
    }
    
    return self;
}

@end
