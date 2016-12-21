//
//  main.m
//  RockPaperScissors
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPSController.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        RPSController *gameController = [[RPSController alloc] init];
        [gameController throwDown: Paper];
        NSString *resultsMessage = [gameController messageForGame:gameController.game];
        NSLog(@"%@", resultsMessage);
    }
    return 0;
}
